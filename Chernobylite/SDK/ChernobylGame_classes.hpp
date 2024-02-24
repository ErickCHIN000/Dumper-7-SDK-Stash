#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x298 - 0x220)
// Class ChernobylGame.ActorHighlightImage
class AActorHighlightImage : public AActor
{
public:
	uint8                                        Pad_111[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           AlphaCurve;                                        // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_112[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Material;                                          // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UPoseableMeshComponent*, class USkeletalMeshComponent*> SkeletalMeshMapping;                               // 0x240(0x50)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class AActor*                                HighlightedActor;                                  // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AActorHighlightImage* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ChernobylGame.BaseBuff
class UBaseBuff : public UObject
{
public:
	class AActor*                                Owner;                                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MLifeTime;                                         // 0x30(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         MLifeTimeEnabled;                                  // 0x34(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseBuff* GetDefaultObj();

	bool IsHidden();
	class FText GetReadableName();
};

// 0x8 (0x40 - 0x38)
// Class ChernobylGame.AICalmReactionBuff
class UAICalmReactionBuff : public UBaseBuff
{
public:
	uint8                                        Pad_121[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAICalmReactionBuff* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ChernobylGame.AIMeleeDelay
class UAIMeleeDelay : public UBaseBuff
{
public:

	static class UClass* StaticClass();
	static class UAIMeleeDelay* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ChernobylGame.AIMeleeStunBuff
class UAIMeleeStunBuff : public UBaseBuff
{
public:

	static class UClass* StaticClass();
	static class UAIMeleeStunBuff* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class ChernobylGame.AKSaveTestActor
class AAKSaveTestActor : public AActor
{
public:
	float                                        SomeSavingVar;                                     // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_126[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAKSaveTestActor* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.AnimSystemQueue
class UAnimSystemQueue : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UAnimSystemQueue* GetDefaultObj();

};

// 0x0 (0x258 - 0x258)
// Class ChernobylGame.AntiBuildSystemVolume
class AAntiBuildSystemVolume : public ATriggerVolume
{
public:

	static class UClass* StaticClass();
	static class AAntiBuildSystemVolume* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class ChernobylGame.AreaSlotVolume
class AAreaSlotVolume : public ATriggerBox
{
public:
	class FName                                  SlotName;                                          // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AAreaSlotVolume* GetDefaultObj();

	void OnOverlapStart(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0xF8 (0x1A8 - 0xB0)
// Class ChernobylGame.ArmorComponent
class UArmorComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            ArmorChangedDelegate;                              // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ArmorValueChangedDelegate;                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InsertUsedUpDelegate;                              // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ArmorLoadedDelegate;                               // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            DamageAbsorbedDelegate;                            // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UDamageType>>       ProtectsFromDamageTypes;                           // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                        NonCombatCooldown;                                 // 0x110(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CombatCooldown;                                    // 0x114(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentCooldown;                                   // 0x118(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentMaxCooldown;                                // 0x11C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            ArmorInfoDT;                                       // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FArmorInfo                            CurrentArmorInfo;                                  // 0x128(0x78)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                         IsInCombat;                                        // 0x1A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_192[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UArmorComponent* GetDefaultObj();

	float TakeDamage(float Points, TSubclassOf<class UDamageType> InDamageClass);
	float ReplenishArmor(float Points);
	void OnPawnCombatLeft();
	void OnPawnCombatEntered();
	void OnMaximimHPModified();
	struct FArmorInfo K2_GetArmorInfo(class FName Name, bool* OutIsValid);
	bool IsArmorEquipped();
	float GetMaxArmorValue();
	struct FArmorInsertInfo GetInsertInfo();
	class FName GetEquippedArmorName();
	class FName GetEquippedArmorInfoName();
	struct FArmorInfo GetEquippedArmorInfo();
	float GetCurrentArmorValue();
	int32 GetArmorStat(enum class EArmorStatType StatType);
	float EquipDifferentArmor(class FName ArmorInfoName);
	bool CanProtectFromDamageType(TSubclassOf<class UDamageType> InDamageClass);
	float ArmorStatToAlertModifier(int32 InArmorStat);
};

// 0x70 (0x290 - 0x220)
// Class ChernobylGame.AudioObjectShooter
class AAudioObjectShooter : public AActor
{
public:
	class AActor*                                ActorToSpawn;                                      // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        AmbientSounds;                                     // 0x228(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        DelayBetweenWaves;                                 // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveLifeTime;                                      // 0x23C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRate;                                            // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayToTeleport;                                   // 0x248(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTime;                                           // 0x24C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistToPlayer;                                   // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6[0x3C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAudioObjectShooter* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class ChernobylGame.Backend
class ABackend : public AActor
{
public:
	class UCustomGameInstance*                   GameIstance;                                       // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ABackend* GetDefaultObj();

	void Update2(TArray<struct FEventResult>& Results);
	void Update(TArray<struct FEventResult>& Results);
	bool UnsetCompanionFromCurrentActiveEvent(class FName Companion);
	bool SetCompanionForActiveEvent(class FName Event, class FName Companion);
	void RemoveFromPotential(class FName Event);
	void PutToPotential(class FName Event);
	bool IsMapEnabled(enum class EEventMap Map);
	bool IsMainQuest(class FName EventID);
	void Init();
	TArray<class FName> GetPossibleMissions(enum class EEventMap FromMap);
	TArray<class FName> GetPossibleCompanions(class FName Event);
	struct FOuterEvent GetOuterEventStructure(class FName Event);
	int32 GetEventCount(enum class EEventMap Map);
	int32 GetCurrentDay();
	class FName GetCompanion4Mission(class FName Event);
	float GetChance4Mission(class FName Event, class FName Companion);
	TArray<struct FInnerEvent> GetActiveEvents();
	bool ForceDeactiveEvent(class FName EventID);
	bool ForceActiveEvent(class FName EventID, enum class EEventMap Map);
	bool EnableMap(enum class EEventMap Map);
	bool AdditionalDays(class FName EventID, int32 Days);
};

// 0x60 (0x280 - 0x220)
// Class ChernobylGame.BaseBuildSystemEntity
class ABaseBuildSystemEntity : public AActor
{
public:
	bool                                         ShouldBeOmmited;                                   // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuildType                        Type;                                              // 0x221(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         EditArea;                                          // 0x230(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInControlledArea;                                // 0x238(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AreasCompanionID;                                  // 0x23C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReceiveScrapWhenDestroyed;                         // 0x244(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimSequenceBase*>             InteractionAnims;                                  // 0x248(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  BuildID;                                           // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWasPlacedByPlayer;                                // 0x260(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C3[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CompanionAtBuildingID;                             // 0x270(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  SpotComponentID;                                   // 0x278(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ABaseBuildSystemEntity* GetDefaultObj();

	void SpawnPickableScrappedResource(class FName ResourceName, float Amount);
	void Show();
	void SetToBeUsedByCompanion(class ACGNPC* CompanionRef);
	void SetStorID(int32 NewID, int32 NewCols);
	void SetBuildID(class FName ID);
	void RestoreCompanionToOriginalSpot();
	void Replace();
	void Placed();
	void OnGlobalSkinChangedCPP(enum class EGlobalSkinType SkinType, class FName NewSkinName);
	void OnGlobalSkinChanged(enum class EGlobalSkinType SkinType, class FName NewSkinName);
	bool MultiSweapForCollision(const struct FVector& LocationOffset);
	void Lifted();
	bool IsCurrentlyUsedByCompanion();
	void Hide();
	void GetStorageID(int32* ID, int32* Cols);
	struct FBuildSystemRangeDecalInfo GetRangeDecalInfo(enum class EBuildSystemDecalType DecalType);
	class FName GetBuildID();
	TArray<class UPrimitiveComponent*> GetAdditionalComponentsToHighlight();
	void EnableOutline(bool Enable);
	void Deleted();
};

// 0x0 (0x4A0 - 0x4A0)
// Class ChernobylGame.BillboardedTextRender
class UBillboardedTextRender : public UTextRenderComponent
{
public:

	static class UClass* StaticClass();
	static class UBillboardedTextRender* GetDefaultObj();

};

// 0x30 (0xE0 - 0xB0)
// Class ChernobylGame.BuffManager
class UBuffManager : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            BuffManagerAdded;                                  // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BuffManagerRemoved;                                // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UBaseBuff*>                     Buffs;                                             // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBuffManager* GetDefaultObj();

	bool RemoveBuff(TSubclassOf<class UBaseBuff> Buff);
	bool HaveBuff(TSubclassOf<class UBaseBuff> Buff);
	bool AddBuff(TSubclassOf<class UBaseBuff> Buff);
};

// 0x250 (0x280 - 0x30)
// Class ChernobylGame.BufforedQuickTimeEventNode
class UBufforedQuickTimeEventNode : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Update;                                            // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BufferOpened;                                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BufferClosed;                                      // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4AA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4AB[0x200];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBufforedQuickTimeEventNode* GetDefaultObj();

	void StickRotationVertical(float AxisValue);
	void StickRotationHorizontal(float AxisValue);
	class UBufforedQuickTimeEventNode* PlayBufforedQuickTimeEvent(class UObject* WorldContextObject, struct FQuickTimeEventData& QuickTimeEvent, class APlayerController* PlayerController, float MinInputForBufferOpening, float BufferEmptyingSpeed, float MaxBufferSize);
	void HoldButtonStop();
	void HoldButtonStart();
	void CancelQuickTimeEvent();
	void ButtonPressed();
	void AxisPressed(float AxisValue);
	void AxisHeld(float AxisValue);
};

// 0x60 (0x4C0 - 0x460)
// Class ChernobylGame.BuildEntityCompanionSpotComponent
class UBuildEntityCompanionSpotComponent : public UArrowComponent
{
public:
	class FName                                  CurrentCompanion;                                  // 0x460(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 ReturnPositionActor;                               // 0x468(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 CurrentCompanionActor;                             // 0x490(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBuildEntityCompanionSpotComponent* GetDefaultObj();

	struct FVector GetCompanionSpawnLocation();
	bool CanPlaceCompanion();
};

// 0x20 (0x278 - 0x258)
// Class ChernobylGame.BuildingBuiltVolume
class ABuildingBuiltVolume : public ATriggerVolume
{
public:
	FMulticastInlineDelegateProperty_            OnBuildingBuiltDelegate;                           // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   CatalogPath;                                       // 0x268(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ABuildingBuiltVolume* GetDefaultObj();

};

// 0x108 (0x300 - 0x1F8)
// Class ChernobylGame.BuildMarker
class UBuildMarker : public USceneComponent
{
public:
	bool                                         Active;                                            // 0x1F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EditMode;                                          // 0x1F9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOnLevelMode;                                     // 0x1FA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E4[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseBuildSystemEntity*                EntityToSpawn;                                     // 0x200(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildID;                                           // 0x208(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngle;                                          // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultOffsetFromCamera;                           // 0x214(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABuildSystemVolume*                    LastBuildSystemVolume;                             // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AAntiBuildSystemVolume*                LastAntiBuildSystemVolume;                         // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5ED[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     SpawnedMaterial;                                   // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5F0[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBuildMarker* GetDefaultObj();

	void Turn(const struct FRotator& Dir);
	bool SpawnEntity();
	void SetMesh(class UStaticMesh* NewMesh);
	void SetIsOnLevelMode(bool NewValue, struct FTransform& Transform);
	void SetBuildID(class FName ID, class ABaseBuildSystemEntity* StartingRotationActor);
	bool IsInEditMode();
	bool IsEmpty();
	bool IsBuildEntityInControlledArea();
	struct FTransform GetTransform();
	class ABuildSystemVolume* GetLastBuildSystemVolume();
	bool GetIsBuildableAvailable();
	bool GetHasEnoughResourcesCached();
	class FName GetCurrentBuildID();
	bool GetCanPlaceQuantityCheckCached();
	class ABaseBuildSystemEntity* GetBuildEntityInFront();
	void ClearInternals();
	bool CanBePlaced();
	void ActivateEditMode();
	void ActivateBuildMode();
};

// 0x0 (0x258 - 0x258)
// Class ChernobylGame.BuildSystemCleanerVolume
class ABuildSystemCleanerVolume : public ATriggerVolume
{
public:

	static class UClass* StaticClass();
	static class ABuildSystemCleanerVolume* GetDefaultObj();

	void Activate();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.BuildSystemInterface
class IBuildSystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBuildSystemInterface* GetDefaultObj();

	void InputUpPressed();
	void InputRotationMode(float InAxis);
	void InputRightPressed();
	void InputR2Released();
	void InputR2Pressed();
	void InputR1Pressed();
	void InputLeftPressed();
	void InputL2Released();
	void InputL2Pressed();
	void InputL1Pressed();
	void InputFaceUp();
	void InputFaceRight();
	void InputFaceLeft();
	void InputFaceDown();
	void InputDPadUpPressed();
	void InputDPadRightPressed();
	void InputDPadLeftPressed();
	void InputDPadDownPressed();
	void InputDownPressed();
};

// 0x10 (0x268 - 0x258)
// Class ChernobylGame.BuildSystemVolume
class ABuildSystemVolume : public ATriggerVolume
{
public:
	class FName                                  CompanionID;                                       // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkplaceQuality;                                  // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_751[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABuildSystemVolume* GetDefaultObj();

	void ChangeWorkplaceQuality(int32 Delta);
};

// 0x28 (0x248 - 0x220)
// Class ChernobylGame.CGMovementState
class ACGMovementState : public AActor
{
public:
	uint8                                        Pad_B60[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGMovementState* GetDefaultObj();

	void Utility_AnyKeyboardKey_Pressed();
	void Utility_AnyGamepadKey_Pressed();
	void StateTick(float InDeltaTime);
	void SetRightLeftOnceLast(float InVal);
	class FString RecoverKeyCombination(TArray<class FString>& InCombination);
	void PC_Shortcuts_ZoomUp();
	void PC_Shortcuts_ZoomDown();
	void PC_Shortcuts_QuickUseScroll();
	void PC_Shortcuts_QuickUse8();
	void PC_Shortcuts_QuickUse7();
	void PC_Shortcuts_QuickUse6();
	void PC_Shortcuts_QuickUse5();
	void PC_Shortcuts_QuickUse4();
	void PC_Shortcuts_QuickUse3();
	void PC_Shortcuts_QuickUse2();
	void PC_Shortcuts_QuickUse1();
	void PC_Shortcuts_QuickUse();
	void PC_Shortcuts_Pause();
	void PC_Shortcuts_MoveUp();
	void PC_Shortcuts_MoveRight();
	void PC_Shortcuts_MoveLeft();
	void PC_Shortcuts_MoveDown();
	void PC_Shortcuts_Map();
	void PC_Shortcuts_Inventory();
	void PC_Shortcuts_Grab_Release();
	void PC_Shortcuts_Grab();
	void PC_Movement_Up();
	void PC_Movement_Sprint_Release();
	void PC_Movement_Sprint();
	void PC_Movement_Right();
	void PC_Movement_Left();
	void PC_Movement_Jump_Release();
	void PC_Movement_Jump();
	void PC_Movement_Down();
	void PC_Movement_Crouch_Release();
	void PC_Movement_Crouch();
	void PC_Interaction_Use_Release();
	void PC_Interaction_Use();
	void PC_Interaction_UI_Release();
	void PC_Interaction_UI();
	void PC_Interaction_Tabs_Right();
	void PC_Interaction_Tabs_Left();
	void PC_Interaction_Scrap();
	void PC_Interaction_Reload_Release();
	void PC_Interaction_Reload();
	void PC_Interaction_HideWeapon();
	void PC_Interaction_Flashlight();
	void PC_Interaction_BuildSystem();
	void PC_Interaction_Attack_Release();
	void PC_Interaction_Attack();
	void PC_Interaction_AlternativeAttack_Release();
	void PC_Interaction_AlternativeAttack();
	void PC_Interaction_Accept_Release();
	void PC_Interaction_Accept();
	void OnSwitchStart();
	void OnSwitchEnd();
	void OnReloadStart();
	void OnReloadEnd();
	void OnKeyCombination(TArray<class FString>& InCombination);
	void OnExit();
	void OnEnter();
	void OnClimbRequest(struct FCGClimbQuery& InClimbQuery);
	void InitPawn();
	void Global_Movement_UpDown(float AxisValue);
	void Global_Movement_RightLeft(float AxisValue);
	void Global_Movement_Look_UpDown(float AxisValue);
	void Global_Movement_Look_RightLeft(float AxisValue);
	void Global_Movement_Lean(float AxisValue);
	float GetRightLeftOnceLast();
	float GetLeanAxis();
	bool GetEnemyChatterEnabled();
	bool GetClimbEnabled();
	struct FCGMovementStateAdditionalInfo GetAdditionalInfo();
	void Delegate_OnDialogueStarted();
	void Delegate_OnDialogueEnded();
	void Console_Shortcuts_QuickUse4();
	void Console_Shortcuts_QuickUse3();
	void Console_Shortcuts_QuickUse2();
	void Console_Shortcuts_QuickUse1();
	void Console_Shortcuts_Pause();
	void Console_Movement_Up();
	void Console_Movement_Sprint_Release();
	void Console_Movement_Sprint();
	void Console_Movement_Rotate_Right(float AxisValue);
	void Console_Movement_Rotate_Left(float AxisValue);
	void Console_Movement_Right();
	void Console_Movement_Reloading_Release();
	void Console_Movement_Reloading();
	void Console_Movement_Left();
	void Console_Movement_Jump_Release();
	void Console_Movement_Jump();
	void Console_Movement_Down();
	void Console_Movement_Crouch_Release();
	void Console_Movement_Crouch();
	void Console_Interaction_UI_Release();
	void Console_Interaction_UI();
	void Console_Interaction_Tabs_Right();
	void Console_Interaction_Tabs_Left();
	void Console_Interaction_Scrap();
	void Console_Interaction_FlashLight();
	void Console_Interaction_Attack_Release();
	void Console_Interaction_Attack();
	void Console_Interaction_AlternativeAttack_Release();
	void Console_Interaction_AlternativeAttack();
	void ClearKeyCombination();
	void AddKeyCombination(const class FString& InKeyString);
};

// 0x68 (0x2B0 - 0x248)
// Class ChernobylGame.CGActionClimbState
class ACGActionClimbState : public ACGMovementState
{
public:
	uint8                                        Pad_BC3[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGActionClimbState* GetDefaultObj();

};

// 0x250 (0x470 - 0x220)
// Class ChernobylGame.CGActiveItem
class ACGActiveItem : public AActor
{
public:
	uint8                                        Pad_E95[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveItemAnimDatabase               AnimDatabase;                                      // 0x230(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EState                            ItemState;                                         // 0x420(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EType                             ItemType;                                          // 0x421(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivationBlocked;                                // 0x422(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlternativeActivationBlocked;                     // 0x423(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EState                            PostActivationStateDef;                            // 0x424(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EState                            PostAlternativeActivationStateDef;                 // 0x425(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActivateCooldown;                                  // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlternativeActivateCooldown;                       // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryEntry                       LastEntry;                                         // 0x430(0x30)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bUsePanini;                                        // 0x460(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EAB[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGActiveItem* GetDefaultObj();

	void UpdateUpgradeDisplay(enum class EUpgradeType Type, class FName UpgradeID, bool bCanBeCrafted);
	void UpdateUpgrade(enum class EUpgradeType Type, class FName UpgradeID);
	void SetItemDisabled();
	void SetAlternativeActivationBlocked(bool InNewBlocked);
	void SetActivationBlocked(bool InNewBlocked);
	bool SafelySetIdleState();
	void ResetUpgrades(enum class EUpgradeType Type);
	void RefreshUpgrades();
	void OnPlayerInitialized();
	void OnMovementStateChanged(TSubclassOf<class ACGMovementState> InNewMovementState);
	void OnInventoryInitialized();
	void OnHideShowAdditional(enum class EState OutTargetState);
	void OnCancelRequest();
	void LoadPaniniMaterials(bool InMasterLerp);
	struct FVector GetUpgradeLocation(enum class EUpgradeType Type, class FName UpgradeID);
	struct FTransform GetOtherHandIKTarget();
	bool GetItemDisabled();
	enum class EState GetInterpretedItemState();
	class USkeletalMeshComponent* GetHands();
	bool GetCanBeQueried();
	void ForceItemState(class AActor* InContext, enum class EState InNewState);
	void FailedAlternativeActivateItem();
	void FailedActivateItem();
	void AlternativeActivationButtonReleased();
	void AlternativeActivateItem();
	void AdditionalUsabilityDos();
	void AdditionalUsability();
	void ActivationFinished(bool bInGracefully, bool bInNoSwap);
	void ActivationButtonReleased();
	void ActivateItem();
};

// 0x8 (0x268 - 0x260)
// Class ChernobylGame.CGActorDebug
class UCGActorDebug : public UUserWidget
{
public:
	class ACGAICharacter*                        Owner;                                             // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCGActorDebug* GetDefaultObj();

	void Refresh();
};

// 0x10 (0xC0 - 0xB0)
// Class ChernobylGame.CGAggroComponent
class UCGAggroComponent : public UActorComponent
{
public:
	TArray<struct FCGPerceptionMemory>           PerceptionMemories;                                // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCGAggroComponent* GetDefaultObj();

	void UpdateAggroStates();
	void OnSightUpdate(class AActor* InActor, const struct FAIStimulus& InStimulus);
	void OnHearingUpdate(class AActor* InInstigator, float InNoiseRange, const struct FVector& InNoiseLocation, float InNoiseStrength, class FName InTag, float InMaxDistanceToActivateCombat);
	void OnDeath(class AActor* InAActor, struct FCGDamageEvent& InDamageEvent);
	TArray<class ACGCharacter*> GetPotentialTargets();
	TArray<struct FCGPerceptionMemory> GetMemories();
	class ACGCharacter* GetBestTarget(bool bInPrioritizeHero, bool bInCheckPath);
	void FlushMemory();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGAI
class UCGAI : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCGAI* GetDefaultObj();

	void SetNewMoveToActor(class AAIController* InAIController, class AActor* InNewMoveToActor);
	struct FVector GetMoveToTaskLocation(class AAIController* InAIController);
	class UBTTaskNode* GetCurrentlyActiveTask(class AAIController* InAIController);
};

// 0x58 (0x510 - 0x4B8)
// Class ChernobylGame.CGCharacter
class ACGCharacter : public ACharacter
{
public:
	FMulticastInlineDelegateProperty_            OnTakeCGDamage;                                    // 0x4B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReverbVolumes;                                     // 0x4C8(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Pad_1295[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACGAICharacter*>                MemoryOfMeOwners;                                  // 0x4E8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1297[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGCharacter* GetDefaultObj();

	void OverrideDamageClass(TSubclassOf<class UCGDamageType> InDamageClass);
	float GetVisibilityModifier();
	TArray<class ACGAICharacter*> GetMemoryOfMeOwners();
	class UPrimitiveComponent* GetMappedDamageCollider(enum class EDamageCollider InDamageCollider);
	bool GetDamageClassOverrideEnabled();
	TSubclassOf<class UCGDamageType> GetDamageClassOverride();
	class UCGCharacterMovementComponent* GetCGCharacterMovementComponent();
	void DisableDamageClassOverride();
};

// 0xA38 (0xF48 - 0x510)
// Class ChernobylGame.CGAICharacter
class ACGAICharacter : public ACGCharacter
{
public:
	class APatrolActor*                          NextPatrolActor;                                   // 0x510(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMoveToTaskFinished;                              // 0x518(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCGAIStateComponent*                   AIStateComponent;                                  // 0x528(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCGAggroComponent*                     AIAggroComponent;                                  // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetComponent*                      Debug_AttentionBarWidget;                          // 0x538(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCGAIPerception*                       PerceptionComponent;                               // 0x540(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetComponent*                      ActorDebugWidget;                                  // 0x548(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAIInitialisation;                                // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UCGAIState>                DefaultAIState;                                    // 0x560(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttentionBarDebugOn;                              // 0x568(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHealthComponent*                      AIHealthComponent;                                 // 0x570(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 DialogueGestures_Neutral;                          // 0x578(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 DialogueGestures_Aggressive;                       // 0x588(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 StandbyGestures;                                   // 0x598(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<TSubclassOf<class ACGCharacter>>        AIAggroPriority;                                   // 0x5A8(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	class UCGHearingSense*                       HearingSenseComponent;                             // 0x5F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHeroGettingClose;                                // 0x600(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHeroLeavingClose;                                // 0x610(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHeroGettingMeleeRange;                           // 0x620(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHeroLeavingMeleeRange;                           // 0x630(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class UInventoryComponent2*                  InventoryComponent;                                // 0x640(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Dialogue_IdlePose;                                 // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Dialogue_IdleAdditive;                             // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Dialogue_Transition;                               // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldUseDialogueAnimBP;                          // 0x660(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         Dialogue_PreDialoguePose;                          // 0x668(0x38)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Dialogue_OnTransitionFinished;                     // 0x6A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Dialogue_OnTransitionAdded;                        // 0x6B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Dialogue_OnUpdate;                                 // 0x6C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Dialogue_OnPickableSpawn;                          // 0x6D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	float                                        NotifyDeathTime;                                   // 0x6E0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NotifyDeathElapsed;                                // 0x6E4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        LastDamageEvent;                                   // 0x6E8(0xE0)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bBodyDiscovered;                                   // 0x7C8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomBehaviorOnStealthkillAttempt;               // 0x7C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStealthkillCustomBehavior;                       // 0x7D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        MotionfixAlpha;                                    // 0x7E0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCinematicSet;                                    // 0x7E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                         bIsBeingStealthKilled;                             // 0x7F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStealthkillPossibilityDisabled;                   // 0x7F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2102[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StealthKillTutorial;                               // 0x7FC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIKDebugEnabled;                                   // 0x804(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2109[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGIKDebugInfo                        IKDebugInfo;                                       // 0x808(0x1C0)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStealthkill;                                     // 0x9C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCombatEntered;                                   // 0x9D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCombatLeft;                                      // 0x9E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<enum class EAIStateType, class UAkAudioEvent*> AIStateSounds;                                     // 0x9F8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EAIStateSoundEventType, class UAkAudioEvent*> AIStateSoundsEvents;                               // 0xA48(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         RagdollSoundEvent;                                 // 0xA98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RagdollRTPCName;                                   // 0xAA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          RagdollPhysicsBodiesToEnableHitGenerationOn;       // 0xAA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_2128[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          AudioComp;                                         // 0xAE0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         CurrentlyActiveAISoundEvent;                       // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        RageSwitch;                                        // 0xAF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        IdleSwitch;                                        // 0xAF8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            LootDT;                                            // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            LootDTGateOfMadness;                               // 0xB08(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LootDTRowName;                                     // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>               CustomLootRowPerMap;                               // 0xB18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UDataTable*                            LootDTRifle;                                       // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            LootDTRifleGateOfMadness;                          // 0xB70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LootDTRowNameRifle;                                // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>               CustomLootRowPerMapRifle;                          // 0xB80(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MinLootItems;                                      // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLootItems;                                      // 0xBD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLootItemsRifle;                                 // 0xBD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLootItemsRifle;                                 // 0xBDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAwardExperienceOnDeath;                           // 0xBE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceDefaultLootTableBasedOnGameMode;           // 0xBE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2161[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBuffManager*                          BuffComponent;                                     // 0xBE8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThermalVisionRemoveDelay;                          // 0xBF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasAlreadySeenPlayerCPP;                          // 0xBF4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasAlreadyFoughtPlayerCPP;                        // 0xBF5(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_216C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          LODTimerHandle;                                    // 0xBF8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadarHighlightScale;                               // 0xC00(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2171[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAIScheduledAction                  ScheduledAction;                                   // 0xC10(0x1)(NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bCanUseDialogueHighlight;                          // 0xC11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_217B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         MonsterFreezeSnapshot;                             // 0xC18(0x38)(BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRotateInPlaceStarted;                            // 0xC50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRotateInPlaceFinished;                           // 0xC60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2185[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomEventTag;                                    // 0xC98(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsApproachIdleEnabled;                            // 0xCA8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApproachIdleSide;                                 // 0xCA9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2191[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGApproachIdleSettings               ApproachIdleSettings0;                             // 0xCB0(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCGApproachIdleSettings               ApproachIdleSettings1;                             // 0xCC0(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMeleeReactionEnabled;                             // 0xCD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219E[0x3F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class ARadarAfterImage>       RadarAfterImage;                                   // 0xD10(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandMovementMode                 CurrentLandMovement;                               // 0xD38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21A6[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EReactionToVisibleHero            ReactionToHero;                                    // 0xD59(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21AD[0x36];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                NavTarget;                                         // 0xD90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReactToCustomAnim;                                // 0xD98(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         DamageNotifySound;                                 // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         CriticalDamageNotifySound;                         // 0xDA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UStaticMeshComponent*>          AccessoriesToUpdateSkins;                          // 0xDB0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_21B7[0x188];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGAICharacter* GetDefaultObj();

	void UpdatePointOfInterest(const struct FVector& InNewPointOfInterest);
	void UpdateLocomotionProperties(struct FCGAILocomotionProperties& InLocomotionProperties);
	void UpdateApproachIdleAnims(struct FCGApproachIdleSettings& InNewApproachIdle);
	void TargetPerceptionUpdated(class AActor* InActor, const struct FAIStimulus& InStimulus);
	void SpawnPickable(class FName InName);
	void SetUIDebug(bool bInNewVisibility);
	void SetStrafing(class AActor* InStrafingTarget, bool bInIsStrafing);
	void SetRotateInPlace(bool bInNewRotate, const struct FRotator& InTargetRotation);
	void SetReactionToHeroDelayed(enum class EReactionToVisibleHero InNewReaction, enum class EReactionToVisibleHero InReactionAfterDelay, float InDelayLength);
	void SetReactionToHero(enum class EReactionToVisibleHero InNewReaction);
	void SetNextPatrolActorWithNavNoRestart(class APatrolActor* InNextPatrolActor);
	void SetNextPatrolActorWithNav(class APatrolActor* InNextPatrolActor);
	void SetNextPatrolActorNoRestart(class APatrolActor* InNextPatrolActor);
	void SetNextPatrolActor(class APatrolActor* InNextPatrolActor);
	void SetNewAIState(TSubclassOf<class UCGAIState> InNewAIState, const struct FCGAIStateAdditionalInfo& InAdditionalInfo);
	void SetNavTargetNewLocationResetNextPatrol(const struct FVector& InNewLocation);
	void SetNavTargetNewLocation(const struct FVector& InNewLocation);
	void SetMotionfixTargetTransform(const struct FTransform& InTargetTransform);
	void SetLandMovementMode(enum class ELandMovementMode InMovementMode);
	void SetHeadTracingProperties(enum class EHeadTracingMode InNewTracingMode, const struct FVector& InNewTracedStationaryPoint, class AActor* InNewTracedActor, class USkeletalMeshComponent* InNewTracedSkeletalMesh, class FName InNewTracedSocketName);
	void SetDeathFunctionOverrideEnabled(bool bInEnabled);
	void SetCurrentLandMovementMode(enum class ELandMovementMode InNewLandMovementMode);
	void SetCover(class ACGCover* InNewCover);
	void SetCollisionModeForInterpolation(enum class EInterpolationCollisionReaction InNewReaction);
	void SetApproachIdleEnabled(bool bInNewEnabled);
	void ScheduleAIAction(struct FCGAIScheduledAction& InScheduledAction);
	void ResetAlertTimes();
	void ResetAggro();
	void RemoveThermalVision();
	TArray<class UMaterialInstanceDynamic*> RefreshDynamicMaterialsOnAccessoriesDueToSkinChange();
	TArray<class UMaterialInstanceDynamic*> RefreshDynamicMaterialsDueToSkinChange();
	void ReactionDelayFinished(enum class EReactionToVisibleHero InReactionAfterDelay);
	void PutRigidBodiesToSleep();
	struct FCGAIScheduledAction PopScheduledAIAction();
	void PlayCustomSequence(class UAnimSequence* InCustomSequence, const struct FTransform& InTargetTransform, float InBlendInTime, float InBlendOutTime, bool InShouldInterpolate, bool InShouldChangeState);
	void PlayCustomAnimation(class UAnimSequence* CustomAnim, float InStartTime);
	void PlayCoordinatedCustomAnimation(class UAnimSequence* InCustomAnim, float InStartTime);
	void PlayAdditiveDialogueGesture(class UAnimSequence* InDialogueGesture, class USkeletalMeshComponent* InMeshComponent);
	void OnPatrolNodeReachedFromBP(class APatrolActor* InPatrolActorReached);
	void OnMeshHitEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnMaterialSkinChanged();
	void OnHpLostInternal(class AActor* InComponentOwner, float InRemainingHpPoints, float InRemainingHpPercent, struct FCGDamageEvent& InDamageEvent, class AActor* InDamageDealer);
	void OnHpLostAbsoluteInternal(class AActor* InComponentOwner, float InRemainingHpPoints, float InRemainingHpPercent, struct FCGDamageEvent& InDamageEvent, class AActor* InDamageDealer, float InDamage, bool bInKillingDamage);
	void OnHitUpdateHitmask(struct FCGDamageEvent& InDamageEvent, bool IsCustomCall);
	void OnGlobalSkinChanged(enum class EGlobalSkinType SkinType, class FName NewSkinName);
	void OnDeathInternal(class AActor* InOwner, struct FCGDamageEvent& InDamageEvent);
	void OnBehaviorTreeStarted();
	void LODTimerTick();
	void K2_LODTimerTick();
	void InitialSkinUpdate();
	void GiveOrder(struct FOrderQuery& InOrder);
	enum class EAIWalkType GetWalkType();
	class FString GetTotalDebugInformation();
	struct FVector GetTargetSightLocation();
	struct FVector GetStrafingDirection();
	bool GetShouldReactToCustomAnim();
	float GetRotationInPlaceDelta();
	enum class EReactionToVisibleHero GetReactionToHero();
	class ARadarAfterImage* GetRadarAfterImage();
	struct FVector GetPointOfInterest();
	class APatrolActor* GetNextPatrolActor();
	class AActor* GetNavTarget();
	struct FTransform GetMotionfixTargetTransform();
	class FName GetLootRowBasedOnMap(class FName DefaultLoot, TMap<class FName, class FName>& CustomLootPerMap);
	bool GetIsStrafing();
	bool GetIsRotatingInPlace();
	bool GetIsPawnVisible(class ACGCharacter* InCharacter);
	bool GetIsHeroVisible();
	bool GetHeroCleanAim(bool bInDebug);
	float GetHeroAimAngleAtBone(class FName InBoneName);
	struct FHeadTracingProperties GetHeadTracingProperties();
	bool GetHasSightMemory(class AActor* InMemoryActor);
	bool GetDeathFunctionOverrideEnabled();
	class ACGAICharacter* GetCurrentlySeeingDeadBody();
	enum class ELandMovementMode GetCurrentLandMovementMode();
	enum class EAIStateType GetCurrentAIStateType();
	TSubclassOf<class UCGAIState> GetCurrentAIStateClass();
	enum class EAIState GetCurrentAIState();
	enum class EAIInnerState GetCurrentAIInnerState();
	class ACGCover* GetCover();
	bool GetCloseContacted();
	class UBlackboardComponent* GetCGBlackboardComponent();
	class ACGAIController* GetCGAIController();
	enum class EAIWorldType GetAIWorldType();
	enum class EAIType GetAIType();
	struct FCGAIProperties GetAIProperties();
	void FixTransformForAnimation(const struct FTransform& InTargetTransform, float InInterpTime);
	void FixTransform_Update(const struct FTransform& InUpdatedTransform);
	void FixTransform_Finish();
	int32 FindShadowMaxDistance();
	class UAnimSequence* FindDeathAnim(struct FCGDamageEvent& InDamageEvent);
	void EnableDialogueHighlight();
	void DisableHitGenerationIfMeshIsAsleep();
	void DisableDialogueHighgliht();
	float AddAlertValue(float InAlertValueToAdd, const struct FCGAlertReason& InReason);
};

// 0x8 (0x330 - 0x328)
// Class ChernobylGame.CGAIController
class ACGAIController : public AAIController
{
public:
	class UBehaviorTree*                         BehTree;                                           // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACGAIController* GetDefaultObj();

};

// 0x10 (0x258 - 0x248)
// Class ChernobylGame.CGBaseCharacterMovement
class ACGBaseCharacterMovement : public ACGMovementState
{
public:
	uint8                                        Pad_22C4[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGBaseCharacterMovement* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class ChernobylGame.CGAimCrouchedState
class ACGAimCrouchedState : public ACGBaseCharacterMovement
{
public:
	uint8                                        Pad_22D9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGAimCrouchedState* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class ChernobylGame.CGAimState
class ACGAimState : public ACGBaseCharacterMovement
{
public:
	uint8                                        Pad_22F0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGAimState* GetDefaultObj();

};

// 0x30 (0x290 - 0x260)
// Class ChernobylGame.CGAINoticeWidget
class UCGAINoticeWidget : public UUserWidget
{
public:
	TArray<class ACGCharacter*>                  CombatAIArray;                                     // 0x260(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ACGCharacter*>                  SpottedAIArray;                                    // 0x270(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ACGCharacter*>                  AlertedAIArray;                                    // 0x280(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCGAINoticeWidget* GetDefaultObj();

	void ProcessAICPP();
	void CreateSpottedEntryCPP(class ACGAICharacter* AICharacter, bool bIsFight);
	void CreateSightEntryCPP(class ACGAICharacter* AICharacter, bool bAlert);
	bool CheckIfAISpottedCPP(class ACGAICharacter* AICharacter);
	bool CheckIfAIPatrolCPP(class ACGAICharacter* AICharacter);
	bool CheckIfAICombatCPP(class ACGAICharacter* AICharacter);
	bool CheckIfAIAlertCPP(class ACGAICharacter* AICharacter);
};

// 0xA8 (0x238 - 0x190)
// Class ChernobylGame.CGAIPerception
class UCGAIPerception : public UAIPerceptionComponent
{
public:
	FMulticastInlineDelegateProperty_            OnReachedZeroAlert;                                // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReachedHalfAlert;                                // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReachedMaxAlert;                                 // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UCGCollisionLimbComponent*>     CurrentlyVisibleHeroLimbs;                         // 0x1C0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_2901[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPerceptionBlock>              PerceptionBlocks;                                  // 0x208(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        CurrentlyVisibleActors;                            // 0x218(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCGSightMemory>                SightMemory;                                       // 0x228(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCGAIPerception* GetDefaultObj();

	void UnBlockPerception(struct FPerceptionBlock& InPerceptionBlock);
	void SetSightStatus(bool InIsActive);
	void SetSightRadius(float NewRadius);
	void SetSenseEnabledDelayed(TSubclassOf<class UAISense> InSenseToDeactivate, float InDelayTime, bool bInPostDelayEnabled, bool bInEnable);
	void SetHearingRange(float InHearingRange);
	void ResetAlertValue();
	void ResetAlertDelay();
	void OnPercUpdatedInternal(class AActor* InActor, const struct FAIStimulus& InStimulus);
	float GetVisionAngle();
	TArray<int32> GetUniquePerceptionBlockIndexes(class AActor* InActor);
	bool GetSightStatus();
	float GetSightRadius();
	TArray<struct FCGSightMemory> GetSightMemory();
	bool GetSightBlockStatus();
	TArray<struct FPerceptionBlock> GetPerceptionBlocks();
	float GetLoseSightRadius();
	bool GetIsPawnVisible(class ACGCharacter* InTargetCharacter);
	bool GetIsHeroVisible();
	float GetHearingRange();
	bool GetHearingBlockStatus();
	float GetFullFocusHalfAngle();
	TArray<class AActor*> GetCurrentlyVisibleActors();
	TArray<float> GetCurrentAlertValues();
	float GetCurrentAlertValue();
	void EnabledDelayFinished(bool bInPostDelayEnabled, TSubclassOf<class UAISense> InSenseToDeactivate);
	bool ComparePerceptionBlockIndexes();
	void BlockPerception(struct FPerceptionBlock& InPerceptionBlock);
	void AddSightMemory(const struct FCGSightMemory& InSightMemory);
	float AddAlertValue(float InValueToAdd, const struct FCGAlertReason& InAlertReason);
};

// 0x78 (0xA0 - 0x28)
// Class ChernobylGame.CGAIState
class UCGAIState : public UObject
{
public:
	uint8                                        Pad_2C66[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGAIStateComponent*                   OwnerComponent;                                    // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMainPawnCpp*                          Hero;                                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACGAICharacter*                        Owner;                                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C6D[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DummyUproperty;                                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C71[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState* GetDefaultObj();

	void ZeroAlert(const struct FCGAlertReason& InReason);
	void PerceptionUpdate(class AActor* InAActor, const struct FAIStimulus& InStimulus);
	void OnTeleporterCastStart();
	void OnTeleporterCastEnd();
	void OnShotFired();
	void OnNPCHeadTracingHeroUpdate(bool bUpdate);
	void OnNoiseHeard(class AActor* InInstigator, float InNoiseRange, const struct FVector& InNoiseLocation, float InNoiseStrength, class FName InTag, float InMaxDistanceToActivateCombat);
	void OnMoveToTaskFinished(enum class EBTNodeResult InTaskResult, class AActor* InActorReached);
	void OnHPLost(class AActor* ComponentOwner, float RemainingHpPoints, float RemainingHpPercent, struct FCGDamageEvent& DamageEvent, class AActor* DamageDealer);
	void OnHideShowFinished(bool bInShown);
	void OnHeroTakeDamage(float InDamage, struct FCGDamageEvent& InDamageEvent, class AController* InEventInstigator, class AActor* InDamageCauser);
	void OnHeroLeavingMeleeRange();
	void OnHeroLeavingClose();
	void OnHeroGettingMeleeRange();
	void OnHeroGettingClose();
	void OnHeroCustomAnim_Started();
	void OnHeroCustomAnim_Finished();
	void MaxAlert(const struct FCGAlertReason& InReason);
	void InterrogationDialogueBranch_Kill();
	void InterrogationDialogueBranch_Ignore();
	void InterrogationDialogueBranch_Attack();
	void HalfAlert(const struct FCGAlertReason& InReason);
	bool GetHeroCleanAim(bool bInDebug);
};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost
class UCGAIState_Chernohost : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_Hunt
class UCGAIState_Chernohost_Hunt : public UCGAIState_Chernohost
{
public:
	uint8                                        Pad_2CAC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_Hunt* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ChernobylGame.CGAIState_Chernohost_HApproach
class UCGAIState_Chernohost_HApproach : public UCGAIState_Chernohost_Hunt
{
public:
	uint8                                        Pad_2CC6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_HApproach* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Chernohost_HAttack
class UCGAIState_Chernohost_HAttack : public UCGAIState_Chernohost_Hunt
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_HAttack* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_HeroLost
class UCGAIState_Chernohost_HeroLost : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_HeroLost* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Chernohost_HNotice
class UCGAIState_Chernohost_HNotice : public UCGAIState_Chernohost_Hunt
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_HNotice* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_InWall
class UCGAIState_Chernohost_InWall : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_InWall* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_Patrol
class UCGAIState_Chernohost_Patrol : public UCGAIState_Chernohost
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_Patrol* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_PFromPortal
class UCGAIState_Chernohost_PFromPortal : public UCGAIState_Chernohost_Patrol
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_PFromPortal* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_PInPortal
class UCGAIState_Chernohost_PInPortal : public UCGAIState_Chernohost_Patrol
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_PInPortal* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_PIntoPortal
class UCGAIState_Chernohost_PIntoPortal : public UCGAIState_Chernohost_Patrol
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_PIntoPortal* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_PWalk
class UCGAIState_Chernohost_PWalk : public UCGAIState_Chernohost_Patrol
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_PWalk* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_Retreat
class UCGAIState_Chernohost_Retreat : public UCGAIState_Chernohost
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_Retreat* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_REnter
class UCGAIState_Chernohost_REnter : public UCGAIState_Chernohost_Retreat
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_REnter* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_RMove
class UCGAIState_Chernohost_RMove : public UCGAIState_Chernohost_Retreat
{
public:
	uint8                                        Pad_2DAF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_RMove* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_RPortalIn
class UCGAIState_Chernohost_RPortalIn : public UCGAIState_Chernohost_Retreat
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_RPortalIn* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Chernohost_Teleporting
class UCGAIState_Chernohost_Teleporting : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Chernohost_Teleporting* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker
class UCGAIState_DStalker : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_Alert
class UCGAIState_DStalker_Alert : public UCGAIState_DStalker
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_Alert* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_AlertStand
class UCGAIState_DStalker_AlertStand : public UCGAIState_DStalker_Alert
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_AlertStand* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_TP
class UCGAIState_DStalker_TP : public UCGAIState_DStalker
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_TP* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_AlertTP
class UCGAIState_DStalker_AlertTP : public UCGAIState_DStalker_TP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_AlertTP* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_AlertTPIn
class UCGAIState_DStalker_AlertTPIn : public UCGAIState_DStalker_AlertTP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_AlertTPIn* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_AlertTPLoop
class UCGAIState_DStalker_AlertTPLoop : public UCGAIState_DStalker_AlertTP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_AlertTPLoop* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_AlertTPOut
class UCGAIState_DStalker_AlertTPOut : public UCGAIState_DStalker_AlertTP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_AlertTPOut* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_FakeHunt
class UCGAIState_DStalker_FakeHunt : public UCGAIState_DStalker
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_FakeHunt* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_Hunt
class UCGAIState_DStalker_Hunt : public UCGAIState_DStalker
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_Hunt* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_HRecovery
class UCGAIState_DStalker_HRecovery : public UCGAIState_DStalker_Hunt
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_HRecovery* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_HuntTP
class UCGAIState_DStalker_HuntTP : public UCGAIState_DStalker_TP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_HuntTP* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_HuntTPIn
class UCGAIState_DStalker_HuntTPIn : public UCGAIState_DStalker_HuntTP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_HuntTPIn* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_HuntTPLoop
class UCGAIState_DStalker_HuntTPLoop : public UCGAIState_DStalker_HuntTP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_HuntTPLoop* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_HuntTPOut
class UCGAIState_DStalker_HuntTPOut : public UCGAIState_DStalker_HuntTP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_HuntTPOut* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_Idle
class UCGAIState_DStalker_Idle : public UCGAIState_DStalker
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_Idle* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_Initial
class UCGAIState_DStalker_Initial : public UCGAIState_DStalker
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_Initial* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_InPatrol
class UCGAIState_DStalker_InPatrol : public UCGAIState_DStalker
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_InPatrol* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_NeutralTP
class UCGAIState_DStalker_NeutralTP : public UCGAIState_DStalker_TP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_NeutralTP* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_NeutralTPIn
class UCGAIState_DStalker_NeutralTPIn : public UCGAIState_DStalker_NeutralTP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_NeutralTPIn* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_NeutralTPLoop
class UCGAIState_DStalker_NeutralTPLoop : public UCGAIState_DStalker_NeutralTP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_NeutralTPLoop* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_NeutralTPOut
class UCGAIState_DStalker_NeutralTPOut : public UCGAIState_DStalker_NeutralTP
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_NeutralTPOut* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_OutPatrol
class UCGAIState_DStalker_OutPatrol : public UCGAIState_DStalker
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_OutPatrol* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_DStalker_Patrol
class UCGAIState_DStalker_Patrol : public UCGAIState_DStalker
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_DStalker_Patrol* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Duster
class UCGAIState_Duster : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Duster* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class ChernobylGame.CGAIState_Duster_Combat
class UCGAIState_Duster_Combat : public UCGAIState_Duster
{
public:
	uint8                                        Pad_2F57[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Duster_Combat* GetDefaultObj();

	void RequestIdle();
};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Duster_Attack
class UCGAIState_Duster_Attack : public UCGAIState_Duster_Combat
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Duster_Attack* GetDefaultObj();

};

// 0x10 (0xB0 - 0xA0)
// Class ChernobylGame.CGAIState_Duster_Idle
class UCGAIState_Duster_Idle : public UCGAIState_Duster
{
public:
	uint8                                        Pad_2F71[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Duster_Idle* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Duster_TransBase
class UCGAIState_Duster_TransBase : public UCGAIState_Duster
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Duster_TransBase* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Duster_Trans
class UCGAIState_Duster_Trans : public UCGAIState_Duster_TransBase
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Duster_Trans* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Duster_TransIn
class UCGAIState_Duster_TransIn : public UCGAIState_Duster_TransBase
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Duster_TransIn* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Duster_TransOut
class UCGAIState_Duster_TransOut : public UCGAIState_Duster_TransBase
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Duster_TransOut* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Global_CustomSequence
class UCGAIState_Global_CustomSequence : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Global_CustomSequence* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class ChernobylGame.CGAIState_Global_Standby
class UCGAIState_Global_Standby : public UCGAIState
{
public:
	uint8                                        Pad_2FDA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Global_Standby* GetDefaultObj();

	void BackToPrevious();
};

// 0x8 (0xA8 - 0xA0)
// Class ChernobylGame.CGAIState_Hunt
class UCGAIState_Hunt : public UCGAIState
{
public:
	uint8                                        Pad_2FE7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Hunt* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Idle
class UCGAIState_Idle : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Idle* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_NPC
class UCGAIState_NPC : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_NPC* GetDefaultObj();

};

// 0x20 (0xC0 - 0xA0)
// Class ChernobylGame.CGAIState_NPC_ApproachIdle
class UCGAIState_NPC_ApproachIdle : public UCGAIState_NPC
{
public:
	uint8                                        Pad_3002[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_NPC_ApproachIdle* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_NPC_Idle
class UCGAIState_NPC_Idle : public UCGAIState_NPC
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_NPC_Idle* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_NPC_IdleNeutral
class UCGAIState_NPC_IdleNeutral : public UCGAIState_NPC_Idle
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_NPC_IdleNeutral* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_NPC_IdleStealth
class UCGAIState_NPC_IdleStealth : public UCGAIState_NPC_Idle
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_NPC_IdleStealth* GetDefaultObj();

};

// 0x10 (0xB0 - 0xA0)
// Class ChernobylGame.CGAIState_NPC_MoveBase
class UCGAIState_NPC_MoveBase : public UCGAIState_NPC
{
public:
	uint8                                        Pad_3030[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_NPC_MoveBase* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.CGAIState_NPC_RunNeutral
class UCGAIState_NPC_RunNeutral : public UCGAIState_NPC_MoveBase
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_NPC_RunNeutral* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.CGAIState_NPC_RunStealth
class UCGAIState_NPC_RunStealth : public UCGAIState_NPC_MoveBase
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_NPC_RunStealth* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.CGAIState_NPC_WalkStealth
class UCGAIState_NPC_WalkStealth : public UCGAIState_NPC_MoveBase
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_NPC_WalkStealth* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Patrol
class UCGAIState_Patrol : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Patrol* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_ShadOut
class UCGAIState_ShadOut : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_ShadOut* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_ShadOut_HuntBase
class UCGAIState_ShadOut_HuntBase : public UCGAIState_ShadOut
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_ShadOut_HuntBase* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_ShadOut_PatrolBase
class UCGAIState_ShadOut_PatrolBase : public UCGAIState_ShadOut
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_ShadOut_PatrolBase* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class ChernobylGame.CGAIState_ShadOut_PatrolIn
class UCGAIState_ShadOut_PatrolIn : public UCGAIState_ShadOut_PatrolBase
{
public:
	uint8                                        Pad_3088[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_ShadOut_PatrolIn* GetDefaultObj();

	void TryLeavingPortal();
	void OnLeavingAnimFinished();
};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_ShadOut_PatrolLoop
class UCGAIState_ShadOut_PatrolLoop : public UCGAIState_ShadOut_PatrolBase
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_ShadOut_PatrolLoop* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_ShadOut_PatrolOut
class UCGAIState_ShadOut_PatrolOut : public UCGAIState_ShadOut_PatrolBase
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_ShadOut_PatrolOut* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Shadow_AWallRouting
class UCGAIState_Shadow_AWallRouting : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Shadow_AWallRouting* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Shadow_InWall
class UCGAIState_Shadow_InWall : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Shadow_InWall* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class ChernobylGame.CGAIState_Shadow_LeftCombat
class UCGAIState_Shadow_LeftCombat : public UCGAIState
{
public:
	uint8                                        Pad_3095[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Shadow_LeftCombat* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Shadow_PWallRouting
class UCGAIState_Shadow_PWallRouting : public UCGAIState_Patrol
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Shadow_PWallRouting* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class ChernobylGame.CGAIState_Soldier
class UCGAIState_Soldier : public UCGAIState
{
public:
	uint8                                        Pad_30B0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier* GetDefaultObj();

	void TryFindCover();
	void SquadBackInPlace();
	void OnShooterRemoved();
	void CheckForStealthkillOnVisible();
};

// 0x8 (0xB0 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_Alert
class UCGAIState_Soldier_Alert : public UCGAIState_Soldier
{
public:
	uint8                                        Pad_30C6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_Alert* GetDefaultObj();

	void OnPatrolRet();
	void OnNotifyBeginReceived(class FName InNotifyName, struct FBranchingPointNotifyPayload& InBranchingPointPayload);
};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.CGAIState_Soldier_AApproach
class UCGAIState_Soldier_AApproach : public UCGAIState_Soldier_Alert
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_AApproach* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.CGAIState_Soldier_AlertBlank
class UCGAIState_Soldier_AlertBlank : public UCGAIState_Soldier_Alert
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_AlertBlank* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.CGAIState_Soldier_AReached
class UCGAIState_Soldier_AReached : public UCGAIState_Soldier_Alert
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_AReached* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_Hunt
class UCGAIState_Soldier_Hunt : public UCGAIState_Soldier
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_Hunt* GetDefaultObj();

	void DodgeTick();
};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_ArrestBase
class UCGAIState_Soldier_ArrestBase : public UCGAIState_Soldier_Hunt
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_ArrestBase* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_ArrestAttempt
class UCGAIState_Soldier_ArrestAttempt : public UCGAIState_Soldier_ArrestBase
{
public:
	uint8                                        Pad_30F1[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_ArrestAttempt* GetDefaultObj();

	void SetAttack();
	void Repeat();
	void Arrest();
};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_ArrestAttemptO
class UCGAIState_Soldier_ArrestAttemptO : public UCGAIState_Soldier_ArrestBase
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_ArrestAttemptO* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.CGAIState_Soldier_ASpotSK
class UCGAIState_Soldier_ASpotSK : public UCGAIState_Soldier_Alert
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_ASpotSK* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HAttack
class UCGAIState_Soldier_HAttack : public UCGAIState_Soldier_Hunt
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HAttack* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HAttackS
class UCGAIState_Soldier_HAttackS : public UCGAIState_Soldier_HAttack
{
public:
	uint8                                        Pad_3104[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HAttackS* GetDefaultObj();

};

// 0x18 (0xD8 - 0xC0)
// Class ChernobylGame.CGAIState_Soldier_HAttackO
class UCGAIState_Soldier_HAttackO : public UCGAIState_Soldier_HAttackS
{
public:
	uint8                                        Pad_3116[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HAttackO* GetDefaultObj();

	void ValidityTick();
	void OnVCAimFinish();
	void LazyTick();
};

// 0x80 (0x128 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HAttackVC
class UCGAIState_Soldier_HAttackVC : public UCGAIState_Soldier_HAttack
{
public:
	uint8                                        Pad_311F[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HAttackVC* GetDefaultObj();

	void OnVCAimFinish();
};

// 0x8 (0x130 - 0x128)
// Class ChernobylGame.CGAIState_Soldier_HAttackVCCov
class UCGAIState_Soldier_HAttackVCCov : public UCGAIState_Soldier_HAttackVC
{
public:
	uint8                                        Pad_312A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HAttackVCCov* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HChase
class UCGAIState_Soldier_HChase : public UCGAIState_Soldier_Hunt
{
public:
	uint8                                        Pad_313D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HChase* GetDefaultObj();

	void OnTimeElapsedUponRecognise();
};

// 0x0 (0xC8 - 0xC8)
// Class ChernobylGame.CGAIState_Soldier_HChaseReached
class UCGAIState_Soldier_HChaseReached : public UCGAIState_Soldier_HChase
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HChaseReached* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HCover
class UCGAIState_Soldier_HCover : public UCGAIState_Soldier_Hunt
{
public:
	uint8                                        Pad_315E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HCover* GetDefaultObj();

	void CheckCoverValidityTickVirt();
	void CheckCoverValidityTick();
	bool CheckCoverValidity();
};

// 0x20 (0xD0 - 0xB0)
// Class ChernobylGame.CGAIState_Soldier_HCoverLoop
class UCGAIState_Soldier_HCoverLoop : public UCGAIState_Soldier_HCover
{
public:
	uint8                                        Pad_3183[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HCoverLoop* GetDefaultObj();

	void TryFindingBetterCoverTick();
	void TryAiming();
	void LeaveCoverLoopElapsed();
	void FindBetterCoverVirt(class ACGCover* InCover);
};

// 0x8 (0xB8 - 0xB0)
// Class ChernobylGame.CGAIState_Soldier_HCoverReach
class UCGAIState_Soldier_HCoverReach : public UCGAIState_Soldier_HCover
{
public:
	uint8                                        Pad_319D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HCoverReach* GetDefaultObj();

};

// 0x0 (0xB8 - 0xB8)
// Class ChernobylGame.CGAIState_Soldier_HCoverReachFin
class UCGAIState_Soldier_HCoverReachFin : public UCGAIState_Soldier_HCoverReach
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HCoverReachFin* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class ChernobylGame.CGAIState_Soldier_HCoverReachVC
class UCGAIState_Soldier_HCoverReachVC : public UCGAIState_Soldier_HCoverReach
{
public:
	uint8                                        Pad_3261[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HCoverReachVC* GetDefaultObj();

	void OnVCAimFinish();
};

// 0x0 (0xD0 - 0xD0)
// Class ChernobylGame.CGAIState_Soldier_HCoverTrans
class UCGAIState_Soldier_HCoverTrans : public UCGAIState_Soldier_HCoverLoop
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HCoverTrans* GetDefaultObj();

};

// 0x0 (0xD0 - 0xD0)
// Class ChernobylGame.CGAIState_Soldier_HCovFromShoot
class UCGAIState_Soldier_HCovFromShoot : public UCGAIState_Soldier_HCoverLoop
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HCovFromShoot* GetDefaultObj();

};

// 0x0 (0xD0 - 0xD0)
// Class ChernobylGame.CGAIState_Soldier_HCovShoot
class UCGAIState_Soldier_HCovShoot : public UCGAIState_Soldier_HCoverLoop
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HCovShoot* GetDefaultObj();

};

// 0x0 (0xD0 - 0xD0)
// Class ChernobylGame.CGAIState_Soldier_HCovToShoot
class UCGAIState_Soldier_HCovToShoot : public UCGAIState_Soldier_HCoverLoop
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HCovToShoot* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HDialogue
class UCGAIState_Soldier_HDialogue : public UCGAIState_Soldier_Hunt
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HDialogue* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HEvade
class UCGAIState_Soldier_HEvade : public UCGAIState_Soldier_HAttack
{
public:
	uint8                                        Pad_32AA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HEvade* GetDefaultObj();

	void AnimFinished(class UAnimMontage* InMontage, bool bInInterrupted);
};

// 0x8 (0xB0 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HHeroDown
class UCGAIState_Soldier_HHeroDown : public UCGAIState_Soldier
{
public:
	uint8                                        Pad_32BE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HHeroDown* GetDefaultObj();

	void BackToPrevious();
};

// 0x8 (0xB0 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HMeleeAttack
class UCGAIState_Soldier_HMeleeAttack : public UCGAIState_Soldier_HAttack
{
public:
	uint8                                        Pad_32DE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HMeleeAttack* GetDefaultObj();

	void AttackMontageEnded(class UAnimMontage* InMontage, bool bInInterrupted);
};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HMeleeBack
class UCGAIState_Soldier_HMeleeBack : public UCGAIState_Soldier_HAttack
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HMeleeBack* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HMeleeReach
class UCGAIState_Soldier_HMeleeReach : public UCGAIState_Soldier_HAttack
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HMeleeReach* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_HStandby
class UCGAIState_Soldier_HStandby : public UCGAIState_Soldier_Hunt
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_HStandby* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_MeleeReaction
class UCGAIState_Soldier_MeleeReaction : public UCGAIState_Soldier
{
public:
	uint8                                        Pad_335B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_MeleeReaction* GetDefaultObj();

	void OnReactionMontageFinished(class UAnimMontage* InMontage, bool bInInterrupted);
};

// 0x58 (0x100 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_MFrozen
class UCGAIState_Soldier_MFrozen : public UCGAIState_Soldier
{
public:
	uint8                                        Pad_336D[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_MFrozen* GetDefaultObj();

};

// 0x78 (0x120 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_Patrol
class UCGAIState_Soldier_Patrol : public UCGAIState_Soldier
{
public:
	uint8                                        Pad_3378[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_Patrol* GetDefaultObj();

};

// 0x70 (0x190 - 0x120)
// Class ChernobylGame.CGAIState_Soldier_PatrolRet
class UCGAIState_Soldier_PatrolRet : public UCGAIState_Soldier_Patrol
{
public:
	uint8                                        Pad_3380[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_PatrolRet* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class ChernobylGame.CGAIState_Soldier_WalkUp
class UCGAIState_Soldier_WalkUp : public UCGAIState_Soldier_Hunt
{
public:
	uint8                                        Pad_338E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAIState_Soldier_WalkUp* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ChernobylGame.CGAIState_Stunned
class UCGAIState_Stunned : public UCGAIState
{
public:

	static class UClass* StaticClass();
	static class UCGAIState_Stunned* GetDefaultObj();

};

// 0xA0 (0x150 - 0xB0)
// Class ChernobylGame.CGAIStateComponent
class UCGAIStateComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnWalkupStateEnter;                                // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAIStateChanged;                                  // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bStateMachineBlocked;                              // 0xD0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStateAggressivenessOverride      StateAggressivenesOverride;                        // 0xD1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33E1[0x56];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGAIState*                            CurrentAIState;                                    // 0x128(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCGAIState>                PostStandbyAnimState;                              // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAIWalkType                       CurrentWalkType;                                   // 0x138(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReasonOfLastStateEnter;                            // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCGAIStateComponent* GetDefaultObj();

	void SetStateAdditionalInfo(struct FCGAIStateAdditionalInfo& InInfo);
	bool GetStealthKillPossibility();
	struct FCGAIStateAdditionalInfo GetStateAdditionalInfo();
	class FString GetReasonOfLastStateEntry();
	enum class EAIStateType GetAssociatedEnumStateType();
	TSubclassOf<class UCGAIState> GetAssociatedClass();
};

// 0x38 (0x2C8 - 0x290)
// Class ChernobylGame.CGAkReverbVolume
class ACGAkReverbVolume : public AAkReverbVolume
{
public:
	class UAkAudioEvent*                         PlayerEnterEvent;                                  // 0x290(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        PlayerEnterSwitch;                                 // 0x298(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        NPCEnterSwitch;                                    // 0x2A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PlayerEnterSwitchGroup;                            // 0x2A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PlayerEnterSwitchState;                            // 0x2B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NPCEnterSwitchGroup;                               // 0x2B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NPCEnterSwitchState;                               // 0x2C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACGAkReverbVolume* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGAnim
class UCGAnim : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCGAnim* GetDefaultObj();

	bool IsRootmotionEnabled(class UAnimSequence* InAnimSequence);
	void GetRelevantAnimInfo(class UAnimInstance* InAnimInstance, float* OutTime, int32 InMachineIndex, int32 InStateIndex);
	float GetMorphTargetValue(class UAnimInstance* InAnimInstance, class FName InMorphName);
	void GetMachineAndStateIndexes(class UAnimInstance* InAnimInstance, class FName InMachineName, class FName InStateName, int32* OutMachineIndex, int32* OutStateIndex);
	TArray<class FName> GetAllMorphTargetNames(class UAnimInstance* InAnimInstance);
	struct FTransform BoneTransformInTime(class UAnimSequence* InAnimation, float InTime, class FName& InBoneName, class USkeletalMeshComponent* InSkeletalMesh);
};

// 0x0 (0x30 - 0x30)
// Class ChernobylGame.CGAnimNotifyState
class UCGAnimNotifyState : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UCGAnimNotifyState* GetDefaultObj();

	float GetStartTriggerTime(class UAnimSequenceBase* InAnimSequence);
	float GetEndTriggerTime(class UAnimSequenceBase* InAnimSequence);
};

// 0x78 (0xA8 - 0x30)
// Class ChernobylGame.CGAttemptMeleeDamage
class UCGAttemptMeleeDamage : public UCGAnimNotifyState
{
public:
	enum class EDamageCollider                   DamageCollider;                                    // 0x30(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3465[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeroDamageAmount;                                  // 0x34(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AIDamageAmount;                                    // 0x38(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_346B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCGDamageType>             DamageType;                                        // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeleeHitDirection                MeleeHitDirection;                                 // 0x48(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_346D[0x5F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAttemptMeleeDamage* GetDefaultObj();

};

// 0x90 (0x138 - 0xA8)
// Class ChernobylGame.CGAttemptMeleeDamageHero
class UCGAttemptMeleeDamageHero : public UCGAttemptMeleeDamage
{
public:
	uint8                                        Pad_3473[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGAttemptMeleeDamageHero* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.CGAttentionBar
class UCGAttentionBar : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UCGAttentionBar* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.CGAttentionWidget
class UCGAttentionWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UCGAttentionWidget* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class ChernobylGame.CGBaseCharacterMovementExtended
class ACGBaseCharacterMovementExtended : public ACGBaseCharacterMovement
{
public:
	uint8                                        Pad_347B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGBaseCharacterMovementExtended* GetDefaultObj();

};

// 0x0 (0x248 - 0x248)
// Class ChernobylGame.CGBlueprintInputState
class ACGBlueprintInputState : public ACGMovementState
{
public:

	static class UClass* StaticClass();
	static class ACGBlueprintInputState* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.CGBTTask_MoveTo
class UCGBTTask_MoveTo : public UBTTask_MoveTo
{
public:

	static class UClass* StaticClass();
	static class UCGBTTask_MoveTo* GetDefaultObj();

};

// 0x10 (0x268 - 0x258)
// Class ChernobylGame.CGBuildSystemState
class ACGBuildSystemState : public ACGBaseCharacterMovement
{
public:
	uint8                                        Pad_3480[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGBuildSystemState* GetDefaultObj();

};

// 0x60 (0xB60 - 0xB00)
// Class ChernobylGame.CGCharacterMovementComponent
class UCGCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	float                                        MaxSpeedModifier;                                  // 0xB00(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelerationModifier;                              // 0xB04(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceOverMaxSpeedClamp;                           // 0xB08(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BuffMaxSpeedModifier;                              // 0xB0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349B[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGCharacterMovementComponent* GetDefaultObj();

	void UpdateMaxSpeedModifierToSlowest();
	void SetUseAccelerationForPaths(bool bInNewValue);
	void RemoveMaxSpeedSlowdownModifier(const class FString& Key, bool Update);
	uint8 GetMappedCustomMovement(enum class ECustomMovementMode InCustomMovementMode);
	void AddOrUpdateMaxSpeedSlowdownModifier(const class FString& Key, float Value, bool Update);
};

// 0x150 (0x200 - 0xB0)
// Class ChernobylGame.CGCharacterMovementStateMachine
class UCGCharacterMovementStateMachine : public UActorComponent
{
public:
	TSubclassOf<class ACGMovementState>          TargetMovementState;                               // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGMovementState>          PreviousMovementState;                             // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGMovementState>          PrePDAState;                                       // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGActiveItem>             PreInventoryItemClass;                             // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDialogueSkipLine_Axis;                           // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMovementStateChanged;                            // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E2[0x110];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGCharacterMovementStateMachine* GetDefaultObj();

	void UpdateKeyCombination(const class FString& InKeyString);
	class ACGMovementState* SetNewMovementState(TSubclassOf<class ACGMovementState> InNewMovementStateClass);
	void SetMovementStateMachineEnabled(bool InEnabled);
	void SetIsInputEnabled(bool bIsEnabled);
	void SetDebugEnabled(bool InEnabled);
	void ResetKeyCombination();
	void LockStateChanging(bool bInNewLock);
	float GetMovementRightInput();
	float GetMovementForwardInput();
	float GetLeanAxis();
	bool GetIsMovementStateMachineEnabled();
	bool GetEnemyChatterEnabled();
	TSubclassOf<class ACGMovementState> GetCurrentMovementState();
	TArray<class FString> GetCurrentKeyCombination();
	bool GetClimbEnabled();
	struct FCGMovementStateAdditionalInfo GetAdditionalInfo();
};

// 0x20 (0x98 - 0x78)
// Class ChernobylGame.CGCheatManager
class UCGCheatManager : public UCheatManager
{
public:
	uint8                                        Pad_350A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGCheatManager* GetDefaultObj();

	void ModMorale(class FName CompanionName, float Value);
	void ModLevelTime(int32 Seconds);
	void ModHP(class FName CompanionName, float Value);
	void ModCheck_Internal();
	void ModCheck(bool bEnabled);
	void CheatSpawnShadow();
	void CheatSpawnGuard();
	void CheatGodMode();
	void CheatFlushInventory();
	void CheatCrash();
};

// 0x438 (0x1380 - 0xF48)
// Class ChernobylGame.CGChernohost
class ACGChernohost : public ACGAICharacter
{
public:
	struct FChernohostProperties                 Properties;                                        // 0xF48(0x418)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_3537[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGChernohost* GetDefaultObj();

	void SetAssociatedTeleportChain(class ACGShadowTeleportBase* InNewTeleportBase);
	void ScheduleAggroReset(bool bInReset);
	class ACGShadowTeleportBase* GetClosestTeleport();
	class ACGShadowTeleportBase* GetAssociatedTeleportChain();
	bool GetAggroResetScheduled();
	void DisableTeleportCutting();
};

// 0x0 (0xC0 - 0xC0)
// Class ChernobylGame.CGMonsterAggroComponent
class UCGMonsterAggroComponent : public UCGAggroComponent
{
public:

	static class UClass* StaticClass();
	static class UCGMonsterAggroComponent* GetDefaultObj();

};

// 0x0 (0xC0 - 0xC0)
// Class ChernobylGame.CGChernohostAggroComponent
class UCGChernohostAggroComponent : public UCGMonsterAggroComponent
{
public:

	static class UClass* StaticClass();
	static class UCGChernohostAggroComponent* GetDefaultObj();

};

// 0x0 (0x248 - 0x248)
// Class ChernobylGame.CGCollectableNoteInputState
class ACGCollectableNoteInputState : public ACGBlueprintInputState
{
public:

	static class UClass* StaticClass();
	static class ACGCollectableNoteInputState* GetDefaultObj();

};

// 0x18 (0x460 - 0x448)
// Class ChernobylGame.CGCollisionCheckers
class UCGCollisionCheckers : public UPrimitiveComponent
{
public:
	float                                        InterceptionMapped;                                // 0x448(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3559[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        PotentialStealthKillTarget;                        // 0x450(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_355A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGCollisionCheckers* GetDefaultObj();

	void SetDebugEnabled(bool InNewDebug);
	struct FStealthKillQueryResult QueryStealthKill();
};

// 0x10 (0x480 - 0x470)
// Class ChernobylGame.CGCollisionLimbComponent
class UCGCollisionLimbComponent : public UBoxComponent
{
public:
	enum class ECollisionLimb                    CollisionLimbType;                                 // 0x470(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_356A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Importance;                                        // 0x474(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_356B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGCollisionLimbComponent* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.CGCompanionStatusPayloadWidget
class UCGCompanionStatusPayloadWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UCGCompanionStatusPayloadWidget* GetDefaultObj();

	void Update();
	void Show();
	void RequestDestruct();
	void InitPayload(class FName CompanionName);
};

// 0x10 (0x270 - 0x260)
// Class ChernobylGame.CGCompassBaseWidget
class UCGCompassBaseWidget : public UUserWidget
{
public:
	float                                        MaxX_CPP;                                          // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinPlane_CPP;                                      // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          TagContainerRef;                                   // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCGCompassBaseWidget* GetDefaultObj();

	void UpdateArrowsCPP();
	void SetupWidgetReferences(class UCanvasPanel* TagContainer);
	void RemoveTagCPP(class UObject* Tag);
	void RemoveNullTags();
	void ProjectOnNearPlaneCPP(const struct FVector& Location, bool bIsCustomMarker, float* OutNormalizedPosition, float* OutDistanceZ);
	bool IsTagAQuest(bool bIsQuest, class FName QuestID);
	bool IsQuestWithNameActive(class FName QuestID);
	void HideShowTagCPP(class UObject* Tag, enum class ESlateVisibility NewVisibility);
	bool GetShowArrowCPP(bool bIsLeft, float Position, float DistanceZ);
	struct FVector GetDiffForVisiblityCheckCPP(class AActor* Tag, float ZAxisCheckBelow, bool bIsCustomMarker);
	class UCGCompassTagBaseWidget* FindTagWidgetCPP(class UObject* Tag);
	bool CheckIfPlayerIsInRadiusCPP(class AActor* Tag, float TagRadius);
	bool CheckIfInsideViewCPP(class AActor* Tag, float ZAxisCheckBelow, bool bIsCustomMarker, float VisiblityAngle);
	struct FVector2D CalculateTagPositionCPP(class UCanvasPanelSlot* BorderSlot, const struct FVector2D& TagMaxSize, float LocalPosition);
};

// 0x40 (0x2A0 - 0x260)
// Class ChernobylGame.CGCompassTagBaseWidget
class UCGCompassTagBaseWidget : public UUserWidget
{
public:
	class UTextBlock*                            MetersTextBlockRef;                                // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuestMetersTextBlockRef;                           // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TagRef;                                            // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                UpArrowRef;                                        // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                UpArrowGreenRef;                                   // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                DownArrowRef;                                      // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                DownArrowGreenRef;                                 // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsCustomMarker;                                   // 0x298(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsImportant;                                      // 0x299(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3637[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGCompassTagBaseWidget* GetDefaultObj();

	void UpdateMetersTextCPP(float Distance, float Radius);
	void SetupWidgetReferences(class UTextBlock* MetersTextBlock, class UTextBlock* QuestMetersTextBlock, class AActor* Tag);
	void SetupUpDownArrowReferences(class UImage* UpArrow, class UImage* UpArrowGreen, class UImage* DownArrow, class UImage* DownArrowGreen);
};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.CGConditionalWalk
class ACGConditionalWalk : public ACGBaseCharacterMovementExtended
{
public:

	static class UClass* StaticClass();
	static class ACGConditionalWalk* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class ChernobylGame.CGCorsairTriggerVolume
class ACGCorsairTriggerVolume : public ATriggerBox
{
public:
	enum class ECorsairVolumeType                VolumeType;                                        // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3646[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGCorsairTriggerVolume* GetDefaultObj();

};

// 0xA0 (0x2C0 - 0x220)
// Class ChernobylGame.CGCover
class ACGCover : public AActor
{
public:
	bool                                         bCrouching;                                        // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCrouchingLeft;                                    // 0x221(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCrouchingRight;                                   // 0x222(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStandingLeft;                                     // 0x223(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStandingRight;                                    // 0x224(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3697[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UArrowComponent*                       VisibilityChecker;                                 // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArrowComponent*                       VisibilityCheckerCL;                               // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArrowComponent*                       VisibilityCheckerCR;                               // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArrowComponent*                       VisibilityCheckerSL;                               // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArrowComponent*                       VisibilityCheckerSR;                               // 0x248(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       SceneComponent;                                    // 0x250(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisionDotAngle;                                    // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisionMinDistance;                                 // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisionMaxDistance;                                 // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A2[0x5C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGCover* GetDefaultObj();

	void ShootTraceFromCover(TArray<struct FCGMultitraceResult>* OutHitResults, const struct FVector& InTraceEnd, enum class ECollisionChannel InTraceChannel, const TArray<class AActor*>& InActorsToIgnore, bool bInTraceComplex, class UBillboardComponent* InVisibilityChecker, bool bDebugEnabled);
	void SetMultiThread(bool bTickAnywhere);
	enum class ECoverType GetRandomPossibleCoverType(class ACGCharacter* InAggroTarget, const struct FVector& InOptionalLocation, class ACGSoldier* InSoldierContext);
	class ACGAICharacter* GetOccupation();
	bool GetCoverValidity(struct FVector& InLocationToCheck);
	bool GetCoverTypeValidity(enum class ECoverType InCoverType, const struct FVector& InPotentialTargetLocation);
	class UArrowComponent* GetCheckerByCoverType(enum class ECoverType InCoverType);
};

// 0x8 (0x250 - 0x248)
// Class ChernobylGame.CGCraftingNewState
class ACGCraftingNewState : public ACGMovementState
{
public:
	uint8                                        Pad_36AE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGCraftingNewState* GetDefaultObj();

};

// 0x8 (0x250 - 0x248)
// Class ChernobylGame.CGCraftingState
class ACGCraftingState : public ACGMovementState
{
public:
	uint8                                        Pad_36B3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGCraftingState* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class ChernobylGame.CGCrouchSlowModeState
class ACGCrouchSlowModeState : public ACGBaseCharacterMovement
{
public:
	uint8                                        Pad_36BA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGCrouchSlowModeState* GetDefaultObj();

};

// 0x8 (0x268 - 0x260)
// Class ChernobylGame.CGCrouchState
class ACGCrouchState : public ACGBaseCharacterMovementExtended
{
public:
	uint8                                        Pad_36BF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGCrouchState* GetDefaultObj();

};

// 0x20 (0x268 - 0x248)
// Class ChernobylGame.CGNoInputGhostState
class ACGNoInputGhostState : public ACGMovementState
{
public:
	uint8                                        Pad_36C1[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGNoInputGhostState* GetDefaultObj();

};

// 0x0 (0x268 - 0x268)
// Class ChernobylGame.CGCutsceneInputState
class ACGCutsceneInputState : public ACGNoInputGhostState
{
public:

	static class UClass* StaticClass();
	static class ACGCutsceneInputState* GetDefaultObj();

};

// 0x0 (0x268 - 0x268)
// Class ChernobylGame.CGCutsceneInputStateCam
class ACGCutsceneInputStateCam : public ACGCutsceneInputState
{
public:

	static class UClass* StaticClass();
	static class ACGCutsceneInputStateCam* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class ChernobylGame.CGDamageType
class UCGDamageType : public UDamageType
{
public:
	bool                                         bShouldBeAppliedOnStatusChangeDelay;               // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36CD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGDamageType* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_AIBullet
class UCGDamageType_AIBullet : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_AIBullet* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_AIBulletSuper
class UCGDamageType_AIBulletSuper : public UCGDamageType_AIBullet
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_AIBulletSuper* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_Bullet
class UCGDamageType_Bullet : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_Bullet* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class ChernobylGame.CGDamageType_Environmental
class UCGDamageType_Environmental : public UCGDamageType
{
public:
	uint8                                        Pad_36D8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGDamageType_Environmental* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_Fall
class UCGDamageType_Fall : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_Fall* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_Fire
class UCGDamageType_Fire : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_Fire* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_Gas
class UCGDamageType_Gas : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_Gas* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_HeroMelee
class UCGDamageType_HeroMelee : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_HeroMelee* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_Poison
class UCGDamageType_Poison : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_Poison* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_Radiation
class UCGDamageType_Radiation : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_Radiation* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_ShadowMelee
class UCGDamageType_ShadowMelee : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_ShadowMelee* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_StealthKill
class UCGDamageType_StealthKill : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_StealthKill* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ChernobylGame.CGDamageType_Trap
class UCGDamageType_Trap : public UCGDamageType
{
public:

	static class UClass* StaticClass();
	static class UCGDamageType_Trap* GetDefaultObj();

};

// 0x158 (0x10A0 - 0xF48)
// Class ChernobylGame.CGVirtuaShooter
class ACGVirtuaShooter : public ACGAICharacter
{
public:
	class USkeletalMeshComponent*                Carabine;                                          // 0xF48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              VirtuaLaser;                                       // 0xF50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NonAimAlpha;                                       // 0xF58(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3722[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnVirtuaMaxReached;                                // 0xF60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVirtuaStarted;                                   // 0xF70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVirtuaFinished;                                  // 0xF80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstance>      VirtualOffsightCustomMaterial;                     // 0xF90(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3725[0xE8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGVirtuaShooter* GetDefaultObj();

	void VirtuaTick(float InDeltaTime);
	void VirtuaStop();
	void VirtuaReset();
	void VirtuaBeginDelayed(float InDelay, enum class EVirtuaShotType InShotType);
	void VirtuaBegin(enum class EVirtuaShotType InShotType);
	void PushVirtuaOffsight(bool bPush);
	void OnSoliderAimIndicatorSettingsChanged();
	void OnCombatDifficultyChanged();
	float GetVirtuaElapsedNormalised();
	enum class EVirtuaShotType GetShotType();
	struct FCGVirtuaLaserInfo GetLaserInfo(bool bGetLast);
	bool GetIsVirtuaRunning();
	void AddToVirtuaElapsed(float InValueToAdd);
};

// 0x3F0 (0x1490 - 0x10A0)
// Class ChernobylGame.CGDarkStalker
class ACGDarkStalker : public ACGVirtuaShooter
{
public:
	struct FDarkStalkerProperties                Properties;                                        // 0x10A0(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACGDarkStalker* GetDefaultObj();

	void Shoot();
	void OnZeroHealth();
};

// 0x0 (0x248 - 0x248)
// Class ChernobylGame.CGDeadState
class ACGDeadState : public ACGMovementState
{
public:

	static class UClass* StaticClass();
	static class ACGDeadState* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class ChernobylGame.CGDialogFocusActor
class ACGDialogFocusActor : public AActor
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACGDialogFocusActor* GetDefaultObj();

};

// 0x18 (0x238 - 0x220)
// Class ChernobylGame.CGDialogueActor
class ACGDialogueActor : public AActor
{
public:
	FMulticastInlineDelegateProperty_            OnDialogueEnded;                                   // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_372B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGDialogueActor* GetDefaultObj();

	void StartDialogue_FireAndKill(class FName InStartingRow);
	void OnSkipDialogueLine_ButtonPressed(float InAxisValue);
	void OnDialogueEnded_FireAndKill();
};

// 0x10 (0x268 - 0x258)
// Class ChernobylGame.CGDialogueState
class ACGDialogueState : public ACGBaseCharacterMovement
{
public:
	uint8                                        Pad_372C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGDialogueState* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class ChernobylGame.CGDLCRegistry
class UCGDLCRegistry : public UObject
{
public:
	TMap<enum class EDLCType, bool>              LoadedDLCs;                                        // 0x28(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCGDLCRegistry* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class ChernobylGame.CGDronePerception
class UCGDronePerception : public UActorComponent
{
public:
	float                                        VisionHalfAngle;                                   // 0xB0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisionRadius;                                      // 0xB4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldDrawPerceptionRange;                        // 0xB8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldDrawTargetLine;                             // 0xB9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3735[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPerceptionUpdate;                                // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3736[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGDronePerception* GetDefaultObj();

	void ForcePerceptionUpdate();
};

// 0x438 (0x1380 - 0xF48)
// Class ChernobylGame.CGDuster
class ACGDuster : public ACGAICharacter
{
public:
	enum class EDusterSurfaceType                SurfaceType;                                       // 0xF48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_373F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGDusterProperties                   Properties;                                        // 0xF50(0x408)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        TimeElapsedWithoutAttack;                          // 0x1358(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3740[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGDusterNode*                         PreviousNode;                                      // 0x1360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRequestIdle;                                     // 0x1368(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class ACGDusterNode*                         CurrentNode;                                       // 0x1378(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACGDuster* GetDefaultObj();

	class ACGDusterProjectile* SpawnDusterProjectile(class ACGCharacter* InTarget, TSubclassOf<class ACGDusterProjectile> InProjectileClass);
	class ACGDusterGhost* SpawnDusterGhost();
	bool SetCurrentNode(class ACGDusterNode* InNewNode);
	void RequestIdle();
	class ACGDusterNode* GetCurrentNode();
};

// 0x0 (0xC0 - 0xC0)
// Class ChernobylGame.CGDusterAggroComponent
class UCGDusterAggroComponent : public UCGMonsterAggroComponent
{
public:

	static class UClass* StaticClass();
	static class UCGDusterAggroComponent* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class ChernobylGame.CGDusterGhost
class ACGDusterGhost : public AActor
{
public:

	static class UClass* StaticClass();
	static class ACGDusterGhost* GetDefaultObj();

};

// 0x18 (0x238 - 0x220)
// Class ChernobylGame.CGDusterNode
class ACGDusterNode : public AActor
{
public:
	TArray<class ACGDusterNode*>                 NextNodes;                                         // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_374E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGDusterNode* GetDefaultObj();

	class UPaperSpriteComponent* RegenerateImpl();
	class ACGDuster* GetNodeOwner();
};

// 0x18 (0x238 - 0x220)
// Class ChernobylGame.CGDusterProjectile
class ACGDusterProjectile : public AActor
{
public:
	class UParticleSystem*                       AttachedParticle;                                  // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       StartParticle;                                     // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       HitParticle;                                       // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACGDusterProjectile* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGEditor
class UCGEditor : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCGEditor* GetDefaultObj();

	void SetIsEditorOnly(class UActorComponent* InActorComponent, bool InIsEditorOnly);
	void GetDifferentObject(class UObject* InObject, TArray<class UObject*>& InArray, class UObject** OutObject, int32 InMaxIndex);
};

// 0x0 (0x268 - 0x268)
// Class ChernobylGame.CGEndGameCreditsSceneState
class ACGEndGameCreditsSceneState : public ACGNoInputGhostState
{
public:

	static class UClass* StaticClass();
	static class ACGEndGameCreditsSceneState* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGEventSystem
class UCGEventSystem : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCGEventSystem* GetDefaultObj();

	void EventSystemSetValue(class UObject* WorldContextObject, class FName ID, bool NewValue);
	bool EventSystemGetValue(class UObject* WorldContextObject, class FName ID);
};

// 0x8 (0x38 - 0x30)
// Class ChernobylGame.CGFadeNotifyState
class UCGFadeNotifyState : public UCGAnimNotifyState
{
public:
	enum class EFadeDirection                    FadeDirection;                                     // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldDefade;                                     // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldStay;                                       // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_376F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeOutTime;                                       // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCGFadeNotifyState* GetDefaultObj();

};

// 0xA0 (0x2C0 - 0x220)
// Class ChernobylGame.CGFakeHero
class ACGFakeHero : public AActor
{
public:
	uint8                                        Pad_377B[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGFakeHero* GetDefaultObj();

	float StartCustomAnim(const struct FPlayCustomAnimProperties& InProperties, class UAnimSequenceBase* InAnimSequence);
	void OnTemporaryLifetimeOver();
	void OnInitialHideFinished(enum class EState InQueryInitialItemState, TSubclassOf<class ACGActiveItem> InQueryInitialItemClass);
	void OnEquip();
	void OnCameraBlendOutStarted();
	void OnCameraBlendInFinished();
	void OnAnimStarted();
	class USkeletalMeshComponent* FindMesh();
};

// 0x8 (0x268 - 0x260)
// Class ChernobylGame.CGFallingCrouchedState
class ACGFallingCrouchedState : public ACGBaseCharacterMovementExtended
{
public:
	uint8                                        Pad_3780[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGFallingCrouchedState* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class ChernobylGame.CGFallingState
class ACGFallingState : public ACGBaseCharacterMovement
{
public:
	uint8                                        Pad_3784[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGFallingState* GetDefaultObj();

};

// 0x0 (0x258 - 0x258)
// Class ChernobylGame.CGFlyingState
class ACGFlyingState : public ACGBaseCharacterMovement
{
public:

	static class UClass* StaticClass();
	static class ACGFlyingState* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGFunctionLibrary
class UCGFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCGFunctionLibrary* GetDefaultObj();

	bool TryChance(float InChance);
	TArray<class FName> StringArrayToNameArray(TArray<class FString>& Array);
	void StopCurrentTask(class UBehaviorTree* BehTree);
	void SpawnShadowEnemy(class UObject* WorldContextObject, TSoftClassPtr<class ACGShadow> InShadowClass, TSoftObjectPtr<class UBehaviorTree> InBehaviorTree, const struct FTransform& InShadowTransform, TArray<class ACGShadowTeleportingAreaBase*>& InPossibleAreas, TArray<class APatrolActor*>& InPossiblePatrolNodes, class APatrolActor* InNextPatrolNode, const struct FShadowProperties& InProperties, class ACGShadow** OutSpawnedShadow, bool* OutSpawnResult, class ACGShadowTeleportBase* InOptionalStartingTeleport);
	void SpawnPatrollerEnemyFromSoftClass(class UObject* WorldContextObject, TSoftClassPtr<class ACGSoldier> InPatrollerClass, TSoftObjectPtr<class UBehaviorTree> InBehaviorTree, const struct FTransform& InPatrollerTransform, class APatrolActor* InNextPatrolActor, TSoftClassPtr<class UCGAIState> InInitialState, class FName InSquadName, class ACGSoldier** OutSpawnedPatroller, bool* OutSpawnResult, bool bInCanArrest);
	void SpawnPatrollerEnemy(class UObject* WorldContextObject, TSubclassOf<class ACGSoldier> InPatrollerClass, class UBehaviorTree* InBehaviorTree, const struct FTransform& InPatrollerTransform, class APatrolActor* InNextPatrolActor, TSubclassOf<class UCGAIState> InInitialState, class FName InSquadName, class ACGSoldier** OutSpawnedPatroller, bool* OutSpawnResult, bool bInCanArrest);
	void SpawnOutdoorShadowEnemy(class UObject* WorldContextObject, TSubclassOf<class ACGShadow> InShadowClass, class UBehaviorTree* InBehaviorTree, const struct FTransform& InShadowTransform, const TArray<class ACGShadowTeleportBase*>& InInitialOutdoorTeleports, const struct FOutdoorShadowProperties& InProperties, class ACGShadow** OutSpawnedShadow, bool* OutSpawnResult);
	void SpawnHighlightOnActor(class AActor* Actor, class UMaterialInterface* Material, bool FollowTarget);
	void SpawnDarkStalkerEnemy(class UObject* WorldContextObject, TSoftClassPtr<class ACGDarkStalker> InDarkStalkerClass, TSoftObjectPtr<class UBehaviorTree> InBehaviorTree, const struct FTransform& InDarkStalkerTransform, class ACGDarkStalker** OutSpawnedDarkStalker, bool* OutSpawnResult);
	void SpawnChernohostEnemy(class UObject* WorldContextObject, TSubclassOf<class ACGChernohost> InChernohostClass, class UBehaviorTree* InBehaviorTree, TSubclassOf<class UCGAIState_Chernohost> InStartingState, const struct FTransform& InChernohostTransform, class ACGShadowTeleportBase* InOptionalStartingTeleport, class AShadowPatrolActor* InOptionalStartingPatrolNode, class ACGChernohost** OutSpawnedchernohost, bool* OutSpawnResult);
	TMap<class FString, struct FCustomSaveGameMetadataInfo> SortSaves(TMap<class FString, struct FCustomSaveGameMetadataInfo> Saves);
	TArray<class AActor*> SortActorsByDistanceToPoint(TArray<class AActor*>& InArray, struct FVector& InPoint);
	void SetRenderCustomDepthStencilBitComponent(class UPrimitiveComponent* Component, int32 Bit, bool bIsEnabled);
	void SetRenderCustomDepthStencilBit(class AActor* Actor, int32 Bit, bool bIsEnabled);
	void SetCustomStencilDepthOnActor(class AActor* Actor, bool IsEnabled, int32 StencilValue);
	class UTexture2D* ScreenshotDataToTexture(struct FSaveScreenshotData& ScreenshotData);
	void RemoveRadarHighlights(class UObject* WorldContextObject, bool bForce);
	class FString RemoveNewLineFromString(const class FString& String);
	void ReadPhysicalBodyStatus(class USkeletalMeshComponent* InSkeletalMesh, class FName InBoneName);
	bool ProjectWorldToScreenBidirectional(class APlayerController* Player, struct FVector& WorldPosition, struct FVector2D* ScreenPosition, bool* bTargetBehindCamera, bool bPlayerViewportRelative);
	void PlayCustomSequence(class UAnimSequence* InHeroCustomAnim, const struct FTransform& InHeroTargetTransform, const TArray<struct FCustomAnimQuery>& InAnimQueries, float InBlendToTransformLength, const struct FPlayCustomAnimProperties& InProperties, bool bOldBehavior);
	void PlayAnimationAt(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimationAsset* InNewAnimToPlay, float InStartTime, bool bInLooping);
	void MakeNoise(class AActor* InInstigator, float InNoiseRange, const struct FVector& InNoiseLocation, float InNoiseStrength, class FName InTag, float InFalloff, bool bInIgnoreSenseBlock, float InMaxDistanceToActivateCombat);
	struct FTransform K2_ExtractRootMotionFromRange(class UAnimSequence* InSequence, float InStartTrackPosition, float InEndTrackPosition);
	TArray<class UCGCollisionLimbComponent*> K2_CGGetVisibleHeroLimbsFromPoint(class UObject* WorldContextObject, struct FVector& InPoint, bool bDebug, TArray<class AActor*>& InActorsToIgnore, class ACGAICharacter* InOptionalSightAI);
	bool IsThereAPath(class ACGAICharacter* InAI, struct FVector& InTargetLocation);
	bool IsSteamSubsystemValid();
	bool IsSteamDemo(class UObject* WorldContextObject);
	bool IsShippingBuild();
	bool IsPS4GamepadConnected(class UObject* WorldContextObject);
	bool IsPointClose(struct FVector& InOrigin, struct FVector& InPoint, float InRadius);
	bool IsInTrigger(class AActor* InActor, TSubclassOf<class AActor> InTriggerClass);
	bool IsDemoVersion(class UObject* WorldContextObject);
	void HitPhysicalMaterial(class UCGPhysicalMaterial* InPhysicalMaterial, struct FHitResult& InHit, class AActor* InInstigator);
	struct FVector GroupSpreadPoint(class AActor* InGroupMember, float InSpreadCheckRadius, TSubclassOf<class AActor> InGroupClass, const TArray<enum class EObjectTypeQuery>& InGroupTypeQuery, class AActor* InSpreadTarget, bool* bSpreadSuccessfull);
	class FString GetStringFromArrayOrEmpty(TArray<class FString>& Array, int32 Index);
	enum class EResourceType GetResourceByName(class FName Name);
	int32 GetRandomIntInRangeWithExclusion(int32 InExclusion, int32 InRangeMin, int32 InRangeMax);
	class FName GetNameByResource(enum class EResourceType Type);
	class FName GetMyBoneNameFromHit(struct FHitResult& Hit);
	class ACGMusicManager* GetMusicManager(class AActor* InLevelActor);
	bool GetLastInputFromGamepadCPP(class UObject* WorldContextObject);
	enum class ELandMovementModeNoStrafe GetLandMovementNoStrafe(enum class ELandMovementMode InLandMovement);
	class FName GetKeyName(struct FKey& Key);
	bool GetIsUserInterfaceEnabled(class UObject* WorldContextObject, enum class EUserInterfaceType UserInterfaceType);
	bool GetIsLevelFullyUnloaded(class UObject* WorldContextObject, const class FString& LevelName);
	bool GetIsDX12GraphicsRHI();
	bool GetIsDLCLoaded(class UObject* WorldContextObject, enum class EDLCType Type);
	bool GetIsActorInViewport(class AActor* InActor);
	bool GetHeroCleanAim(class AActor* InActor, bool bInDebug);
	float GetHeroAimAngleAtBone(class USkeletalMeshComponent* InSkeletalMesh, class FName InBoneName);
	class FString GetGraphicsRHI();
	class FString GetGameVersionString();
	struct FKey GetFirstKeyForAction(class FName ActionName);
	class FString GetEnglishKeyDisplayName(class UObject* WorldContextObject, const struct FKey& Key, bool RemoveSpaces);
	enum class EDirection GetDirection(struct FVector& InHeroLocation, struct FVector& InHeroForwardVector, struct FVector& InSourceForwardVector, struct FVector& InSourceRightVector, struct FVector& InSourceLocation);
	int32 GetCurrentSkeletalMeshLODIndex(class USkeletalMeshComponent* InSkeletalMeshComponent);
	enum class ECGMap GetCurrentMap(class AActor* InLevelActor);
	enum class EClockDirection GetClockDirection(struct FVector& InForwardVector, struct FVector& InArbitraryVector);
	class AMainPawnCpp* GetCGPawnBase(class UObject* WorldContextObject);
	class ACGGameModeBase* GetCGGameModeBase(class UObject* WorldContextObject);
	class UCustomGameInstance* GetCGGameInstanceBase(class UObject* WorldContextObject);
	TArray<struct FKey> GetAllKeys();
	TArray<struct FVector> GetActorBoundsPoints(class AActor* InActor);
	class FString FormatDateTime(struct FDateTime& DateTime, const class FString& Format);
	class FName FindFirstContaining(TArray<class FName>& Array, class FName PartialName);
	class FName FindActiveItemID(TSubclassOf<class ACGActiveItem> InActiveItemClass);
	void EnableThermovisionStencilComponent(class UPrimitiveComponent* Component, bool bIsEnabled);
	void EnableThermovisionStencil(class AActor* Actor, bool bIsEnabled);
	void EnableThermovisionForMissingActors(class UObject* WorldContextObject, TArray<class ACGAICharacter*>& InCurrentActors);
	void EnableSlateCaching();
	void EnableOutlineStencilComponent(class UPrimitiveComponent* Component, bool bIsEnabled);
	void EnableOutlineStencil(class AActor* Actor, bool bIsEnabled);
	void DrawTriangle(class UObject* WorldContextObject, TArray<struct FVector>& InVerts, float InLifeTime, const struct FLinearColor& InColor, int32 InDepthPriority);
	bool DoesAISeeHero(class UObject* InWorldContext, enum class EAIType InAIType);
	void DisableThermovisionForActors(TArray<class ACGAICharacter*>& InCurrentActors);
	void DisableSlateCaching();
	void DisablePhysicalBody(class USkeletalMeshComponent* InSkeletalMesh, class FName InBoneName);
	void DebugLogOnShipping(const class FString& String);
	bool CompareFloatArray(TArray<float>& ArrayA, TArray<float>& ArrayB, float Threshold);
	TArray<class ACGCover*> CGSortCoversByVisibility(class ACGCharacter* InVisibilityTarget, TArray<class ACGCover*>& InOutCovers);
	void CGMultitrace(class UObject* WorldContextObject, TArray<struct FCGMultitraceResult>* OutHitResults, const struct FVector& InTraceStart, const struct FVector& InTraceEnd, enum class ECollisionChannel InTraceChannel, const TArray<class AActor*>& InActorsToIgnore, bool bInTraceComplex, bool bDebugEnabled, float InDebugTime, bool bIgnoreCollisions);
	TArray<class ACGCover*> CGGetPossibleCovers(class UObject* WorldContextObject, struct FVector& InPointToSearchFrom, float InSearchRadius, float InSearchDeletionRadius);
	TArray<class ACGCover*> CGFilterCoversByCloser(class ACGAICharacter* InCoveredCharacter, struct FVector& InCloserThanTarget, TArray<class ACGCover*>& InOutCovers);
	bool CGCheckIfItemIsResource(class FName ItemId);
	float CGApplyDamage(class ACGCharacter* InDamagedCharacter, float InBaseDamage, class AController* InEventInstigator, class AActor* InDamageCauser, struct FCGDamageEvent& InDamageEvent, bool bInFakeDamage);
	bool CallFunctionOnLevelActor(class AActor* InActor, const class FString& InFunctionName, const class FString& Args);
	bool CallFunctionOnActor(class AActor* InActor, const class FString& InFunctionName, const class FString& Args);
	void BenchmarkSaveFinalResults(const class FString& MapName, const struct FBenchmarkFinalResult& Result, const class FString& GraphicQuality, const class FString& BenchResolution, const class FString& WindowModeSettings, const class FString& VsyncSettings, const class FString& FrameRateLockSettings, const class FString& FovSettings, const class FString& ResulutionScaleSettings, const class FString& TexturesSettings, const class FString& ShadowsSettings, const class FString& EffectsSettings, const class FString& PPSettings, const class FString& DrawDistanceSettings, const class FString& AASettings, const class FString& FoliageQualitySettings, const class FString& RayTracingSettings, const class FString& FSRSettings, const class FString& DLSSSettings);
	struct FBenchmarkHardware BenchmarkHardware();
	TArray<float> BenchmarkGetMinXPercent(TArray<float>& Elems, float Percent);
	TArray<float> BenchmarkGetMaxXPercent(TArray<float>& Elems, float Percent);
};

// 0x320 (0x5E0 - 0x2C0)
// Class ChernobylGame.CGGameModeBase
class ACGGameModeBase : public AGameModeBase
{
public:
	TSubclassOf<class ACGActiveItem>             MeleeClass;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStaminaDisabledForDebug;                          // 0x2C8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGGibActor>               GibClass;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAkAudioEvent*>                 PunchLandSoundArray;                               // 0x2D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bDamageDebugEnabled;                               // 0x2E8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAggroDebugEnabled;                                // 0x2E9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCrouchDebugEnabled;                               // 0x2EA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMusicManagerDebugEnabled;                         // 0x2EB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MovementXSpeedScale;                               // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementYSpeedScale;                               // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          GamepadLookAroundRateCurve;                        // 0x2F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          GamepadAimLookAroundRateCurve;                     // 0x300(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          ClimbMomentumCurve;                                // 0x308(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KeyCombinationTimeThreshold;                       // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClimbRate;                                         // 0x314(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseLookUpRate;                                   // 0x318(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseTurnRate;                                     // 0x31C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GamepadStickTurnRate;                              // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GamepadStickLookUpRate;                            // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GamepadShareXYCurves;                              // 0x328(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InputIndependentFromFramerate;                     // 0x329(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3904[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Walk_MaxSpeed_Walk;                                // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Walk_MaxSpeed_WalkSlow;                            // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Aim_MaxSpeed_Walk;                                 // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Aim_LookAround_Modifier;                           // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Aim_LookAround_GamepadModifier;                    // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Crouch_MaxSpeed_Walk;                              // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Crouch_AnimPlayrate;                               // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchAim_MaxSpeed_Walk;                           // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sprint_MaxSpeed_Walk;                              // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sprint_LookAround_Modifier;                        // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Lean_MaxSpeed_Walk;                                // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanAim_MaxSpeed_Walk;                             // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falling_1stPhaseHeight;                            // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falling_2ndPhaseHeight;                            // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falling_3rdPhaseHeight;                            // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlowMode_MaxSpeed_Walk;                            // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchSlowMode_MaxSpeed_Walk;                      // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseRange_Step_Crouch;                            // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseRange_Step_Walk;                              // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseRange_Step_Run;                               // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseLoudness_Step_Crouch;                         // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseLoudness_Step_Walk;                           // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseLoudness_Step_Run;                            // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         CameraShake_Equip;                                 // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         CameraShake_Unequip;                               // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         DeathSequence;                                     // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFPReaction>                   ShadowMeleeHitReactions;                           // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 ShadowMeleePhaseReactions;                         // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFPReaction>                   BulletShotReactions;                               // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 BulletShotPhaseReactions;                          // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>       GasDamageReaction;                                 // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             GasDamageCue;                                      // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 GasPhaseReactions;                                 // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                 RadiationPhaseReactions;                           // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        BulletShotReactionChance;                          // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimSequence*>                 FallDamagePhaseReactions;                          // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          PendingDebugStreamedLevels;                        // 0x430(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimMontage*                          PDA_ShowMontage;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          PDA_HideMontage;                                   // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGActiveItem>             EmptyHandsClass;                                   // 0x450(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGeigerWaveFound;                                 // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        CloseDetectionRadius;                              // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NPCHeadTracingRadius;                              // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NPCHeadTracingRadius_Losing;                       // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeleeDetectionRadius;                              // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ACGDarkStalker>          DarkStalkerClass;                                  // 0x478(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBehaviorTree>          DarkStalkerBehaviorTree;                           // 0x4A0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGProjectile>             SoldierBulletClass;                                // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    PickableItemClass;                                 // 0x4D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetLostTimer;                                   // 0x4D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3912[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         AIDamageNotifySound;                               // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AICriticalDamageNotifySound;                       // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3913[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxAlertedTimesForSoldier;                         // 0x500(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SoldierMaxTimeInAlert;                             // 0x504(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SoldierMergeSquadRadius;                           // 0x508(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3915[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLeaveMapDelegate;                                // 0x510(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3916[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            InputDeviceChanged;                                // 0x528(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                         LastInputWasFromGamepad;                           // 0x538(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3918[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChatterRadius;                                     // 0x548(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3919[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGDialogueActor*                      LockedDialogue;                                    // 0x550(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     ImpactAttenuation;                                 // 0x558(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     ImpactConcurrency;                                 // 0x560(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>        SoldierHighlightEffect;                            // 0x568(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ACGPhotoModeCameraController> PhotoModeControllerClass;                          // 0x590(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPhotoModeToggled;                                // 0x5B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPhotoModeDeactivated;                            // 0x5C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class ACGPhotoModeCameraController*          PhotoModeController;                               // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACGGameModeBase* GetDefaultObj();

	void UpgradeTrigger();
	void UpgradeScope();
	void UpgradeMagazine();
	void UpgradeHandle();
	void UpgradeBarrel();
	void UnloadMapAsync(class FName Level);
	void TimerSet(int32 Min);
	void TimerRemove(int32 Delta);
	void TimerAdd(int32 Delta);
	void SubtitleAddWhisperDefault();
	void SubtitleAddWhisper(const class FString& SubtitleText, float TimeShown, const struct FLinearColor& ActorColor);
	void SubtitleAddDefault();
	void SubtitleAdd(const class FString& ActorName, const class FString& SubtitleText, float TimeShown, const struct FLinearColor& ActorColor);
	void StaminaEnabled(bool bEnabled);
	bool ShouldAIDealDamage();
	void SetLODAI3(float InNewDistance);
	void SetLODAI2(float InNewDistance);
	void SetLODAI1(float InNewDistance);
	void SetLODAI0(float InNewDistance);
	void SetLevelTime(float InNewTime);
	void SetGodMode(bool Enabled);
	void SetFullQuickSaveMode(bool IsFullQuickSaveMode);
	void SetForceDemoVersion(bool bInForceDemo);
	void SetDebugSoldierEventLevel(int32 NewLevel);
	void SetDebugMonsterEventLevel(int32 NewLevel);
	void SavePropertyLinkData(const class FString& SaveName);
	void ResetRads();
	void ResetForcedDLC(enum class EDLCType Type);
	void ResetFirstTimeGameOpened();
	void ResetAggroGlobal();
	void PrintPostLevel();
	void PrintPendingForceEvent(enum class EEventMap MapID);
	void PrintLastWeeksEvents();
	void PrintIsDLCLoaded(enum class EDLCType Type);
	void PrintIsDemoVersion();
	void PrintEventStatus();
	void PrintCurrentSoldierEventLevel();
	void PrintCurrentEventLevelValues();
	void PrintAggroNum();
	void PrintActiveEventsForMap(enum class EEventMap MapID);
	void PrintActiveEvents(bool FullDetails);
	void PrepareDataForFractalVR(bool bPrepeare);
	void PlayerRadRemove(float Delta);
	void PlayerRadAdd(float Delta);
	void PlayerMadnessModify(int32 Delta);
	void PlayerHpSet(float NewHp);
	void PlayerHpRemove(float Damage);
	void PlayerHpAdd(float HealAmount);
	void OnInputAnyKeyboardKey();
	void OnInputAnyGamepadKey();
	void OnInputAnyGamepadAxis(float AxisValue);
	void OnDebugEventStreamed();
	void LoadMapAsync(class FName Level, const struct FTransform& Transfrom, class UObject* ObjToCall, class FName FunctionToCall);
	void LetThereBeLight();
	void InventoryResize(int8 X, int8 Y);
	void InventoryRemoveIngredients(float Count);
	void InventoryRemove(class FName Item, float Count);
	void InventoryAddIngredients(float Count);
	void InventoryAdd(class FName Item, float Count);
	void InteractionDebugInfoToggle();
	void InputDeviceChangedDelegate__DelegateSignature(bool NewInputIsGamepad);
	void GhostMode();
	class ULevel* GetPersistentLevel();
	float GetLODAI3();
	float GetLODAI2();
	float GetLODAI1();
	float GetLODAI0();
	void GetLevelTime();
	bool GetIsPhotoModeActive();
	int32 GetCurrentControllerIconsSetting();
	void GetAllMaterials();
	void GeigerWaveFound__DelegateSignature(class AActor* InActorFoundByWave);
	void ForceEvent(class FName Event);
	void ForceDLC(enum class EDLCType Type, bool bIsEnabled);
	void ExpAdd(float Delta);
	void EventUnstream(class FName Event);
	void EventSystemPrintPermanentLevels();
	void EventSystemPrintActiveQuests();
	void EventSystemPrintActiveEvents(enum class EEventMap Map);
	void EventSystemGetFinishedQuests();
	void EventStream(class FName Event);
	void EventPrintCategories();
	void EventDeactivate(class FName Event);
	void EventActivate(class FName Event, enum class EEventMap Map);
	void EnableSuperGore(bool bInEnabled);
	void EnableSoldierEventLevelDebug(bool bEnable);
	void EnablePS4GamepadDebug(bool InDebug);
	void EnableMusicManagerDebug(bool InDebug);
	void EnableMultitraceDebug(bool InDebug);
	void EnableMovementStateDebug(bool InEnabled);
	void EnableMeleeDamageDebug(bool InEnabled);
	void EnableLevelTimerDebug(bool bInNewEnable);
	void EnableGateOfMadnessModeAvailability(bool bEnable);
	void EnableGateOfMadnessMode(bool bEnable);
	void EnableGateOfMadnessDefaultSaveSystem(bool bEnable);
	void EnableGamepadDebug(bool InDebug);
	void EnableDamageDebug(bool InDebug);
	void EnableCrouchDebug(bool InDebug);
	void EnableCloseCollisionDebug(bool InEnabled);
	void EnableBuildSystemDebug(bool InDebug);
	void EnableAggroDebug(bool InDebug);
	void EnableActorsDebugSquad(bool InDebug);
	void EnableActorsDebugSkeleton(bool InDebug);
	void EnableActorsDebugLevel(bool InDebug);
	void EnableActorsDebugIK(bool InDebug);
	void EnableActorsDebugGib(bool InDebug);
	void EnableActorsDebug(bool InDebug);
	void EnableActorDebug(bool InDebug);
	void DumpPropertyLink(class AActor* Actor);
	void DumpAllExistingObjectsLinks();
	void DebugSetSpecificDay(int32 Day);
	void DeactivatePhotoMode();
	void CustomBugItV2();
	void CustomBugIt();
	void CrashGame();
	void CraftingLearnRecipe(class FName Recipe);
	void CraftingLearnAllRecipes();
	enum class EPropertyLinkResult ComparePropertyLinkData(const class FString& Base, const class FString& New);
	void CompanionStats(class FName CompanionID);
	void CompanionsPrintData();
	void CompanionAdd(class FName CompanionID);
	void ChangeLevelTimeLimits(int32 LevelTime, int32 StormTime);
	void CancelForceEvent(class FName Event);
	void AIKill();
	void AddPerk(class FName PerkName);
	void ActivatePhotoMode();
};

// 0x20 (0x600 - 0x5E0)
// Class ChernobylGame.CGGameMode_VirtuaCop
class ACGGameMode_VirtuaCop : public ACGGameModeBase
{
public:
	float                                        VirtuaAimMaxTime;                                  // 0x5E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3927[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UUserWidget>               OffsightIndicatorClass;                            // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AddShooterInterval;                                // 0x5F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AddShooter_WhenHeroNotVisible;                     // 0x5F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SetChase_WhenHeroNotVisible;                       // 0x5F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_392A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGGameMode_VirtuaCop* GetDefaultObj();

};

// 0x68 (0x2C8 - 0x260)
// Class ChernobylGame.CGGeigerBaseWidget
class UCGGeigerBaseWidget : public UUserWidget
{
public:
	bool                                         bShouldGenerateRandomly;                           // 0x260(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3934[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Red;                                               // 0x264(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          Orange;                                            // 0x274(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          Yellow;                                            // 0x284(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          White;                                             // 0x294(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3936[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            EnviroTextRef;                                     // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                EnviroLineRef;                                     // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                          ArrowContainerRef;                                 // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                ArrowRef;                                          // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCGGeigerBaseWidget* GetDefaultObj();

	void UpdateEnviroRandomly(float DeltaTime);
	void UpdateEnviro(float Radiation, float MinRadiation, float MaxRadiation, float GeigerInaccuracyOffset);
	void SetupWidgetReferences(class UTextBlock* EnviroTextWidget, class UImage* EnviroLineWidget, class UCanvasPanel* ArrowContainerWidget, class UImage* ArrowWidget);
};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.CGGhostState
class ACGGhostState : public ACGBaseCharacterMovementExtended
{
public:

	static class UClass* StaticClass();
	static class ACGGhostState* GetDefaultObj();

};

// 0x80 (0x2A0 - 0x220)
// Class ChernobylGame.CGGibActor
class ACGGibActor : public AActor
{
public:
	class USceneComponent*                       SceneComp;                                         // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ParticlesForGibAttach;                             // 0x238(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ParticlesForGibSpawn;                              // 0x248(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ParticlesForWhenHit;                               // 0x258(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EGibActorType                     GibActorType;                                      // 0x268(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            GrowingBloodDecalMaterials;                        // 0x270(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            SplatterBloodDecalMaterials;                       // 0x280(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                AssociatedSkeletalMesh;                            // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AssociatedSocket;                                  // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACGGibActor* GetDefaultObj();

};

// 0x98 (0x148 - 0xB0)
// Class ChernobylGame.CGGibComponent
class UCGGibComponent : public UActorComponent
{
public:
	TArray<struct FCGGibInfo>                    GibInfo;                                           // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	float                                        GibDamageMultiplierOnDeath_Min;                    // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GibDamageMultiplierOnDeath_Max;                    // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ParticlesForGibAttach;                             // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ParticlesForGibSpawn;                              // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               ParticlesForWhenHit;                               // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            GrowingBloodDecalMaterials;                        // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            SplatterBloodDecalMaterials;                       // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bGibGodmode;                                       // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_394E[0x2F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGGibComponent* GetDefaultObj();

	void UpdateMaterialsForGib(class UPrimitiveComponent* InComponent, enum class EGibMaterialUpdateMode InUpdateMode, class FName InAdditionalParamName);
	void SpawnDetachedGib(struct FCGGibInfo* InGibInfo, struct FCGDamageEvent& InDamageEvent);
	void SpawnAttachedGib(struct FCGGibInfo* InGibInfo);
	void SetGibOpacityParam(class FName& InParamName);
	void SetGibGodmode(bool bInGodmode);
	void SchedulePhysicsChange(TArray<class FName>& InBoneNames);
	void OnPhysicsStarted();
	void OnHPLost(class AActor* InComponentOwner, float InRemainingHpPoints, float InRemainingHpPercent, struct FCGDamageEvent& InDamageEvent, class AActor* InDamageDealer, float InDamage, bool bInKillingDamage);
	void HideComponentsByName(TArray<class UActorComponent*>& InSceneComps, TArray<class FString>& InCompNames);
	void CumulativeGibs();
};

// 0x10 (0xC0 - 0xB0)
// Class ChernobylGame.CGHearingSense
class UCGHearingSense : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnNoiseHeard;                                      // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCGHearingSense* GetDefaultObj();

	void ReceiveNoise(class AActor* InInstigator, float InNoiseRange, const struct FVector& InNoiseLocation, float InNoiseStrength, class FName InTag, bool bInIgnoreSenseBlock, float InMaxDistanceToActivateCombat);
};

// 0x50 (0x270 - 0x220)
// Class ChernobylGame.CGHeroGhost
class ACGHeroGhost : public AActor
{
public:
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3951[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGHeroGhost* GetDefaultObj();

	void DeactivateGhost();
	void ActivateGhost();
};

// 0x0 (0x248 - 0x248)
// Class ChernobylGame.CGItemContinuousActivation
class ACGItemContinuousActivation : public ACGMovementState
{
public:

	static class UClass* StaticClass();
	static class ACGItemContinuousActivation* GetDefaultObj();

};

// 0x0 (0x258 - 0x258)
// Class ChernobylGame.CGLeanState
class ACGLeanState : public ACGBaseCharacterMovement
{
public:

	static class UClass* StaticClass();
	static class ACGLeanState* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.CGLevelTimer
class UCGLevelTimer : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UCGLevelTimer* GetDefaultObj();

	void OnTimerUpdate(const class FString& InNewStringTime, float NewFloatTime);
	void OnStop();
	void OnStart();
	void OnShowForDuration();
	void OnShowConstant();
};

// 0xC8 (0x178 - 0xB0)
// Class ChernobylGame.CGLevelTimerComponent
class UCGLevelTimerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnStart;                                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            On15MinLeft;                                       // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            On10MinLeft;                                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            On5MinLeft;                                        // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimeRanOut;                                      // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimerStart;                                      // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimerStop;                                       // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStormStart;                                      // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStormStop;                                       // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimerTick;                                       // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bStormInProgress;                                  // 0x150(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCGLevelTimer>             TimerWidgetClass;                                  // 0x158(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCGLevelTimer*                         TimerWidget;                                       // 0x160(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingSeconds;                                  // 0x168(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3960[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGLevelTimerComponent* GetDefaultObj();

	void StronglyStopTimer();
	void StronglyEnableTimer();
	void StopTimer();
	void StartTimer();
	void StartAndEnableTimer();
	void SetRemainingTime(int32 InNewRemainingTime);
	void SetEnableDebug(bool bInNewEnable);
	void Reset();
	class FString GetRemainingTimeAsString();
	int32 GetRemainingTime();
	void FinishStorm();
};

// 0x0 (0x258 - 0x258)
// Class ChernobylGame.CGLookOnly
class ACGLookOnly : public ACGBaseCharacterMovement
{
public:

	static class UClass* StaticClass();
	static class ACGLookOnly* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGMath
class UCGMath : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCGMath* GetDefaultObj();

	float Step(float X, float Step, float A, float B);
	void SetAngularRotationOffset(class UPhysicsConstraintComponent* PhysicsConstraintComponent, const struct FRotator& Offset);
	int32 PolarToCartesian(float InRad, float InAng, float* OutX, float* OutY);
	struct FVector PointOnSphere(float& InRadius, float& InYaw, float& InPitch, const struct FVector& InOrigin);
	bool PointInsideRectangle2D(const struct FVector2D& Start, const struct FVector2D& End, const struct FVector2D& Point);
	bool PointInsideCircle2D(const struct FVector2D& Point, const struct FVector2D& SphereCenter, float Radius);
	bool PointInNegativeHalfSpace2D(const struct FVector2D& PlaneNormal, const struct FVector2D& PlanePoint, const struct FVector2D& Point);
	int32 OuterProduct(struct FVector2D& InLine1stPoint, struct FVector2D& InLine2ndPoint, struct FVector2D& InPoint);
	struct FVector2D MapRectangleToCircle(const struct FVector2D& InPointInRect, const struct FVector2D& InRectSize);
	struct FVector2D MapCircleToRectangle(const struct FVector2D& Uv, const struct FVector2D& HalfRecSize);
	bool LineSegmentPointCollision2D(const struct FVector2D& Start, const struct FVector2D& End, const struct FVector2D& Point, float Epsilon);
	bool IsInsideBox(const struct FVector2D& Point, float Width, float Height);
	bool IsFacingSpecifiedDirection(const struct FVector2D& DirectionA, const struct FVector2D& DirectionB, float MaxAngle);
	bool IsClose(const struct FVector& InCloseTo, float InRadius, const struct FVector& InVector);
	void IntersetionOfIntArrays(TArray<int32>& InA, TArray<int32>& InB, TArray<int32>* OutIntersection);
	void IntersetionOfFloatArrays(TArray<float>& InA, TArray<float>& InB, TArray<float>* OutIntersection);
	float GetAverageDelta(TArray<float>& InArray);
	float GetAverage(TArray<float>& InArray);
	float GetAngleToTarget(const struct FVector& InStart, const struct FVector& InForward, const struct FVector& InTarget);
	float Gain(float X, float K);
	void CreateReflectionTransform(struct FTransform* OutTransform, const struct FPlane& InPlane);
	struct FRotator ChangeRotationOrder(struct FRotator& InRotator, enum class EEulerRotationOrder InOrder);
	int32 CartesianToPolar(float InX, float InY, float* OutRad, float* OutAng);
	TArray<float> ArrayToStack(TArray<float>& InArray, float InNewElement);
	bool AABB2D(const struct FVector2D& StartA, const struct FVector2D& EndA, const struct FVector2D& StartB, const struct FVector2D& EndB);
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGMultitraceInterface
class ICGMultitraceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICGMultitraceInterface* GetDefaultObj();

	bool GetShouldIgnoreAfterFirstMultitraceHit();
};

// 0x88 (0x2A8 - 0x220)
// Class ChernobylGame.CGMusicManager
class ACGMusicManager : public AActor
{
public:
	struct FCGMusicProperties                    MusicProperties;                                   // 0x220(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_39F0[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGMusicManager* GetDefaultObj();

	bool SetQuest(class FName InQuestSignalName);
	void SetMusicEnabled(bool bInNewEnabled);
	enum class ECGMapMusicMode GetCurrentMode();
	enum class ECGMapMusicEvent GetCurrentEvent();
	void EnableAllEvents(enum class ECGMapMusicEvent InEventType);
	void DisableAllEvents(enum class ECGMapMusicEvent InEventType);
	void AlertInterval();
};

// 0x8 (0x230 - 0x228)
// Class ChernobylGame.CGMusicVolume
class ACGMusicVolume : public ATriggerBox
{
public:
	enum class ECGMapMusicEvent                  EventType;                                         // 0x228(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x229(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A02[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGMusicVolume* GetDefaultObj();

	void SetVolumeEnabled(bool bInEnabled);
	void OnOverlapStart(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	bool GetVolumeEnabled();
};

// 0x18 (0x238 - 0x220)
// Class ChernobylGame.CGNavTarget
class ACGNavTarget : public AActor
{
public:
	class APatrolActor*                          TargetPatrolActor;                                 // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetArbitraryActor;                              // 0x228(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A06[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGNavTarget* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class ChernobylGame.CGNoCrouchArea
class ACGNoCrouchArea : public AActor
{
public:

	static class UClass* StaticClass();
	static class ACGNoCrouchArea* GetDefaultObj();

};

// 0x0 (0x268 - 0x268)
// Class ChernobylGame.CGNoInputGhostStateCam
class ACGNoInputGhostStateCam : public ACGNoInputGhostState
{
public:

	static class UClass* StaticClass();
	static class ACGNoInputGhostStateCam* GetDefaultObj();

};

// 0x0 (0x268 - 0x268)
// Class ChernobylGame.CGNoInputGhostStatePauseMenu
class ACGNoInputGhostStatePauseMenu : public ACGNoInputGhostState
{
public:

	static class UClass* StaticClass();
	static class ACGNoInputGhostStatePauseMenu* GetDefaultObj();

};

// 0x0 (0x248 - 0x248)
// Class ChernobylGame.CGNoneState
class ACGNoneState : public ACGMovementState
{
public:

	static class UClass* StaticClass();
	static class ACGNoneState* GetDefaultObj();

};

// 0x508 (0x1450 - 0xF48)
// Class ChernobylGame.CGNPC
class ACGNPC : public ACGAICharacter
{
public:
	bool                                         bIsFrightened;                                     // 0xF48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFrightenedByCombatState;                          // 0xF49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A1B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGNPCProperties                      Properties;                                        // 0xF50(0x400)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UBoxComponent*                         ForceDialogueComponent4;                           // 0x1350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         MinimapDiscoverComponent4;                         // 0x1358(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         PassiveDialogueComponent;                          // 0x1360(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       PlayerDialoguePositionComponent;                   // 0x1368(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBillboardComponent*                   PlayerDialoguePositionVisualizationComponent;      // 0x1370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceDialogue;                                    // 0x1378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForcePosition;                                    // 0x1379(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A20[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   NPC_ID;                                            // 0x1380(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMap<enum class EPassiveDialogueSteps, class FName> PassiveDialogueStartingRows;                       // 0x1390(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UDataTable*                            PassiveDialogueDT;                                 // 0x13E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            PassiveDialogueMDT;                                // 0x13E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ACGNPC*>                        NPCTeam;                                           // 0x13F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDialogueComponent*                    PassiveDialogueCpp;                                // 0x1400(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNPCTeamLeader;                                  // 0x1408(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldWaitForHero;                                // 0x1409(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableSpeedUp;                                   // 0x140A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A25[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGNPCHeadTracingComponent*            NPCHeadTracingComponent;                           // 0x1410(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBuildingInteractionUpdate;                       // 0x1418(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FImportantQuestDef>            QuestsToProcess;                                   // 0x1428(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A26[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGNPC* GetDefaultObj();

	void UpdateStartingTransform_CPP();
	void UpdateNPCTeams();
	void ShowNPC();
	void SetFrightened(bool bInValue);
	void SetBuildingInteractionStats(struct FNPCBuildingInteractionStats& InStats);
	void OnHeroCombatLeft();
	void OnHeroCombatEntered();
	void ImportantQuestIntroduction();
	void HideNPC();
	struct FNPCBuildingInteractionStats GetBuildingInteractionStats();
	void FixStartingRotation_CPP();
	void BindCombatDelegatesPostInit();
};

// 0x28 (0xD8 - 0xB0)
// Class ChernobylGame.CGNPCHeadTracingComponent
class UCGNPCHeadTracingComponent : public UActorComponent
{
public:
	uint8                                        Pad_3A2E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHeroUpdate_HeadTracingRange;                     // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bNPCHeadTracingEnabled;                            // 0xC8(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A30[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGNPCHeadTracingComponent* GetDefaultObj();

	void SetNPCHeadTracingEnabled(bool bInNewEnabled);
	void NPCHeadTracingTick();
	bool GetHeroInTracing();
};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.CGOnScreenLog
class UCGOnScreenLog : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UCGOnScreenLog* GetDefaultObj();

	void OnAIDamageReceived(class AActor* InDamageCauser, class AActor* InDamageReceiver, struct FCGDamageEvent& InDamageEvent, float InDamage);
};

// 0x0 (0x250 - 0x250)
// Class ChernobylGame.CGPathFollowingComponent
class UCGPathFollowingComponent : public UPathFollowingComponent
{
public:

	static class UClass* StaticClass();
	static class UCGPathFollowingComponent* GetDefaultObj();

	float K2_GetRemainingPathCost();
	bool GetIsAIDecelerating();
};

// 0x8 (0x250 - 0x248)
// Class ChernobylGame.CGPDAState
class ACGPDAState : public ACGMovementState
{
public:
	class UObject*                               PdaWidget;                                         // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACGPDAState* GetDefaultObj();

	void ShowingAnimFinished(class UAnimMontage* InMontage, bool InInterrupted);
	void QueryFinished(enum class EState InInitialItemState, TSubclassOf<class ACGActiveItem> InInitialItemClass);
};

// 0x0 (0x220 - 0x220)
// Class ChernobylGame.CGPerceptionVolume
class ACGPerceptionVolume : public AActor
{
public:

	static class UClass* StaticClass();
	static class ACGPerceptionVolume* GetDefaultObj();

	int32 GetBPIndex();
};

// 0xE8 (0x658 - 0x570)
// Class ChernobylGame.CGPhotoModeCameraController
class ACGPhotoModeCameraController : public APlayerController
{
public:
	class APlayerController*                     OriginalController;                                // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayer*                               OriginalPlayer;                                    // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCGPhotoModeWidget*                    PhotoModeWidget;                                   // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        HiddenActorsDuringPhotoMode;                       // 0x588(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A52[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class ACGPhotoModePawn>        SpectatorClass;                                    // 0x5A0(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UCGPhotoModeWidget>      WidgetClass;                                       // 0x5C8(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PhotoModeAreaRadius;                               // 0x5F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinFOV;                                            // 0x5F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFOV;                                            // 0x5F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinViewRoll;                                       // 0x5FC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxViewRoll;                                       // 0x600(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SaturationMultiplier;                              // 0x604(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContrastMultiplier;                                // 0x608(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GammaMultiplier;                                   // 0x60C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GainMultiplier;                                    // 0x610(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VignetteIntensity;                                 // 0x614(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultVignetteIntensity;                          // 0x618(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnScreenshotTaken;                                 // 0x620(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UUserWidget*>                   UserInterfacesForScreenshot;                       // 0x630(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A58[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGPhotoModeCameraController* GetDefaultObj();

	void SetViewRoll(float NewViewRoll);
	void SetFOV(float NewFOV);
	void ScreenshotRequestProcessed();
	void ResetTransform();
	void RequestScreenshot();
	void OnPreUICreation();
	float GetViewRoll();
	class UCameraComponent* GetPawnCameraComponent();
	float GetFOV();
};

// 0x0 (0x2ED0 - 0x2ED0)
// Class ChernobylGame.CGPhotoModeCameraManager
class ACGPhotoModeCameraManager : public APlayerCameraManager
{
public:

	static class UClass* StaticClass();
	static class ACGPhotoModeCameraManager* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class ChernobylGame.CGPhotoModeMovementState
class ACGPhotoModeMovementState : public AActor
{
public:
	class ACGPhotoModePawn*                      OwnedPawn;                                         // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACGPhotoModeMovementState* GetDefaultObj();

	void Utility_AnyKeyboardKey_Pressed();
	void Utility_AnyGamepadKey_Pressed();
	void PC_Shortcuts_ZoomUp();
	void PC_Shortcuts_ZoomDown();
	void PC_Shortcuts_QuickUseScroll();
	void PC_Shortcuts_QuickUse8();
	void PC_Shortcuts_QuickUse7();
	void PC_Shortcuts_QuickUse6();
	void PC_Shortcuts_QuickUse5();
	void PC_Shortcuts_QuickUse4();
	void PC_Shortcuts_QuickUse3();
	void PC_Shortcuts_QuickUse2();
	void PC_Shortcuts_QuickUse1();
	void PC_Shortcuts_QuickUse();
	void PC_Shortcuts_Pause();
	void PC_Shortcuts_MoveUp();
	void PC_Shortcuts_MoveRight();
	void PC_Shortcuts_MoveLeft();
	void PC_Shortcuts_MoveDown();
	void PC_Shortcuts_Map();
	void PC_Shortcuts_Inventory();
	void PC_Shortcuts_Grab_Release();
	void PC_Shortcuts_Grab();
	void PC_Movement_Up();
	void PC_Movement_Sprint_Release();
	void PC_Movement_Sprint();
	void PC_Movement_Right_Release();
	void PC_Movement_Right();
	void PC_Movement_Left_Release();
	void PC_Movement_Left();
	void PC_Movement_Jump_Release();
	void PC_Movement_Jump();
	void PC_Movement_Down();
	void PC_Movement_Crouch_Release();
	void PC_Movement_Crouch();
	void PC_Interaction_Use_Release();
	void PC_Interaction_Use();
	void PC_Interaction_UI_Release();
	void PC_Interaction_UI();
	void PC_Interaction_Tabs_Right();
	void PC_Interaction_Tabs_Left();
	void PC_Interaction_Scrap();
	void PC_Interaction_Reload_Release();
	void PC_Interaction_Reload();
	void PC_Interaction_HideWeapon();
	void PC_Interaction_Flashlight();
	void PC_Interaction_BuildSystem();
	void PC_Interaction_Attack_Release();
	void PC_Interaction_Attack();
	void PC_Interaction_AlternativeAttack_Release();
	void PC_Interaction_AlternativeAttack();
	void PC_Interaction_Accept_Release();
	void PC_Interaction_Accept();
	void PC_CustomEscape();
	void PC_CustomBackSpace();
	void OnAnyKey();
	void Global_Movement_UpDown(float AxisValue);
	void Global_Movement_RightLeft(float AxisValue);
	void Global_Movement_Look_UpDown(float AxisValue);
	void Global_Movement_Look_RightLeft(float AxisValue);
	void Global_Movement_Lean(float AxisValue);
	void Console_Shortcuts_QuickUse4_Release();
	void Console_Shortcuts_QuickUse4();
	void Console_Shortcuts_QuickUse3();
	void Console_Shortcuts_QuickUse2_Release();
	void Console_Shortcuts_QuickUse2();
	void Console_Shortcuts_QuickUse1();
	void Console_Shortcuts_Pause();
	void Console_Movement_Up();
	void Console_Movement_Sprint_Release();
	void Console_Movement_Sprint();
	void Console_Movement_Rotate_Right(float AxisValue);
	void Console_Movement_Rotate_Left(float AxisValue);
	void Console_Movement_Right();
	void Console_Movement_Reloading_Release();
	void Console_Movement_Reloading();
	void Console_Movement_Left();
	void Console_Movement_Jump_Release();
	void Console_Movement_Jump();
	void Console_Movement_Down();
	void Console_Movement_Crouch_Release();
	void Console_Movement_Crouch();
	void Console_Interaction_UI_Release();
	void Console_Interaction_UI();
	void Console_Interaction_Tabs_Right();
	void Console_Interaction_Tabs_Left();
	void Console_Interaction_Scrap();
	void Console_Interaction_FlashLight();
	void Console_Interaction_Attack_Release();
	void Console_Interaction_Attack();
	void Console_Interaction_AlternativeAttack_Release();
	void Console_Interaction_AlternativeAttack();
};

// 0x10 (0x238 - 0x228)
// Class ChernobylGame.CGPhotoModeFreeCameraState
class ACGPhotoModeFreeCameraState : public ACGPhotoModeMovementState
{
public:
	uint8                                        Pad_3AB0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGPhotoModeWidget*                    Widget;                                            // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACGPhotoModeFreeCameraState* GetDefaultObj();

};

// 0x28 (0x2D0 - 0x2A8)
// Class ChernobylGame.CGPhotoModePawn
class ACGPhotoModePawn : public ASpectatorPawn
{
public:
	uint8                                        Pad_3AB9[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      CameraComponent;                                   // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACGPhotoModeMovementState*             InputState;                                        // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ACGPhotoModeCameraController*          PhotoModeController;                               // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACGPhotoModePawn* GetDefaultObj();

	void SetNewInputState(TSubclassOf<class ACGPhotoModeMovementState> NewState);
	class ACGPhotoModeMovementState* GetCurrentInputState();
};

// 0x10 (0x238 - 0x228)
// Class ChernobylGame.CGPhotoModeScreenshotState
class ACGPhotoModeScreenshotState : public ACGPhotoModeMovementState
{
public:
	TArray<struct FWidgetInfoCache>              WidgetInfoCache;                                   // 0x228(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACGPhotoModeScreenshotState* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class ChernobylGame.CGPhotoModeUIState
class ACGPhotoModeUIState : public ACGPhotoModeMovementState
{
public:
	class UCGPhotoModeWidget*                    Widget;                                            // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACGPhotoModeUIState* GetDefaultObj();

};

// 0x10 (0x270 - 0x260)
// Class ChernobylGame.CGPhotoModeWidget
class UCGPhotoModeWidget : public UUserWidget
{
public:
	class ACGPhotoModeCameraController*          PhotoModeController;                               // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhotoModeUIState                 State;                                             // 0x268(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AD6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGPhotoModeWidget* GetDefaultObj();

	void OnUIStateChange(enum class EPhotoModeUIState NewState);
	void OnEnterUIState();
	void InputUpDown(float Axis);
	void InputUp();
	void InputToggleUI();
	void InputToggleMode();
	void InputRightReleased();
	void InputRight();
	void InputResetSettings();
	void InputRequestScreenshot();
	void InputLeftRight(float Axis);
	void InputLeftReleased();
	void InputLeft();
	void InputDown();
	void InputBack();
};

// 0x78 (0xF8 - 0x80)
// Class ChernobylGame.CGPhysicalMaterial
class UCGPhysicalMaterial : public UPhysicalMaterial
{
public:
	class UCGPhysicalMaterial*                   ParentPhysicalMaterial;                            // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             FootStepSound;                                     // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             FootStepSoundCrouch;                               // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             FootStepSoundRun;                                  // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepLoudnessModifier;                              // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SoundIndex;                                        // 0xA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ImpactParticleSystem;                              // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipParentImpactParticleSystem;                   // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    ImpactDecalMaterial;                               // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipParentImpactDecalMaterial;                    // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpactDecalWidth;                                  // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactDecalHeight;                                 // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactDecalThickness;                              // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactDecalScaleMin;                               // 0xD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactDecalScaleMax;                               // 0xD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactDecalLifetime;                               // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactDecalFadeScreenSize;                         // 0xDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         ImpactSound;                                       // 0xE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldBlockMultitrace;                            // 0xE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldBlockMultitracePerception;                  // 0xE9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MultitraceDamageMultiplier;                        // 0xEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldIgnoreAfterFirstHit;                        // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionLimb                    CollisionLimbType;                                 // 0xF1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADC[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGPhysicalMaterial* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGPhysicsUtil
class UCGPhysicsUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCGPhysicsUtil* GetDefaultObj();

	TArray<enum class ECollisionChannel> GetAllCollisionChannels();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGPlayCustomAnimInterface
class ICGPlayCustomAnimInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICGPlayCustomAnimInterface* GetDefaultObj();

	void Set();
	void Init(class UAnimSequenceBase* InCustomAnim, float InStartPosition);
};

// 0x140 (0x3010 - 0x2ED0)
// Class ChernobylGame.CGPlayerCameraManager
class ACGPlayerCameraManager : public APlayerCameraManager
{
public:
	FMulticastInlineDelegateProperty_            OnCameraFadeInOutFinishPeak;                       // 0x2ED0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCameraFadeInOutFinish;                           // 0x2EE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF2[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HiddenActorsDuringPhotographyMode;                 // 0x2F08(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class UUserWidget*, enum class ESlateVisibility> HiddenWidgetsDuringMulticapture;                   // 0x2F18(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UCameraComponent*, float>         CameraPostProcessBlendCache;                       // 0x2F68(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPostProcessComponent*, float>    PostProcessComponentBlendCache;                    // 0x2FB8(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AF3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGPlayerCameraManager* GetDefaultObj();

	void StartCameraFadeInOut(float InFadeInTime, float InFadeOutTime);
	void SetCustomBlurModifier(bool bIsEnabled, float Modifier);
};

// 0x8 (0x578 - 0x570)
// Class ChernobylGame.CGPlayerController
class ACGPlayerController : public APlayerController
{
public:
	uint8                                        Pad_3AFA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGPlayerController* GetDefaultObj();

	void ReleaseAllKeys();
	void OnInputDeviceChanged(bool bIsGamepadInput);
};

// 0x28 (0x248 - 0x220)
// Class ChernobylGame.CGProjectile
class ACGProjectile : public AActor
{
public:
	struct FVector                               ProjectileDirection;                               // 0x220(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectileSpeed;                                   // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectileLifetime;                                // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProjectileSweepSteps;                              // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USphereComponent*                      ProjectileCollision;                               // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B07[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGProjectile* GetDefaultObj();

	void OnProjectileCollisionBeginOverlap(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bInFromSweep, struct FHitResult& InSweepResult);
};

// 0x8 (0x250 - 0x248)
// Class ChernobylGame.CGRaportState
class ACGRaportState : public ACGMovementState
{
public:
	uint8                                        Pad_3B0A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGRaportState* GetDefaultObj();

};

// 0x10 (0x268 - 0x258)
// Class ChernobylGame.CGResourceArea
class ACGResourceArea : public AVolume
{
public:
	enum class EAreaID                           AreaID;                                            // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBoxComponent*                         AreaBound;                                         // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACGResourceArea* GetDefaultObj();

};

// 0x40 (0x260 - 0x220)
// Class ChernobylGame.CGResourceDistributor
class ACGResourceDistributor : public AActor
{
public:
	float                                        Min;                                               // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       SceneComponent;                                    // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EResourceType                     ResourceType;                                      // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  EditorOnlyMesh;                                    // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         Collision;                                         // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SpawnedObject;                                     // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAreaID                           AreaID;                                            // 0x250(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B14[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGResourceDistributor* GetDefaultObj();

	void SetMultiThread(bool bTickAnywhere);
};

// 0x0 (0x220 - 0x220)
// Class ChernobylGame.CGResourceManager
class ACGResourceManager : public AActor
{
public:

	static class UClass* StaticClass();
	static class ACGResourceManager* GetDefaultObj();

	void Update();
};

// 0x0 (0x30 - 0x30)
// Class ChernobylGame.CGRichTextBlockImageDecorator
class UCGRichTextBlockImageDecorator : public URichTextBlockImageDecorator
{
public:

	static class UClass* StaticClass();
	static class UCGRichTextBlockImageDecorator* GetDefaultObj();

};

// 0x0 (0xE8 - 0xE8)
// Class ChernobylGame.CGSense_Hearing
class UCGSense_Hearing : public UAISense_Hearing
{
public:

	static class UClass* StaticClass();
	static class UCGSense_Hearing* GetDefaultObj();

};

// 0x0 (0x170 - 0x170)
// Class ChernobylGame.CGSense_Sight
class UCGSense_Sight : public UAISense_Sight
{
public:

	static class UClass* StaticClass();
	static class UCGSense_Sight* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class ChernobylGame.CGSenseConfig_Hearing
class UCGSenseConfig_Hearing : public UAISenseConfig_Hearing
{
public:

	static class UClass* StaticClass();
	static class UCGSenseConfig_Hearing* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class ChernobylGame.CGSenseConfig_Sight
class UCGSenseConfig_Sight : public UAISenseConfig_Sight
{
public:
	class FName                                  VisionSocketName;                                  // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FullFocusHalfAngle;                                // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCGSenseConfig_Sight* GetDefaultObj();

};

// 0x8D8 (0x1820 - 0xF48)
// Class ChernobylGame.CGShadow
class ACGShadow : public ACGAICharacter
{
public:
	class UAnimMontage*                          WallHidingMontage;                                 // 0xF48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          WallLeavingMontage;                                // 0xF50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          WallHidingHorizontalMontage;                       // 0xF58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          WallLeavingHorizontalMontage;                      // 0xF60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWallAnim_Finished;                               // 0xF68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWallAnimOut_Finished;                            // 0xF78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class APatrolActor*>                  PossiblePatrolActors;                              // 0xF88(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	TArray<class ACGShadowTeleportingAreaBase*>  PossibleAreas;                                     // 0xF98(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FShadowProperties                     Properties;                                        // 0xFA8(0x438)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	TArray<class ACGShadowTeleportBase*>         InitialOutdoorTeleports;                           // 0x13E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class ACGShadowTeleportBase*                 InitialOutdoorTeleport;                            // 0x13F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B48[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutdoorShadowProperties              OutdoorProperties;                                 // 0x1400(0x408)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class ACGShadowTeleportingAreaBase*          CurrentTeleportingArea;                            // 0x1808(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B4A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGShadow* GetDefaultObj();

	void WallTeleportOutAnim_Finish(class UAnimMontage* InAnimMontage, bool InWasInterrupted);
	void WallTeleportAnim_Finish(class UAnimMontage* InAnimMontage, bool InWasInterrupted);
	void ShadowUseTeleporter(class ACGShadowTeleportBase* InTargetTeleporter, float InDuration, class UAnimMontage* InMontageToPlay);
	void ShadowComeOutOfTeleport(class ACGShadowTeleportBase* InTargetTeleporter, class UAnimMontage* InMontageToPlay);
	void SetNewTeleportingArea(class ACGShadowTeleportingAreaBase* InNewArea);
	void SetDissolveDeathFunctionOverride();
	void OnDeathDissolve();
	TArray<class ACGShadowTeleportingAreaBase*> GetOverlappingTeleportAreas();
	class ACGShadowTeleportingAreaBase* GetCurrentTeleportingArea();
	TArray<class ACGShadowCombatZoneBase*> GetAssociatedCombatZones();
	void FindWarpProperties(bool bInShouldDebug);
	TArray<class ACGShadowTeleportBase*> FindTeleportersInRadius(class ACGShadowTeleportingAreaBase* InArea, const struct FVector& InTargetLocation, float InRadius, float InMaxPathLength);
	struct FTeleportationRoutePair FindPossibleTeleportConnection(const struct FVector& InTarget);
	class ACGShadowTeleportBase* FindClosestTeleporter(class ACGShadowTeleportingAreaBase* InArea, const struct FVector& InTargetLocation);
	void ClearAssociatedCombatZones();
	void BeginPlayFindTP(class ACGShadowTeleportingAreaBase* InInitialArea, TArray<class APatrolActor*>* InPatrolActors);
	void BeginPlayFindPatrol(TArray<class APatrolActor*>* InPatrolActors);
};

// 0x0 (0xC0 - 0xC0)
// Class ChernobylGame.CGShadowAggroComponent
class UCGShadowAggroComponent : public UCGMonsterAggroComponent
{
public:

	static class UClass* StaticClass();
	static class UCGShadowAggroComponent* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class ChernobylGame.CGShadowCombatZoneBase
class ACGShadowCombatZoneBase : public AActor
{
public:
	class UBoxComponent*                         CollisionBox;                                      // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACGShadowCombatZoneBase* GetDefaultObj();

	void OnShadowLeft(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex);
	void OnShadowEntered(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool InbFromSweep, struct FHitResult& InSweepResult);
};

// 0x50 (0x270 - 0x220)
// Class ChernobylGame.CGShadowTeleportBase
class ACGShadowTeleportBase : public AActor
{
public:
	int32                                        AreaIndex;                                         // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x224(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChernohostToSpawn;                                 // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       Root;                                              // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperSpriteComponent*                 InterpTarget;                                      // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperSpriteComponent*                 LeavingTarget;                                     // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EShadowTeleportType               TeleportType;                                      // 0x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTeleportEnabled;                                // 0x249(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AShadowPatrolActor*>            NextChernohostPatrols;                             // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ACGShadowTeleportBase*>         NextChernohostTeleports;                           // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACGShadowTeleportBase* GetDefaultObj();

	void ScheduleEnabled(float InTime, bool bInEnabled);
	void OnLeaving();
	void OnEntering();
	class ACGShadowTeleportBase* GetRandomValidTeleport();
	class ACGShadowTeleportBase* GetRandomNextTeleport();
	class AShadowPatrolActor* GetRandomNextPatrolPoint();
	class ACGShadowTeleportingAreaBase* GetOverlappingArea();
};

// 0x20 (0x240 - 0x220)
// Class ChernobylGame.CGShadowTeleportingAreaBase
class ACGShadowTeleportingAreaBase : public AActor
{
public:
	int32                                        AreaIndex;                                         // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBoxComponent*                         CollisionBox;                                      // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ACGShadowTeleportingAreaBase*>  AdjacentAreas;                                     // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACGShadowTeleportingAreaBase* GetDefaultObj();

	void GetRandomAreaFromAdjacent(struct FAdjacentAreaQueryResult* InOutAdjacentAreaQuery, bool InShouldPrioritiseHero, float InChanceToChooseHero);
	TArray<class ACGShadowTeleportBase*> GetAssociatedTeleports();
	TArray<class APatrolActor*> GetAssociatedPatrolActors();
};

// 0x0 (0x258 - 0x258)
// Class ChernobylGame.CGSlowModeState
class ACGSlowModeState : public ACGBaseCharacterMovement
{
public:

	static class UClass* StaticClass();
	static class ACGSlowModeState* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ChernobylGame.CGSmallTimer
class UCGSmallTimer : public UObject
{
public:
	uint8                                        Pad_3B8D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGSmallTimer* GetDefaultObj();

};

// 0x600 (0x16A0 - 0x10A0)
// Class ChernobylGame.CGSoldier
class ACGSoldier : public ACGVirtuaShooter
{
public:
	class FName                                  SquadName;                                         // 0x10A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoldierProperties                    Properties;                                        // 0x10A8(0x520)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class AActor*                                SpawnedInterrogationDialogueActor;                 // 0x15C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetComponent*                      VirtuaIndicator;                                   // 0x15D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanArrest;                                        // 0x15D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnShootDel;                                        // 0x15E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFrozenStateEnter;                                // 0x15F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFrozenStateExit;                                 // 0x1600(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVirtuaShot;                                      // 0x1610(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bCanBeStunned;                                     // 0x1620(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGSquadManager*                       SquadManager;                                      // 0x1628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3BC7[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGSoldier* GetDefaultObj();

	void VirtuaAimTickUpdate(float InAlpha);
	void UpdateMaxChaseTime();
	void StartInterrogationDialogue();
	class ACGProjectile* ShootTargetBullet(class ACGSoldier* InSoldier, float InAngleSpread, const struct FVector& InShootTarget, const struct FVector& InOptionalCustomStartLocation, int32 InProjectileSweepSteps, float InProjectileSpeed, bool bInOptionalCustomStart);
	void ShootTarget(class ACGSoldier* InSoldier, float InAngleSpread, const struct FVector& InShootTarget, bool* bOutTargetHit, const struct FVector& InOptionalCustomRayStartLocation, bool bInOptionalCustomRayStart, bool bInFakeShot, bool bInDebug);
	void Shoot(class ACGSoldier* InSoldier, float InAngleSpread, const struct FVector& InOptionalCustomRayStartLocation, bool* bOutTargetHit, bool bInOptionalCustomRayStart, bool bInFakeShot, bool bInDebug);
	void SetSquadManager(class ACGSquadManager* InNewSquad);
	void SetShooterCooldown(float InNewCooldown);
	void SetRandomShooterCooldownBetweenMinMax();
	void SetCurrentCoverType(enum class ECoverType InCoverType);
	void PlaySoundWithSubtitles(class USoundBase* InSoundToPlay);
	void OnShootEvent();
	void InterrogationDialogueBranch_Kill();
	void InterrogationDialogueBranch_Ignore();
	void InterrogationDialogueBranch_Attack();
	TArray<class ACGSoldier*> GetSquadMembers();
	class ACGSquadManager* GetSquadManager();
	float GetShooterCooldown();
	float GetRandomNewShooterCooldown();
	bool GetIsHuntFacingHero();
	class ACGSquadManager* GetInitializedSquadManager();
	enum class ECoverType GetCurrentCoverType();
	bool GetCoverTypeValidityPerSoldier(class ACGCover* InCover, class ACGCharacter* InTarget, enum class ECoverType InCoverType);
	struct FCGComfortableCombatRadiusQuery GetComfortableCombatRadiusQuery(struct FVector& InLocation);
	class ACGCover* FindCover();
};

// 0x8 (0x268 - 0x260)
// Class ChernobylGame.CGSprintState
class ACGSprintState : public ACGBaseCharacterMovementExtended
{
public:
	uint8                                        Pad_3BC8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGSprintState* GetDefaultObj();

};

// 0x208 (0x428 - 0x220)
// Class ChernobylGame.CGSquadManager
class ACGSquadManager : public AActor
{
public:
	FMulticastInlineDelegateProperty_            OnSquadMembersBackInPlace;                         // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShooterRemoved;                                  // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        ShootersNum;                                       // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSquadSightUpdate;                                // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSquadStateChanged;                               // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACGSoldier*>                    SquadMembers;                                      // 0x270(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class ACGSoldier*>                    Shooters;                                          // 0x280(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3BE7[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class ACGSoldier*, struct FVector>      PatrolExitLocations;                               // 0x2A0(0x50)(NativeAccessSpecifierPrivate)
	TMap<class ACGSoldier*, struct FRotator>     PatrolExitRotations;                               // 0x2F0(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_3BE9[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACGSoldier*>                    EngagedInOpenCombat;                               // 0x358(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3BEA[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACGSoldier*>                    AlertedSquadMembers;                               // 0x380(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class ACGSoldier*                            ArrestAttempter;                                   // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ACGAICharacter*>                RegisteredBodies;                                  // 0x398(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3BEB[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGSquadManager* GetDefaultObj();

	void UpdateSquadHeroPosition(struct FVector& InNewHeroPosition);
	void UpdateSquadHeroLastKnownPosFlag(float InMaxOffset);
	void UpdateMaxShootersCount();
	void TransitionSquad(class ACGSquadManager* InSquadToTransitionTo);
	void SquadCleanup();
	void SquadChatterTick();
	void SpreadTick();
	void SetSquadName(class FName InNewSquadName);
	void SetHeroOpenedFire(bool InOpenedFire);
	void SetChase(bool bInNewChase);
	void SetAddShooterCooldown(float InCooldown);
	void RemoveSquadMember(class ACGSoldier* InSquadMemberToRemove);
	void RemoveShooter(class ACGSoldier* InSoldier);
	void PatrolExitMember(class ACGSoldier* InSoldier);
	void PatrolExit();
	void PatrolBackInPlaceMember(class ACGSoldier* InSoldier);
	void OnSquadStateChangedImpl(enum class ESquadType InState);
	void MonsterCheck();
	void GiveOrder(struct FOrderQuery& InOrder);
	enum class ESquadType GetSquadType();
	bool GetSquadSeeHero();
	class FName GetSquadName();
	TArray<class ACGSoldier*> GetSquadMembers();
	struct FVector GetSquadHeroLastKnownPosition();
	bool GetSquadHasMemoryOfHero(enum class EPerceptionType InPerceptionMemoryType);
	float GetSquadChaseTimeElapsed();
	TArray<class ACGSoldier*> GetShooters();
	struct FRotator GetPatrolExitRotationMember(class ACGSoldier* InSoldier);
	struct FVector GetPatrolExitLocationMember(class ACGSoldier* InSoldier);
	struct FVector GetPatrolExitLocation();
	int32 GetMaxShooters();
	bool GetHeroOpenedFire();
	bool GetHeroNearLastKnownPosition();
	float GetForHowLongCantSeeHero();
	TArray<class ACGSoldier*> GetEngagedInOpenCombat();
	bool GetCanSquadSeeHeroElapsed();
	bool GetCanSquadSeeHero();
	bool GetCanAddNewVirtuaShooter(class ACGSoldier* InSoldier);
	TArray<class ACGSoldier*> GetAlertedSquadMembers();
	float GetAddShooterCooldown();
	void ForceSpreadTick();
	void EngageOpenCombat(class ACGSoldier* InSoldier);
	void DisengageOpenCombat(class ACGSoldier* InSoldier);
	void ClearSquad();
	bool AreMembersTogether(const struct FVector& InOriginOfCheck, float InCheckRadius);
	void AddSquadMember(class ACGSoldier* InNewSquadMember);
	bool AddShooter(class ACGSoldier* InSoldier);
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGStructs
class UCGStructs : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCGStructs* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class ChernobylGame.PropertyLinkSave
class UPropertyLinkSave : public USaveGame
{
public:
	struct FPropertyLinkData                     PropertyLinkData;                                  // 0x28(0xA0)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPropertyLinkSave* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.CGTimelinePayloadWidget
class UCGTimelinePayloadWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UCGTimelinePayloadWidget* GetDefaultObj();

	void RequestDestruct();
	void InitPayload(struct FDialogueTimelinePayloadData& Payload);
};

// 0x0 (0x258 - 0x258)
// Class ChernobylGame.CGTrainingPromptState
class ACGTrainingPromptState : public ACGBaseCharacterMovement
{
public:

	static class UClass* StaticClass();
	static class ACGTrainingPromptState* GetDefaultObj();

};

// 0x8 (0x250 - 0x248)
// Class ChernobylGame.CGTutorialState
class ACGTutorialState : public ACGMovementState
{
public:
	uint8                                        Pad_3BEC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGTutorialState* GetDefaultObj();

	void OnTutorialEnded();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CGUtilities
class UCGUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCGUtilities* GetDefaultObj();

	bool IsInPIE(class UObject* WorldCtx);
	bool IsInGame(class UObject* WorldCtx);
	bool IsInEditor(class UObject* WorldCtx);
	TArray<struct FTagContent> GetStringsByTag(const class FString& Text);
	class UClass* GetParentClass(class UClass* Child);
	class FName GetCurrentPersistantLevel(class UObject* Object);
	TArray<class UActorComponent*> GetAllComponentsFromActorByInterface(class AActor* Actor, class UClass* Interface);
	TArray<class FName> ArraySubtractionFName(const TArray<class FName>& ArrayA, const TArray<class FName>& ArrayB);
	TArray<class FName> ArrayIntersectionFName(const TArray<class FName>& ArrayA, const TArray<class FName>& ArrayB);
};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.CGVirtuaIndicator
class UCGVirtuaIndicator : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UCGVirtuaIndicator* GetDefaultObj();

	void Reverse(float InTimeElapsed);
	void Resume(float InTimeElapsed);
	void Reset();
	class UWidgetAnimation* GetVirtuaCrosshairAnimation();
	void Finish(bool bInSuccess, class ACGAICharacter* InCharacter);
};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.CGVirtuaIndicatorOffsight
class UCGVirtuaIndicatorOffsight : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UCGVirtuaIndicatorOffsight* GetDefaultObj();

	void Start(class AActor* Actor);
	void SetCustomVirtuaOffsightMaterial(TSoftObjectPtr<class UMaterialInstance>& CustomMaterial);
	void End();
};

// 0x20 (0xD0 - 0xB0)
// Class ChernobylGame.CGVisibilityModifierComponent
class UCGVisibilityModifierComponent : public UActorComponent
{
public:
	uint8                                        Pad_3C13[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CurrentlyOverlappedVisibilityModifiers;            // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C14[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCGVisibilityModifierComponent* GetDefaultObj();

	void OwnerEndOverlap(class AActor* InOverlappedActor, class AActor* InOtherActor);
	void OwnerBeginOverlap(class AActor* InOverlappedActor, class AActor* InOtherActor);
};

// 0x20 (0x240 - 0x220)
// Class ChernobylGame.CGVisibilityModifierVolume
class ACGVisibilityModifierVolume : public AActor
{
public:
	class UBoxComponent*                         Collision;                                         // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisibilityModifier;                                // 0x228(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisibilityRadiusCheckOverride;                     // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C17[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGVisibilityModifierVolume* GetDefaultObj();

};

// 0x18 (0x270 - 0x258)
// Class ChernobylGame.CGVisibilityModifierVolume2
class ACGVisibilityModifierVolume2 : public AVolume
{
public:
	uint8                                        Pad_3C1C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGVisibilityModifierVolume2* GetDefaultObj();

};

// 0x8 (0x268 - 0x260)
// Class ChernobylGame.CGWalkState
class ACGWalkState : public ACGBaseCharacterMovementExtended
{
public:
	uint8                                        Pad_3C1E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGWalkState* GetDefaultObj();

};

// 0x0 (0x268 - 0x268)
// Class ChernobylGame.CGWalkNoInputState
class ACGWalkNoInputState : public ACGWalkState
{
public:

	static class UClass* StaticClass();
	static class ACGWalkNoInputState* GetDefaultObj();

};

// 0x0 (0x268 - 0x268)
// Class ChernobylGame.CGWalkNoInputStateInteractable
class ACGWalkNoInputStateInteractable : public ACGWalkNoInputState
{
public:

	static class UClass* StaticClass();
	static class ACGWalkNoInputStateInteractable* GetDefaultObj();

};

// 0x0 (0x268 - 0x268)
// Class ChernobylGame.CGWalkSlowState
class ACGWalkSlowState : public ACGWalkState
{
public:

	static class UClass* StaticClass();
	static class ACGWalkSlowState* GetDefaultObj();

};

// 0x2C0 (0x730 - 0x470)
// Class ChernobylGame.CGWeapon
class ACGWeapon : public ACGActiveItem
{
public:
	int32                                        ClipCurrentSize;                                   // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClipMaxSize;                                       // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseHipSpread;                                     // 0x478(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay;                                             // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseShotDistance;                                  // 0x480(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseRecoil;                                        // 0x484(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInCooldown;                                     // 0x488(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponState                      WeaponState;                                       // 0x489(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponState                      PreviousWeaponState;                               // 0x48A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C61[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PrimaryAmmo;                                       // 0x48C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SecondaryAmmo;                                     // 0x494(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurrentlyUsedAmmo;                                 // 0x49C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseDamage;                                        // 0x4A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage_Min;                                        // 0x4A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage_Max;                                        // 0x4AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Damage_UI;                                         // 0x4B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Ammo_UI;                                           // 0x4B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Recoil_UI;                                         // 0x4B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Range_UI;                                          // 0x4BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Sway_UI;                                           // 0x4C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0x4C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugTrace;                                       // 0x4C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C62[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PrimaryClipCurrentSize;                            // 0x4CC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryClipCurrentSize;                          // 0x4D0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimFOV;                                            // 0x4D4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwayScale;                                         // 0x4D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                WeaponMesh;                                        // 0x4E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  ATTACHMENT_SCOPE;                                  // 0x4E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  ATTACHMENT_HANDLE;                                 // 0x4F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  ATTACHMENT_BARREL;                                 // 0x4F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  ATTACHMENT_TRIGGER;                                // 0x500(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  ATTACHMENT_MAGAZINE;                               // 0x508(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGScopeProperties                    AttachmentProperties_Scope;                        // 0x510(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCGHandleProperties                   AttachmentProperties_Handle;                       // 0x560(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCGBarrelProperties                   AttachmentProperties_Barrel;                       // 0x5B0(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCGTriggerProperties                  AttachmentProperties_Trigger;                      // 0x5F8(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCGMagazineProperties                 AttachmentProperties_Magazine;                     // 0x640(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USceneComponent*                       WeaponRoot;                                        // 0x690(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    UpgradeMaterial;                                   // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UpgradeMaterialCanCraftScalarName;                 // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              UpgradeMaterialDynamicInstance;                    // 0x6A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUpgradeType                      WeaponUpgradeType;                                 // 0x6B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnReloadStarted;                                   // 0x6B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReloadFinished;                                  // 0x6C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C65[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAmmoUsed;                                        // 0x6F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bCanGib;                                           // 0x708(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresAmmo;                                     // 0x709(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomClipChecks;                                 // 0x70A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomAimFunctionality;                           // 0x70B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C66[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DurabilityDecreasePerShot;                         // 0x720(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C67[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACGWeapon* GetDefaultObj();

	bool UseBullet();
	void UpdateSkin();
	void UpdateMeshWithMaterials(const TArray<class UPrimitiveComponent*>& MeshComponents, const TArray<TSoftObjectPtr<class UMaterialInterface>>& Materials);
	void SpawnBulletShell(class UParticleSystem* InEmitterTemplate, struct FTransform& InSpawnTransform, struct FVector& InVelocity, struct FVector& InRadialVelocity, float InLifeTime);
	enum class EWeaponState SetNewWeaponState(enum class EWeaponState InNewWeaponState);
	void SetMaterialsDisplay(class UStaticMeshComponent* MeshComp, class UStaticMesh* MeshMesh, bool bCanBeCrafted);
	void SetClipCurrentSize(int32 Amount);
	void ReloadFinished(enum class EWeaponState InPostReloadState, bool bShouldBroadcast, bool bInNoSwap);
	void ReloadAmmoAmount();
	void OnUpdateAttachmentSkin(class FName UpgradeID);
	void OnUnAim();
	void OnTriggerUpgrade(struct FCGTriggerProperties& InNewTriggerProperties);
	void OnShellCollision(class FName InEventName, float InEmitterTime, int32 InParticleTime, const struct FVector& InLocation, const struct FVector& InVelocity, const struct FVector& InDirection, const struct FVector& InNormal, class FName InBoneName, class UPhysicalMaterial* InPhysMat);
	void OnScopeUpgrade(struct FCGScopeProperties& InNewScopeProperties);
	void OnReloadFailed();
	void OnReload();
	void OnMagazineUpgrade(struct FCGMagazineProperties& InNewMagazineProperties);
	void OnLocalMeleeFinished();
	void OnLocalMelee();
	void OnHandleUpgrade(struct FCGHandleProperties& InNewHandleProperties);
	void OnForceReloadFinished(bool bInNoSwap);
	void OnEmptyAmmo();
	void OnCooldownElapsed();
	void OnBrokenWeaponUse();
	void OnBarrelUpgrade(struct FCGBarrelProperties& InNewBarrelProperties);
	void OnAmmoSwitchForceFinished();
	void OnAmmoSwitchFinished();
	void OnAmmoSwitchFailed();
	void OnAmmoSwitch();
	void OnAim();
	struct FAttachmentSkinInfo K2_GetAttachmentSkinInfo(class FName UpgradeID, bool* OutIsValid);
	class FName GetOtherAmmoType();
	bool GetIsWeaponBroken();
	TArray<TSoftObjectPtr<class UMaterialInterface>> GetDefaultMeshMaterials();
	int32 GetClipMaxSizeWithUpgrade();
	int32 GetAdditionalBulletCost();
	void ForceReload();
	void ForceOnCooldownElapsed();
	void ForceInitMagazine();
	struct FCGAttachmentProperties FindAttachmentProperties(bool* bOutFound, class UDataTable* InDataTable, class FName InUpgradeName);
	void DecreaseDurability();
	void ClampCurrentClipToInventory();
	struct FRotator CalculateRecoil();
	TArray<class AActor*> CalculateHipShot(bool InShouldDebugTrace);
	TArray<struct FCGShootResult> CalculateAimedShot(bool InShouldDebugTrace, TArray<struct FCGMultitraceResult>* OutMultitraceResults, bool bInShouldIgnoreCollisions);
	void AmmoSwitchInternal();
};

// 0x10 (0xC0 - 0xB0)
// Class ChernobylGame.Crafting
class UCrafting : public UActorComponent
{
public:
	class UDataTable*                            CraftingRecipes;                                   // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C77[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrafting* GetDefaultObj();

	void TryCraftItemFromAnyRecipe(class FName ItemType, bool* OutSuccess);
	void LearnRecipe(class FName RecipeID);
	void ForgetRecipe(class FName RecipeID, bool* OutSomethingDeleted);
	void FindKnownRecipeForItem(class FName ItemType, bool* OutSuccess, class FName* OutRecipeID);
	void FindAllKnownRecipesForItem(class FName ItemType, TArray<class FName>* OutRecipeIDs);
	void Craft(class FName FromRecipe);
	enum class ECraftingResult CanCraftFromRecipe(class FName RecipeID);
	enum class ECraftingResult CanCraftFromAnyRecipe(class FName ItemType);
	float ApplyPerks(float Amount);
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CraftingInput
class ICraftingInput : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICraftingInput* GetDefaultObj();

	void InputUp();
	void InputRight();
	void InputLeft();
	void InputFaceRight();
	void InputFaceDownRelease();
	void InputFaceDown();
	void InputDPadUp();
	void InputDPadRight();
	void InputDPadLeft();
	void InputDPadDown();
	void InputDown();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CraftingNewInput
class ICraftingNewInput : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICraftingNewInput* GetDefaultObj();

	void RightTab();
	void RightItem();
	void LeftTab();
	void LeftItem();
	void InputAnyKeyboard();
	void InputAnyGamepad();
	void Craft();
	void Back();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CraftingUtilityFunctionsLibrary
class UCraftingUtilityFunctionsLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCraftingUtilityFunctionsLibrary* GetDefaultObj();

	void ParseTextIntoFragmentsAndParameters(const class FString& InText, TArray<struct FTextWithImagePart>* OutData);
};

// 0xB0 (0x2D0 - 0x220)
// Class ChernobylGame.CristalsGenerator
class ACristalsGenerator : public AActor
{
public:
	enum class EPositionCrystalProbability       PositionProbability;                               // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScaleCrystalProbability          ScaleProbability;                                  // 0x221(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimationsDirection              AnimationsDirection;                               // 0x222(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMesh*>                   PotentialMeshs;                                    // 0x228(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationsVelocity;                                // 0x23C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxScaleUp;                                        // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxScaleDown;                                      // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MinRotation;                                       // 0x248(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxRotation;                                       // 0x254(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Extend;                                            // 0x260(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionEnabled                 CollisionType;                                     // 0x26C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7B[0x5B];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UShapeComponent*                       ShapeComponent;                                    // 0x2C8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACristalsGenerator* GetDefaultObj();

	void Show(enum class EAnimationsDirection Direction);
	void Hide(enum class EAnimationsDirection Direction);
};

// 0x2090 (0x2288 - 0x1F8)
// Class ChernobylGame.CustomGameInstance
class UCustomGameInstance : public UGameInstance
{
public:
	uint8                                        Pad_3D88[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SaveVersion;                                       // 0x200(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            PlayerInitialized;                                 // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerHasBeenSpotted;                              // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         InvertMouseY;                                      // 0x228(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InvertMouseX;                                      // 0x229(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Sensitivity;                                       // 0x22C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SensitivityADS;                                    // 0x230(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsNewGamePlus;                                     // 0x234(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipTutorials;                                     // 0x235(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowSubtitles;                                     // 0x236(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DaysToPlay;                                        // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelDefaultMaxTimeInSeconds;                      // 0x23C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StormDefaultMaxTimeInSeconds;                      // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelCurrentDurationUntilStormInSeconds;           // 0x244(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LevelCurrentBlackStalkerKilled;                    // 0x248(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FreeMode;                                          // 0x249(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FreeModeEvents;                                    // 0x24A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FreeModeAllWeapons;                                // 0x24B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FreeModeAllPerks;                                  // 0x24C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PDADisabled;                                       // 0x24D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GlobalDialogueDelay;                               // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDialogueDuration;                           // 0x254(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>             CustomHandsAnimInstance;                           // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>             ABP_PlayCustomAnim;                                // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DifficultyModifiersDT;                             // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EDifficultyModifierType, class FName> DifficultyModifiersTypeName;                       // 0x270(0x50)(Edit, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CombatDifficultyChanged;                           // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	int32                                        TimelineTutorialDeathCount;                        // 0x2D0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldShowTimelineDeathTutorial;                  // 0x2D4(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D91[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            AsyncMapReadyDelegate;                             // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bAsyncMapIsReady;                                  // 0x2F0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AlreadySeenNPC;                                    // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FString, bool>                    DialogueSystemFlags;                               // 0x308(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   DialogueSystemCounters;                            // 0x358(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TSubclassOf<class UDialogueWidget>           DialoguePlayerOptionsWidgetClass;                  // 0x3A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            ChattersDt;                                        // 0x3B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAkAudioEvent*>                 DefaultPlaceholderVO;                              // 0x3B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBuildEntityInfo>              CurrentBuildEntities;                              // 0x3C8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, struct FBuildEntityInfoContainer> LevelCurrentBuildEntities;                         // 0x3D8(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     BuildSystemGlobalStats;                            // 0x428(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     WeaponSystemGlobalStats;                           // 0x478(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	class UDataTable*                            UpgradeSystemDB;                                   // 0x4C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            BuildSystemDB;                                     // 0x4D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            GlobalStatsDB;                                     // 0x4D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          TiersUnlockedFromStart;                            // 0x4E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FSavedNameArray>    UnlockedJournalRecipes;                            // 0x4F0(0x50)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BuildSystemGlobalStatsRecalculatedDelegate;        // 0x540(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        BuildSystemDistanceFromCamera;                     // 0x550(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            BuildSystemCatalogDB;                              // 0x558(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            BuildSystemCatalogsInfoDB;                         // 0x560(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            BuildSystemPathDB;                                 // 0x568(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            BuildSystemStatsDB;                                // 0x570(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           BuildSystemStartingCatalogs;                       // 0x578(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        BuildSystemCriticalPowerThreshold;                 // 0x588(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BuildSystemWarningPowerThreshold;                  // 0x58C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, uint32>                    AlreadyBuldSystemEntities;                         // 0x590(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	TArray<class FName>                          AvaiableBuldSystemEntities;                        // 0x5E0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D97[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          BuildSystemCurrentlyUnlockedTiers;                 // 0x600(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	int32                                        CurrentTierBuildSystem;                            // 0x610(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentPowerInUse;                                 // 0x614(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentPowersLimit;                                // 0x618(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D98[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            AchievementsInfoDT;                                // 0x620(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<enum class EAchievementType, float>     AchievementCompletion;                             // 0x628(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	bool                                         LastInputFromGamepad;                              // 0x678(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UUserWidget>               ActorDebugWidget;                                  // 0x680(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSightDebug;                                       // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResourceSpawnDebug;                               // 0x689(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPatchPreviewTextEnabled;                          // 0x68A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugClimb;                                       // 0x68B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEventMap                         CurrentMap;                                        // 0x68C(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBaseBuff*>                     Buffs;                                             // 0x690(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<enum class EStaticBuff>               StaticBuffs;                                       // 0x6A0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                         bIsGlobalExperienceGainDisabled;                   // 0x6B0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           ItemDeathPenaltyTiers;                             // 0x6B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     LostItems;                                         // 0x6C8(0x50)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	class FName                                  SaveGameSlot;                                      // 0x718(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GateOfMadnessSaveGameSlot;                         // 0x720(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SaveGameMetadataPostfix;                           // 0x728(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAsyncSaveInProgress;                            // 0x730(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAsyncSaveCompletedDelegate;                      // 0x738(0x10)(ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)
	TMap<enum class ECustomSaveType, struct FCustomSaveInfo> CustomSaveInfos;                                   // 0x748(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UCustomSaveGame*                       ChernobylSaveGame;                                 // 0x798(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bContinueFromSave;                                 // 0x7A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA5[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Playtime;                                          // 0x7AC(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuickSaveMode                    QuickSaveMode;                                     // 0x7B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLoadGameFinishedDelegate;                        // 0x7B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class FName>                          MainLevelsToPersistThroughTimeline;                // 0x7C8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsScreenshotOnSaveEnabled;                        // 0x7D8(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USaveGame*>                     SavesRef;                                          // 0x7E0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     LastResourcesSpawnPerMap;                          // 0x7F8(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, struct FSoldierSpawnInfo>  SoldierSpawnInfo;                                  // 0x848(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, struct FTimelinePersistentInventory> TimelinePersistentInventoryStorage;                // 0x898(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      TimelinePersistentBooleans;                        // 0x8E8(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     TimelinePersistentFloats;                          // 0x938(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	class UDataTable*                            EventsDT;                                          // 0x988(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            PresentationEventsDT;                              // 0x990(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            ExtendEventsDT;                                    // 0x998(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         MaxEventsPerMap;                                   // 0x9A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         MaxQuestsGlobal;                                   // 0x9A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         MaxEventsPerDay;                                   // 0x9A2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          FinishedEvents;                                    // 0x9A8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventCategory, int32>       CategoryCoverageLimits;                            // 0x9B8(0x50)(Edit, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>               EventStatus;                                       // 0xA08(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FInnerEvent>                   ReportsHistory;                                    // 0xA58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        DebugSoldierEventLevel;                            // 0xA68(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugMonsterEventLevel;                            // 0xA6C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CustomSoldierEventLevel;                           // 0xA70(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCustomSoldierEventLevelEnabled;                 // 0xA74(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SoldierEventLevelLastUpdateDay;                    // 0xA78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EDifficultyValue, int32>     SoldiersEventStartingLevel;                        // 0xA80(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EDifficultyValue, int32>     MonsterEventStartingLevel;                         // 0xAD0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UDataTable*                            SoldierEventLevelsDT;                              // 0xB20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            MonsterEventLevelsDT;                              // 0xB28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FullDeathsCount;                                   // 0xB30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAC[0xF4];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EQuestCategoryType>        QuestsDisabledByCategoryForNextUpdate;             // 0xC28(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	class UDataTable*                            CrisisDT;                                          // 0xC38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         DaysToMainQuests;                                  // 0xC40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         CurrentDaysToMainQuests;                           // 0xC41(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DAD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuestDifficultySoldierMultiplier;                  // 0xC44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuestDifficultyMonsterMultiplier;                  // 0xC48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SoftPauseBetweenStoryQuests;                       // 0xC4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FPotentialQuest4Map> PotentialQuests;                                   // 0xC50(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FCooldownQuest4Map> CooldownQuests;                                    // 0xCA0(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FActiveQuestInfo> ActiveQuests;                                      // 0xCF0(0x50)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, class FName>      LastActiveQuest;                                   // 0xD40(0x50)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FActiveQuestInfo> PreNewGamePlusQuests;                              // 0xD90(0x50)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FActiveQuestDifficulties> ActiveQuestsDifficulties;                          // 0xDE0(0x50)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	bool                                         bWasInitialized;                                   // 0xE30(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          FinishedQuests;                                    // 0xE38(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FMissionReportRequiredInformation> FinishedQuestsV2;                                  // 0xE48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FMissionReportRequiredInformation> FinishedQuestsV2Igor;                              // 0xE58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<class FName>                          SuccededQuests;                                    // 0xE68(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	struct FLastQuestsInfo                       LastFinishedQuestInfo;                             // 0xE78(0x28)(SaveGame, NativeAccessSpecifierPublic)
	float                                        QuestsRubberBandingValue;                          // 0xEA0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, class UDataTable*> QuestsDB;                                          // 0xEA8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UDataTable*                            QuestsItemsDB;                                     // 0xEF8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            QuestsTextsDB;                                     // 0xF00(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DescriptionDB;                                     // 0xF08(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            PermamentDataDB;                                   // 0xF10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            AllQuestsDB;                                       // 0xF18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ECategoryForEvent, int32>    PsycheModifierPerFinishedEvent;                    // 0xF20(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FDelayedFinishedEvents>        DelayedEvents;                                     // 0xF70(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, class UDataTable*> EventsDB;                                          // 0xF80(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, class UDataTable*> SlotsDB;                                           // 0xFD0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FPotentialEvent4Map> PotentialNormalEventsV2;                           // 0x1020(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FHorrorPotentialEvent4Map> PotentialHorrorEventsV2;                           // 0x1070(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FPeriodicEvent4Map> PotentialPeriodicEventsV2;                         // 0x10C0(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FCooldownEvent4Map> CooldownEventsV2;                                  // 0x1110(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FActiveEvent4Map> ActiveNormalEventsV2;                              // 0x1160(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FActiveEvent4Map> ActiveHorrorEventsV2;                              // 0x11B0(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FActiveEvent4Map> ActivePeriodicEventsV2;                            // 0x1200(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FSavedNameArray> FinishedNonPeriodicEventsV2;                       // 0x1250(0x50)(SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB3[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FPermanentLevelInfo> CurrentPermanentLevels;                            // 0x12F0(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FCategoriesInfo> CategoriesInfo;                                    // 0x1340(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	struct FCategoriesInfo                       CategoriesChangeInfo;                              // 0x1390(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        CategoriesChangeDelay;                             // 0x13E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentCategoriesChangeDelay;                      // 0x13E4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FCategoriesCurrentCount> CategoriesCurrentCountForMap;                      // 0x13E8(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FBlockedSlots> BlockedSlotsForMaps;                               // 0x1438(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FMissionReportRequiredInformation> MissionReportInfo;                                 // 0x1488(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, class UDataTable*> MoodsForLevels;                                    // 0x14A0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      PermamentQuestData;                                // 0x14F0(0x50)(SaveGame, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PermanentDataChangedDelegate;                      // 0x1540(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDataTable*                            GameCharactersDB;                                  // 0x1550(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            ActorsInfoDB;                                      // 0x1558(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB7[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          GameCharactersEnabled;                             // 0x15B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int32                                        CurrentDayEventSystem;                             // 0x15C0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastNewGamePlusStartedOnDay;                       // 0x15C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EventSystemDebugModeEnabled;                       // 0x15C8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          EventSystemDebugEventsToLoad;                      // 0x15D0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SomeoneStartsBeingHungryDelegate;                  // 0x15E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SomeoneStopsBeingHungryDelegate;                   // 0x15F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     ItemsTemporalStorageFeeding;                       // 0x1600(0x50)(SaveGame, NativeAccessSpecifierPublic)
	int32                                        BaseCompanionsNumber;                              // 0x1650(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentModifierForCompanionsNumber;                // 0x1654(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CompanionStatBase;                                 // 0x1658(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CompanionStatMax;                                  // 0x165C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MissonStatBonusForFullyLoyalCompanions;            // 0x1660(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBB[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CompanionDT;                                       // 0x1698(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            CompanionBuffsDT;                                  // 0x16A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FCompanionDecisions> CompanionsDecisions;                               // 0x16A8(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, struct FCompanionEquipment> CompanionsEquipment;                               // 0x16F8(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	class UDataTable*                            CompanionsEquipmentDT;                             // 0x1748(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCompanionLoyaltyRevertInfo>   CompanionLoyaltyRevertInfo;                        // 0x1750(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                         OverrideCompanionLoyaltyRevert;                    // 0x1760(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConflict>                     CompanionConflicts;                                // 0x1768(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CompanionEquipmentChanged;                         // 0x1778(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         DebugForceConflict;                                // 0x1788(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             InventorySize;                                     // 0x178C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             StorageSize;                                       // 0x1794(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InventoryMaxSize;                                  // 0x179C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastStorageID;                                     // 0x17A4(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     KnownRecipesMap;                                   // 0x17A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EUpgradeType, class UDataTable*> UpgradesDB;                                        // 0x17F8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UDataTable*                            UpgradeCategoriesDB;                               // 0x1848(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EUpgradeType, struct FUnlockedUpgrades> UpgradeUnlocked;                                   // 0x1850(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EUpgradeType, struct FUnlockedUpgrades> UpgradeCrafted;                                    // 0x18A0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	TArray<class FName>                          UnlockedPerks;                                     // 0x18F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	TArray<class FName>                          DefaultPerks;                                      // 0x1900(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          DiscoveredNoteKeys;                                // 0x1910(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	class UDataTable*                            DT_Perks;                                          // 0x1920(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LevelUpDelegate;                                   // 0x1928(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        InfluenceMax;                                      // 0x1938(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GateOfMadnessExperiencePerLevel;                   // 0x193C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InfluenceExp;                                      // 0x1940(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         PlayerDiedOnLevel;                                 // 0x1944(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EDayPart                          CurrentDayPart;                                    // 0x1945(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FOuterEvent>        AllEvents;                                         // 0x1948(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	TArray<class FName>                          PotentialEvents;                                   // 0x1998(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	TArray<struct FEventDeactivationTimeStamp>   LastWeekEvents;                                    // 0x19A8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	TArray<struct FInnerEvent>                   ActiveEvents;                                      // 0x19B8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FEventInfoToUpdate> EventsToUpdate;                                    // 0x19C8(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	TArray<enum class EEventMap>                 EnabledMaps;                                       // 0x1A18(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                         bShouldShowHeistTutorialInBase;                    // 0x1A28(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentDay;                                        // 0x1A2C(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EventsOnMapCount[0x12];                            // 0x1A30(0x48)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CategoryPoints[0x17];                              // 0x1A78(0x5C)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               InventoryItems;                                    // 0x1AD8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	TArray<struct FInventoryEntry>               StorageItems;                                      // 0x1AE8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	class FName                                  QuickMenu[0x8];                                    // 0x1AF8(0x40)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, float>                     WeaponsDurability;                                 // 0x1B38(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnWeaponDurabilityChanged;                         // 0x1B90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TArray<struct FCompanionEntry>               CurrentCompanions;                                 // 0x1BA0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FCompanionEntry>    LastCompanionData;                                 // 0x1BB0(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	TArray<struct FCompanionWithPrize>           PriceForCompanionsFromLastDay;                     // 0x1C00(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentHP;                                         // 0x1C14(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentHealthMultiplier;                           // 0x1C18(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentRadiation;                                  // 0x1C1C(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentRadiationMultiplier;                        // 0x1C20(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsHealthComponentInitializedOnOldSaves;            // 0x1C24(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                HPStages;                                          // 0x1C28(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	TArray<float>                                RadStages;                                         // 0x1C38(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	bool                                         bIsPsycheDisabled;                                 // 0x1C48(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EHealthPhase, float>         RadiationLimits;                                   // 0x1C50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        CurrentMadness;                                    // 0x1CA0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentArmorValue;                                 // 0x1CA4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EquippedArmorInfoName;                             // 0x1CA8(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<enum class EEventMap, struct FResourcesForMap> ResourcesToDirstributeOverLevel;                   // 0x1CB0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	TMap<enum class EEventMap, struct FResourcesForMap> MaxResourcesToDirstributeOverLevel;                // 0x1D00(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	float                                        ResourcesIncreaseRate;                             // 0x1D50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EResourceType, float>        MiniSotrageResources;                              // 0x1D58(0x50)(SaveGame, NativeAccessSpecifierPublic)
	float                                        FakePostTransitionStreamingTime;                   // 0x1DA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PostTransitionLevel;                               // 0x1DB0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPostTransitionLevelReady;                       // 0x1DB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ETransitionalMode                 TransitionalMode;                                  // 0x1DB9(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfSpaceTimeDistributors;                     // 0x1DBC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfQWaveDevices;                              // 0x1DC0(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPortalGeneratorJumpscare;                        // 0x1DC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bPortalGeneratorJumpscare;                         // 0x1DD8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GasDamage;                                         // 0x1DDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GasDamageDelay;                                    // 0x1DE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterUsagePerSecond;                              // 0x1DE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GasMaxSpeedModifier;                               // 0x1DE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GasFilterCurrentRemovePrediction;                  // 0x1DEC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SaveGameGlobalMetadataSlot;                        // 0x1DF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomSaveGameGlobalMetadata*         SaveGameGlobalMetadataData;                        // 0x1E08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasGameFinishedAtLeastOnce;                       // 0x1E10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class EDifficultyType>             GateOfMadnessDifficulties;                         // 0x1E18(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	int32                                        GateOfMadnessWakeupRadiation;                      // 0x1E68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastDayGateOfMadnessRadiationApplied;              // 0x1E6C(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSaveBackupForGateOfMadness;                  // 0x1E70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGateOfMadnessDisableDifficultyCheckInMenu;        // 0x1E71(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGDLCRegistry*                        DLCRegistry;                                       // 0x1E78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                            DLCInfoDT;                                         // 0x1E80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            MiscellaneousTextsDB;                              // 0x1E88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            NoisesDB;                                          // 0x1E90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               SubtitleManagerClass;                              // 0x1E98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ResourceDistributorPickupClass;                    // 0x1EA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            AudioDeviceDT;                                     // 0x1EA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGFakeHero>               FakeHeroClass;                                     // 0x1EB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGMusicManager>           MusicManager;                                      // 0x1EB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ECGMap>                    MusicEnabledMaps;                                  // 0x1EC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GoreSettingsChanged;                               // 0x1ED0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUserInterfaceSettingsChanged;                    // 0x1EE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                         bIntroLogoAlreadyShown;                            // 0x1EF0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCultureChangedDelegate;                          // 0x1EF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EEventMap>                 DisabledFallDamageOnLevels;                        // 0x1F10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsConsoleMainMenuDebugEnabled;                    // 0x1F20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            KeyNameRedirectionDT;                              // 0x1F28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DLCWeaponSkinsDT;                                  // 0x1F30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, enum class EWeaponSkinType> ItemIdToWeaponType;                                // 0x1F38(0x50)(Edit, NativeAccessSpecifierPublic)
	class UDataTable*                            DLCGlobalSkinsDT;                                  // 0x1F88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGlobalSkinUpdated;                               // 0x1F90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFSRStateUpdated;                                 // 0x1FA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDataTable*                            CharacterSkinInfoDT;                               // 0x1FB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            CharacterStaticMeshSkinInfoDT;                     // 0x1FB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD5[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftObjectPtr<class AActor>, struct FCharacterSkinMaterialInfo> DefaultSkinCache;                                  // 0x2060(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD6[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            DisplacementInfoDT;                                // 0x2100(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPreVRMapData                         PreVRMapData;                                      // 0x2108(0xD8)(SaveGame, NativeAccessSpecifierPublic)
	bool                                         bRequiresFractalVRFix;                             // 0x21E0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsExperimentalStreamingTimesEnabled;              // 0x21E1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsExperimentalLoadScreenEnabled;                  // 0x21E2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPropertyLinkData                     PropertyLinkData;                                  // 0x21E8(0xA0)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCustomGameInstance* GetDefaultObj();

	void WriteAchievement(enum class EAchievementType AchievementType, float Progress);
	void WorldLoaded();
	void ValidateArmor_CPP(bool bShowMessage);
	float UseFoodFromTemporalStorage(float Amount);
	bool UseCustomSaves(const class FString& Day);
	int32 UpgradeSystemGetGlobalStatValue(class FName Name);
	struct FUpgradeStat UpgradeSystemGetGlobalStatInfo(class FName Name);
	bool UpdateSkinForSkeletalMeshComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
	void UpdateRelevantDifficultySettingsToMatchSave();
	void UpdateRaytracingParams();
	void UpdateMaterialSharpen_CPP();
	void UpdateFSRState();
	void UpdateFoodSystem();
	void UpdateDLSSSettings();
	void UpdateDisplacementFromSetting();
	void UpdateCompanions();
	void UnlockSaveAndLoadAfterDelay();
	bool TrySetCompanionAtSpot(class ACGNPC* Companion, class AActor* ReturnPositionActor, class ABaseBuildSystemEntity* Entity, class UBuildEntityCompanionSpotComponent* SpotComponent);
	void Test_LoadLevelByName(class FName Name);
	void TakeScreenshotForSaveSystem(bool IsDaySave);
	void StopLoadingScreen();
	void StartLoadingScreen(class UUserWidget* Widget);
	void SquadLostTrack(class ACGSquadManager* InSquad);
	void SquadGotTrack(class ACGSquadManager* InSquad);
	void SpawnSuperHeavySoldier();
	void SpawnSoldier();
	void SpawnShadow();
	void SpawnSeregantSoldier();
	void SpawnLevelBulidingsIfNoneExist();
	void SpawnHeavySoldier();
	void SpawnEliteSoldier();
	void SpawnDeadSoldier();
	void SpawnChernoHost();
	void SpawnBlackStalker();
	void SetWeaponDurability(class FName UniqueId, float Offset);
	bool SetStatsForCompanion(class FName Name, const struct FCompanionEntry& Info);
	bool SetQuestForMap(enum class EEventMap Map, class FName QuestID, class FName* OldQuestID);
	bool SetProbabilityOfQuest(class FName QuestID, enum class EEventMap Map, float Probability);
	void SetPlayerDiedOnLevel();
	void SetIsPsycheDisabled(bool bInIsPsycheDisabled);
	void SetIsGateOfMadnessSaveFile(bool bInIsGateOfMadness);
	void SetFinishedGameAtLeastOnceMetadata();
	void SetDLSSMode(enum class EUDLSSMode Mode);
	void SetDayPart(enum class EDayPart Current);
	void SetCustomSoldierEventLevel(int32 NewLevel);
	void SetCurrentLevelBlackStalkerKilled(bool bInKilled);
	bool SetCompanionToWantToLeaveAPlayer(class FName CompanionID);
	bool SetCompanionToBeDeadInFight(class FName CompanionID);
	bool SetCompanionToBeAtPointOfHisDeath(class FName CompanionID);
	bool SetCompanionsToBeConflict(class FName CompanionA, class FName CompanionB);
	bool SetbContinueFromSave(bool bEnabled);
	void SaveScreenshotForSaveSystem(struct FSaveScreenshotData& ScreenshotData, bool IsDaySave);
	class FString SaveNameToMetadataName(const class FString& SaveName);
	bool SaveGameToFile();
	void SaveGameGlobalMetadata();
	bool SaveGame(class UObject* WorldContextObject);
	void RevertLastFinishedQuest();
	void RestoreHeroDataAfterFractalVRMap();
	void RestoreCompanionsToBuildings(const TArray<struct FBuildingCompanionInfo>& ViableCompanions);
	void ResetUserAchivements();
	void ResetShouldShowTimelineDeathTutorial();
	void ResetShouldShowHeistTutorialInBase();
	void ResetSavedSoldierSpawnInfo();
	void ResetQuestsRubberBandingValue();
	void ResetLastFinishedQuestInfo();
	void ResetGateOfMadnessDifficulties();
	void ResetDefualtSkinCacheAndMaterialsForSkeletalMeshComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
	void ResetCurrentLevelTimers();
	void ResetCompanionLoyaltyRevertInfo();
	void RemoveWeaponDurability(class FName UniqueId);
	bool RemoveSaveAndMetadataInSlot(const class FString& SaveName, int32 UserIndex);
	bool RemoveResourcesFromMap(enum class EEventMap Map, const struct FResourcesForMap& Resources);
	void RemoveOldDaySaves();
	void RemoveDecisionFromCompanion(class FName CompanionID, class FName DecisionID, bool CheckIfCompanionIsAvailable);
	void RemoveCurveAnimatedWidgetMaster(class UWidget* InWidget, class AActor* InActor);
	bool RemoveCompanion(class FName CompanionName);
	bool RemoveBuffFromCompanion(class FName CompanionName, class FName Modifier);
	bool RemoveAllSave();
	void RemoveAllDecisionsFromCompanion(class FName CompanionID, bool CheckIfCompanionIsAvailable);
	void RaportPlayerAction(enum class EPlayerAction Action);
	void PrintResourcesOnLevel();
	void PrepareHeroDataForFractalVRMap();
	bool PowerManagmentRemoveFromLimit(int32 LimitDelta);
	bool PowerManagmentRemove(int32 Power);
	int32 PowerManagmentGetLimit();
	int32 PowerManagmentGetCurrentUsage();
	bool PowerManagmentCanAdd(int32 Power);
	bool PowerManagmentAddToLimit(int32 LimitDelta);
	bool PowerManagmentAdd(int32 Power);
	void PostLoadMapWithWorld(class UWorld* InWorld);
	void PlayerInitializationFinished();
	void PermanentDataSetValue(const struct FDataTableRowHandle& Entry, bool NewVlaue);
	bool PermanentDataGetValue(const struct FDataTableRowHandle& Entry);
	enum class EQuickSaveResult PerformQuickSave();
	void PauseGame(bool Enabled);
	void OpenAsynchronouslyLoadedLevel();
	void OnTemporalStorageDropped();
	void OnQuestFinished(class FName QuestID);
	void OnLoadGameFinished();
	void OnLevelAddedToWorld(class ULevel* Level, class UWorld* InWorld);
	void OnGlobalSkinChanged(enum class EGlobalSkinType SkinType, class FName NewSkinName);
	void OnCombatDifficultyChanged();
	void NewGamePlus();
	bool MoveCompanionToARandomBuilding(class ACGNPC* Companion, class AActor* ReturnPositionActor);
	void ModifyWeaponDurability(class FName UniqueId, float Offset);
	void ModifyQuestsRubberBandingValue(float Modifier);
	struct FSaveScreenshotData MakeScreenshotData();
	void LockSaveAndLoadForDuration();
	void LoadingComplited();
	void LoadGameGlobalMetadata(bool bOnlyWhenNull);
	bool LoadGameFromFile();
	bool LoadGame(class UObject* WorldContextObject, bool BroadcastEvent);
	void LoadDebugLevels();
	void LoadAsynchronouslyLevel(class FName NewLevel, const class FString& Options);
	struct FWeaponSkinInfo K2_GetWeaponSkinByType(enum class EWeaponSkinType WeaponSkinType, bool* OutSuccess);
	bool K2_GetSolidersEventLevelInfo(int32 Level, struct FSoldierEventLevel* Info);
	bool K2_GetMonstersEventLevelInfo(int32 Level, struct FMonsterEventLevel* Info);
	struct FGlobalSkinInfo K2_GetEnabledGlobalSkin(enum class EGlobalSkinType SkinType, bool* OutSuccess);
	TArray<struct FWeaponSkinInfo> K2_GetAvailableWeaponSkinsForType(enum class EWeaponSkinType WeaponSkinType);
	TArray<struct FGlobalSkinInfo> K2_GetAvailableGlobalSkinsForType(enum class EGlobalSkinType Type);
	bool K2_GetActorInfo(class FName& ActorName, struct FActorInfo* Info);
	enum class EWeaponSkinType ItemIdToWeaponSkinType(class FName ItemId);
	bool IsWeaponDurabilityEnabled();
	bool IsTimelineMorning();
	bool IsSaveAndLoadLocked();
	bool IsMapEnabled(enum class EEventMap Map);
	bool IsLoadedSoundbank(const class FString& Name);
	bool IsHeroDataPrepearedForFractalVR();
	bool IsFSREnabled();
	bool IsDLSSEnabled();
	bool IsContinueSaveGameGOM();
	bool IsCompanionLoyaltyRevertPossible();
	bool IsCompanionEmployed(class FName CompanionName);
	bool IsCompanionAssignedToBuildingSlot(class FName CompanionName);
	void Internal_SetPostTransitionLevel();
	void Internal_OpenTransitionLevel();
	void Internal_CGOpenPostTransitionLevel();
	void InfluenceLevelUp__DelegateSignature(float AddedExp);
	void IncrementTimelineTutorialDeathCount();
	void IncreaseNumberOfSpaceTimeDistributors();
	bool HaveBuffCompanion(class FName CompanionName, class FName Modifier);
	class FName GetWeatherCPP();
	float GetWeaponDurability(class FName UniqueId);
	enum class ETransitionalMode GetTransitionalMode();
	float GetTemporalStorageCount(class FName ItemId);
	TArray<class FName> GetSuccededQuests();
	class FString GetSteamUserID();
	struct FStatsModifier GetStatForCompanion(class FName Companion, bool bClamped);
	float GetStartingMoraleForCompanion(struct FCompanionDefinition& CompanionDefinition);
	bool GetShouldUseDefaultSaveSystemForGateOfMadness();
	bool GetShouldShowTimelineDeathTutorial();
	bool GetShouldShowHeistTutorialInBase();
	bool GetShouldPerformGateOfMadnessBackup();
	struct FDateTime GetSaveTimestamp(const class FString& SaveName, int32 UserIndex);
	class FString GetSaveScreenshotPath(const class FString& SaveName);
	struct FCustomSaveGameMetadataInfo GetSaveGameMetadata(const class FString& SaveName, int32 UserIndex);
	float GetRequiredExperiencePerLevel();
	float GetQuestRubberBandingValue();
	struct FReportsTextsDataTableRow GetQuestResultText(const struct FMissionReportRequiredInformation& QuestResultInfo);
	struct FReportItems GetQuestResultItems(const struct FMissionReportRequiredInformation& QuestResultInfo);
	struct FQuestInfoInput GetQuestInfoBP(class FName QuestID, enum class EEventMap Map);
	struct FDescriptionInfo GetQuestDescription(class FName DescID);
	float GetProbabilityOfQuest(class FName QuestID, enum class EEventMap Map);
	bool GetPostTransitionLevelReady();
	class FName GetPostTransitionLevelName();
	TArray<struct FMissionReportRequiredInformation> GetMissionInfosForDay(int32 Day);
	enum class EEventMap GetMapForActiveEvent(class FName Event);
	enum class EEventMap GetMapEnumByName(class FName MapName);
	void GetLastWeekEvents(TArray<struct FEventDeactivationTimeStamp>* Result);
	class FName GetLastActiveQuestNameForMap(enum class EEventMap Map);
	bool GetIsUserInterfaceGloballyDisabled();
	bool GetIsPsycheDisabled();
	bool GetIsGateOfMadnessModeAvailable();
	bool GetIsGateOfMadnessMode();
	bool GetIsDifficultyGateOfMadness(enum class EDifficultyType DifficultyType);
	bool GetIsCustomSoldierEventLevelEnabled();
	bool GetIsBuildingRestrictedFromCurrentGameMode(struct FBuildEntry& BuildEntry);
	float GetInfluenceExp();
	TArray<struct FCompanionWithPrize> GetGatheredItemsByCompanions();
	TArray<class FName> GetFinishedQuests();
	bool GetFinishedGameAtLeastOnceMetadataOnly();
	enum class EUDLSSMode GetDLSSMode();
	enum class EDifficultyValue GetDifficultyValue(enum class EDifficultyType DifficultyType);
	float GetDifficultyModifierChecked(class FName Name, bool* OutResult, bool ReturnOneOnFail);
	float GetDifficultyModifierByType(enum class EDifficultyModifierType Type, bool ReturnOneOnFail);
	float GetDifficultyModifier(class FName Name, bool ReturnOneOnFail);
	enum class EDayPart GetDayPart();
	int32 GetCustomSoldierEventLevel();
	TArray<class FString> GetCustomSaves();
	TArray<class FString> GetCustomSaveNames(enum class ECustomSaveType CustomSaveType);
	struct FCompanionEntry GetCurrentStatsForCompanion2(class FName Name, bool* Valid);
	bool GetCurrentStatsForCompanion(class FName Name, struct FCompanionEntry& Info);
	int32 GetCurrentSoldierEventLevel(bool SkipLevelModifiers);
	class FName GetCurrentSaveGameFileName();
	int32 GetCurrentMonsterEventLevel(bool SkipLevelModifiers);
	int32 GetCurrentDay();
	class FName GetContinueSaveGameFileName();
	struct FConflict GetConflictForCurrentDay();
	int32 GetCompletedStoryQuestsCount();
	TArray<class FName> GetCompanionsModifiers(class FName CompanionID);
	struct FCompanionDefinition GetCompanionsInfo(class FName CompanionID);
	struct FCompanionEffectiveness GetCompanionEquipmnetStatsModifier(struct FInventoryEntry& ItemEntry);
	class FName GetCompanionByActiveEvent(class FName EventID, bool* Valid);
	bool GetClimbDebugEnabled();
	bool GetbFreeModeEvents();
	bool GetbFreeMode();
	bool GetbContinueFromSave();
	class ABackend* GetBackend();
	TArray<struct FCompanionEntry> GetAvailableCompanions();
	TArray<class FName> GetAvaiableRecipies();
	enum class EUDLSSMode GetAutoDLSSQualityBasedOnPixels(int32 Pixels);
	int32 GetAdjustedSoldierEventLevel(bool SkipLevelModifiers);
	TMap<enum class EEventMap, struct FActiveQuestInfo> GetActiveQuests();
	int32 GetActiveQuestDifficultyModifier(enum class EEventMap Map);
	TArray<class FName> GetActiveEventsV2(enum class EEventMap Map);
	TArray<struct FInnerEvent> GetActiveEvents();
	TMap<enum class EAchievementType, float> GetAchievementsFromSave();
	struct FAchievementInfo GetAchievementInfo_K2(enum class EAchievementType AchievementType, bool* OutResult);
	bool GameCharactersIsEnabled(class FName CharacterID);
	bool GameCharactersInfo(class FName CharacterID, struct FGameCharacter* Info);
	TArray<class FName> GameCharactersGet();
	bool GameCharactersEnable(class FName CharacterID);
	bool GameCharactersDisable(class FName CharacterID);
	void ForceScreenshot();
	void FlushInventory();
	bool FinishQuest(class FName QuestID, enum class EEventMap Map, enum class EMissionResult Result);
	bool FinishEvent(class FName EventID, enum class EEventMap Map);
	TArray<class FName> FindFavouriteBuildEntities(class FName CompanionName);
	TArray<class FName> FindDislikedBuildEntities(class FName CompanionName);
	void EventStatusAdded(class FName Event, class FName Status);
	void EnableWwiseForceFlush(bool bIsEnabled);
	void EnableSightDebug(bool bInEnabled);
	void EnableScreenshotOnSave(bool IsEnabled);
	void EnableResourceSpawnDebug(bool bInEnabled);
	bool EnableQuest(class FName QuestID, enum class EEventMap Map);
	void EnablePatchPreviewText(bool bIsEnabled);
	bool EnableMap(enum class EEventMap Map);
	void EnableExperimentalStreamingTimes(bool bIsEnabled);
	void EnableExperimentalLoadScreen(bool bIsEnabled);
	bool EnableEventV2(class FName EventID, enum class EEventMap Map);
	bool EnableEvent(class FName Event);
	void EnableDebugStreamingManager(bool bIsEnabled);
	void EnableCustomSoldierEventLevel(bool bIsEnabled);
	void EnableConsoleMainMenuDebug(bool bIsEnabled);
	void EnableClimbDebug(bool bInEnabled);
	void DumpRefs(TSubclassOf<class UObject> UClass);
	void DumpOutermostObject(TSubclassOf<class UObject> UClass);
	void DumpLastWidgetOuter(TSubclassOf<class UObject> UClass);
	void DumpFirstWidgetOuter(TSubclassOf<class UObject> UClass);
	void DumpComponentOwners(TSubclassOf<class UActorComponent> UClass);
	void DropItemsFromTemporalStorage();
	bool DoesCompanionWantToLeaveAPlayer(class FName CompanionID);
	bool DisableQuest(class FName QuestID, enum class EEventMap Map);
	void DisableFSROnMapLeave();
	bool DisableEventV2(class FName EventID, enum class EEventMap Map);
	void DisableAvailableQuestsByCategoryForNextUpdate(TArray<enum class EQuestCategoryType>& Categories);
	void DialogueSystemSetBool(const class FString& Name, bool NewValue);
	bool DialogueSystemGetBool(const class FString& Name);
	void DialogueSpawnInteractable(class ACGAICharacter* InAICharacter, class FName InItemName);
	void DecreaseNumberOfSpaceTimeDistributors();
	void DecreaseDeathCounter();
	TMap<class FName, float> DeathPenaltyRemoveItems();
	void CreateCustomSave(enum class ECustomSaveType CustomSaveType);
	struct FInventoryEntry CompanionUnequipItem(class FName CompanionID, enum class ECompanionEquipmentSlotType SlotType, bool* OutResult);
	void CompanionSystemSetLoyaltyLevel(class FName NameID, int32 NewLoyalty);
	void CompanionSystemSetLoyaltyExp(class FName NameID, float NewLoyalty);
	int32 CompanionSystemGetLoyaltyLevel(class FName NameID);
	float CompanionSystemGetLoyaltyExp(class FName NameID);
	void CompanionSystemDebugForceConflict();
	struct FInventoryEntry CompanionSwapItem(class FName CompanionID, enum class ECompanionEquipmentSlotType SlotType, const struct FInventoryEntry& NewItem, bool* OutResult);
	struct FInventoryEntry CompanionGetEquippedItem(class FName CompanionID, enum class ECompanionEquipmentSlotType SlotType, bool* OutResult);
	bool CompanionEquipItem(class FName CompanionID, enum class ECompanionEquipmentSlotType SlotType, const struct FInventoryEntry& NewItem);
	bool CompanionCanEquipItem(enum class ECompanionEquipmentSlotType SlotType, struct FInventoryEntry& Item);
	void ClearDisabledQuestsByCategory();
	void ClearCompanionsFromBuildingSpots();
	void ClearAllCustomSaveSlotsToDefaultValuesYesIDont();
	bool CheckIfPlayerDiedOnLevel();
	void CheckCompanionsMissionStatus();
	void CGSetPostTransitionalLevel(class FName InTargetLevelName, enum class ETransitionalMode InTransMode, bool SkipSave, bool bClearContinueFlag);
	void CGOpenTransitionLevel(class FName InTargetLevelName, enum class ETransitionalMode InTransMode, bool SkipSave, bool bClearContinueFlag);
	void CGOpenPostTransitionLevel();
	void CGMarkAsContinueFromSave();
	void CGLoadTransitionLevel();
	void CGLoadPostTransitionLevel();
	void BuildSystemUpdateActiveTiers();
	bool BuildSystemRemoveNewEntity(class FName Name);
	bool BuildSystemIsCurrentCatalogTreeComplete(TArray<class FName>& Tree);
	bool BuildSystemInit();
	void BuildSystemGlobalStatsRecalculate();
	float BuildSystemGetStatModifier(class FName Name, float Delta);
	int32 BuildSystemGetStartingValueForGlobalStat(struct FBuildGlobalStat& GlobalStat);
	TArray<class FName> BuildSystemGetRootCatalogIDs();
	class FText BuildSystemGetReadablePath(TArray<class FName>& Path);
	TArray<class FName> BuildSystemGetPathsContaing(TArray<class FName>& Tree);
	class FName BuildSystemGetNameByCategory(enum class EBuildCategory Category);
	TArray<struct FBuildEntryInternal> BuildSystemGetItemsByPath(TArray<class FName>& Tree);
	bool BuildSystemGetIsPowerSufficient();
	TArray<struct FBuildEntryInternal> BuildSystemGetIAllItemsByPath(bool bIsWorkshop, TArray<class FName>& Path);
	bool BuildSystemGetHasEnoughPower(float RequiredPower);
	int32 BuildSystemGetGlobalStatValue(class FName Name);
	struct FBuildGlobalStat BuildSystemGetGlobalStatInfo(class FName Name);
	int32 BuildSystemGetGlobalAddValue(class FName Name, int32 Delta, bool Removing);
	struct FBuildEntryInternal BuildSystemGetEntityInfo(class FName Name);
	int32 BuildSystemGetEntityCurrentCount(class FName Name);
	enum class EBuildSystemStatTier BuildSystemGetCurrentStatTier(enum class EBuildSystemStatType StatType);
	enum class EBuildCategory BuildSystemGetCategoryByName(class FName CategoryName);
	struct FBuildCatalogPath BuildSystemGetCatalogInfoByPath(TArray<class FName>& Path);
	TArray<class FName> BuildSystemGetAvaiablePathIDs(TArray<class FName>& Tree);
	TArray<class FName> BuildSystemGetAllPathIDs(bool bIsWorkshop, TArray<class FName>& Tree);
	TArray<struct FBuildEntryInternal> BuildSystemGetAllEntities();
	TArray<class FName> BuildSystemGetAllAvaiableEntities();
	TArray<class FName> BuildSystemGetActiveTier();
	TArray<struct FBuildEntryInternal> BuildSystemFilterByCategoryAndTier(enum class EBuildCategory Category, class FName Tier);
	TArray<struct FBuildEntryInternal> BuildSystemFilterByCategoryAndCatalog(enum class EBuildCategory Category, class FName Catalog);
	bool BuildSystemDeactivateTierName(class FName Tier);
	class FName BuildSystemCreatePathID(TArray<class FName>& Path);
	bool BuildSystemAddNewEntity(class FName Name);
	bool BuildSystemActivateTierName(class FName Tier);
	void BPRestoreDataForNewGamePlus();
	void BPPrepareDataForNewGamePlus();
	bool AreCompanionsInSecondConflict(class FName CompanionA, class FName CompanionB);
	bool AreCompanionsInConflict(class FName CompanionA, class FName CompanionB);
	void ApplyCompanionLoyaltyRevert();
	bool AddResourcesToMap(enum class EEventMap Map, const struct FResourcesForMap& Resources);
	void AddInfluenceExp(float Exp);
	void AddGateOfMadnessDifficulty(enum class EDifficultyType DifficultyType);
	void AddDecisionToCompanion(class FName CompanionID, class FName DecisionID, bool CheckIfCompanionIsAvailable);
	void AddCurveAnimatedWidgetMaster(class UWidget* InWidget, class AActor* InActor);
	void AddCompanionLoyaltyRevertInfo(const struct FCompanionLoyaltyRevertInfo& RevertInfo);
	bool AddCompanion(class FName CompanionName);
	bool AddBuffToCompanion(class FName CompanionName, class FName Modifier);
	void AddAchievementToSave(enum class EAchievementType AchievementType, float Progress);
};

// 0x50 (0x78 - 0x28)
// Class ChernobylGame.CustomSaveGameMetadata
class UCustomSaveGameMetadata : public USaveGame
{
public:
	struct FCustomSaveGameMetadataInfo           SaveGameMetadata;                                  // 0x28(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCustomSaveGameMetadata* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ChernobylGame.CustomSaveGameGlobalMetadata
class UCustomSaveGameGlobalMetadata : public USaveGame
{
public:
	bool                                         bFinishedGameAtLeastOnce;                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DDD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomSaveGameGlobalMetadata* GetDefaultObj();

};

// 0xE8 (0x110 - 0x28)
// Class ChernobylGame.CustomSaveGame
class UCustomSaveGame : public USaveGame
{
public:
	struct FCustomSaveGameData                   SaveGameData;                                      // 0x28(0xD8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AActor>>         BroadcastedActors;                                 // 0x100(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCustomSaveGame* GetDefaultObj();

	void SaveDataToSlot(const class FString& InSlotName, int32 Version, int32 InUserIndex, class UCustomGameInstance* GameInstance);
	void PrepareMetadataForSave(class UCustomGameInstance* GameInstance, class UCustomSaveGameMetadata* CurrentMetadata);
	bool LoadDataFromSlot(const class FString& InSlotName, int32 Version, int32 InUserIndex);
	int32 GetSaveVersion(const class FString& SaveFileName, int32 InUserIndex);
	void DebugPrintData();
	void ClearSave();
	void AquireOnlyGameInstance(class UObject* InWorldContextObject);
	void AquireDataFromStreamedLevel(class UObject* InWorldContextObject, class FName InLevelName);
	void AquireDataFromAllLevels(class UObject* InWorldContextObject);
	void ApplyOnlyGameInstance(class UObject* InWorldContextObject);
	void ApplyDataToStreamedLevel(class UObject* InWorldContextObject, class FName InLevelName, bool BroadcastEvent);
	void ApplyDataToAllLevels(class UObject* InWorldContextObject, bool BroadcastEvent);
};

// 0x18 (0x48 - 0x30)
// Class ChernobylGame.ChernobylGameAsyncSave
class UChernobylGameAsyncSave : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DE3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChernobylGameAsyncSave* GetDefaultObj();

	void HandleAsyncSaveFinished();
	class UChernobylGameAsyncSave* ChernobylGameAsyncSave(class UObject* WorldContextObject, bool bBroadcastSaveFinished);
};

// 0x18 (0x48 - 0x30)
// Class ChernobylGame.ChernobylGameAsyncCustomSave
class UChernobylGameAsyncCustomSave : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DEB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChernobylGameAsyncCustomSave* GetDefaultObj();

	void HandleAsyncSaveFinished();
	class UChernobylGameAsyncCustomSave* ChernobylGameAsyncCustomSave(class UObject* WorldContextObject, enum class ECustomSaveType CustomSaveType, bool bBroadcastSaveFinished);
};

// 0x30 (0x60 - 0x30)
// Class ChernobylGame.ChernobylGameAsyncScreenshotSave
class UChernobylGameAsyncScreenshotSave : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DF1[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChernobylGameAsyncScreenshotSave* GetDefaultObj();

	void HandleAsyncSaveFinished();
	class UChernobylGameAsyncScreenshotSave* ChernobylGameAsyncScreenshot(class UObject* WorldContextObject, struct FSaveScreenshotData& ScreenshotData, bool IsDaySave, bool broadcastSaveFinished);
};

// 0x10 (0x40 - 0x30)
// Class ChernobylGame.ChernobylGameWaitForSave
class UChernobylGameWaitForSave : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChernobylGameWaitForSave* GetDefaultObj();

	class UChernobylGameWaitForSave* WaitForAsyncSaveGame(class UObject* WorldContextObject);
	void HandleAsyncSaveFinished();
};

// 0x30 (0x60 - 0x30)
// Class ChernobylGame.ChernobylGameAsyncScreenshot
class UChernobylGameAsyncScreenshot : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FSaveScreenshotData                   ScreenshotData;                                    // 0x40(0x18)(Protected, NativeAccessSpecifierProtected)
	class ASceneCaptureActor*                    CaptureActor;                                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UChernobylGameAsyncScreenshot* GetDefaultObj();

	void HandleAsyncScreenshotFinished(const TArray<struct FColor>& ColorData);
	class UChernobylGameAsyncScreenshot* AsyncMakeScreenshotData(class UObject* WorldContextObject);
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.CutsceneInput
class ICutsceneInput : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICutsceneInput* GetDefaultObj();

	void TriggerPauseMenu();
	void ShowUI();
	void PC_Interaction_Accept_Release();
	void PC_Interaction_Accept();
	void HideUI();
	void AnyKeyPressed();
};

// 0x0 (0x38 - 0x38)
// Class ChernobylGame.DashBuff
class UDashBuff : public UBaseBuff
{
public:

	static class UClass* StaticClass();
	static class UDashBuff* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ChernobylGame.DialogueComponentPayload
class UDialogueComponentPayload : public UObject
{
public:
	uint8                                        Pad_3DF7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogueComponentPayload* GetDefaultObj();

	void StartPayload();
	void FinishPayload();
};

// 0x18 (0x48 - 0x30)
// Class ChernobylGame.DialogueCompanionStatusPayload
class UDialogueCompanionStatusPayload : public UDialogueComponentPayload
{
public:
	TSubclassOf<class UCGCompanionStatusPayloadWidget> PayloadWidgetClass;                                // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CompanionID;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCGCompanionStatusPayloadWidget*       PayloadWidget;                                     // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDialogueCompanionStatusPayload* GetDefaultObj();

};

// 0x278 (0x470 - 0x1F8)
// Class ChernobylGame.DialogueComponent
class UDialogueComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnDialogueEnded;                                   // 0x1F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDialogueStarted;                                 // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDataTable*                            DataDT;                                            // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            MetaDataDT;                                        // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartingRow;                                       // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          CurrentDialogueOptions;                            // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FDialogueActorReference> Actors;                                            // 0x240(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bSkipMovementChangeWhenDialogueFinishses;          // 0x290(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipPawnEnableInteractionOnReset;                 // 0x291(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipNextDefaultCameraFocus;                       // 0x292(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipDialogueEndedCallback;                        // 0x293(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipDialogueEndFocuses;                           // 0x294(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipAmmoShowOnEnd;                                // 0x295(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E07[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftObjectPtr<class AActor>, TSoftObjectPtr<class UAnimSequence>> LastGesturePerActor;                               // 0x298(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          LastGestureOverall;                                // 0x2E8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChatterEnabled;                                   // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckForMediaAsset;                               // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDialogueCurrentlyBlocksPlayer;                    // 0x312(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E08[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraFocusPossibleOffset;                         // 0x314(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         BlockDialogue;                                     // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsDialoguePlaying;                                 // 0x319(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E09[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PawnWithLaunchedEventOn;                           // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                LastAkEvent;                                       // 0x328(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USubtitleEntry*>                Subtitles;                                         // 0x338(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UDialogueWidget*                       MainWidget;                                        // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FString, int32>                   DialogueCounter;                                   // 0x350(0x50)(NativeAccessSpecifierPrivate)
	class FName                                  LastRow;                                           // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        CountersToClear;                                   // 0x3A8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FName                                  CurrentStepTmp;                                    // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         OptionSelectionMode;                               // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         BlockPlayer;                                       // 0x3C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         BankMarkedAsUnnecessary;                           // 0x3C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsGamePausedDialogue;                              // 0x3C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsGamePausedLineValid;                             // 0x3C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E0A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GamePausedRemainingLineTime;                       // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E0B[0x54];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActorVOPair>                  StopVOFails;                                       // 0x420(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FDialogueItemInfo>             ItemInfos;                                         // 0x430(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E0C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                FirstPersonCameraFocusActor;                       // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E0D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UDialogueComponentPayload*>     PayloadObjects;                                    // 0x460(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogueComponent* GetDefaultObj();

	void StopFailedVO();
	void StartDialogueAtRow(class ACGCharacter* Instigator, bool ShouldBlockPlayer, class FName NewStart, enum class EDialogueSubtitleType ForcedSubtitleType, class AActor* CustomCameraFocus);
	void StartDialogue(class AActor* Instigator, bool ShouldBlockPlayer, bool bInPossiblyUseGesture, enum class EDialogueSubtitleType ForcedSubtitleType, class AActor* CustomCameraFocus);
	void Skip();
	void SetSkippable(bool bInNewSkippable);
	void SetShouldAutomaticallyFinishPayload(TSubclassOf<class UDialogueComponentPayload> PayloadType, bool bNewValue);
	void SetDialogCameraFocus(class AActor* FocusActor);
	void SetBlockDialogue(bool NewValue);
	void Select();
	void RemovePayloadByClass(TSubclassOf<class UDialogueComponentPayload> PayloadType);
	void RemovePayload(class UDialogueComponentPayload* Payload);
	void OverrideCurrentTimerTime(float NewTime);
	void OnTranitionFinished();
	void OnDialogueLineEnded();
	void NPCDialogueEnded(class AActor* ComponentOwner, struct FCGDamageEvent& InDamageEvent);
	bool IsPlaying();
	void InternalOnDialogueLineEnded();
	class UDialogueComponentPayload* GetPayloadByClass(TSubclassOf<class UDialogueComponentPayload> PayloadType);
	bool GetIsSkippable();
	void ForceStopDialogue2();
	void ForceStopDialogue(float DelayMs);
	float EstimateDuration(class FName RowName);
	void EndGamePausedDialogue();
	void DebugDialogueAtRow(class ACGCharacter* Instigator, class FName NewStart);
	void ClearOptions();
	void BeginGamePausedDialogue();
	void AddPayload(class UDialogueComponentPayload* Payload);
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.DialogueFunctionLibrary
class UDialogueFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDialogueFunctionLibrary* GetDefaultObj();

	void SplitStringToArray(const class FString& InString, TArray<class FString>* OutArray);
	void SetWidgetComponentPivot(class UWidgetComponent* Target, const struct FVector2D& NewPivot);
	bool SetNewDialogueMetaData(class AActor* InActor, class UDataTable* InNewDialogueMetaData);
	bool SetNewDialogueData(class AActor* InActor, class UDataTable* InNewDialogueData);
	bool PlayRandomChatterOfType(class AActor* InActor, enum class EChatterType InChatterType, bool bInPossiblyUseGesture, float InRadiusOverride, bool bForceStopAnyDialogue);
	class UDataTable* FindDatatable(const class FString& InDatatablePath);
	class AActor* FindActorByName(class UObject* InWorldContextObject, const class FString& InName);
	void CallFunctionByNameOnActor(class AActor* InActor, class FName InFunctionName, bool* OutSuccess);
};

// 0x0 (0x220 - 0x220)
// Class ChernobylGame.DialogueFunctionManager
class ADialogueFunctionManager : public AActor
{
public:

	static class UClass* StaticClass();
	static class ADialogueFunctionManager* GetDefaultObj();

};

// 0x58 (0x88 - 0x30)
// Class ChernobylGame.DialogueTimelinePayload
class UDialogueTimelinePayload : public UDialogueComponentPayload
{
public:
	TSubclassOf<class UCGTimelinePayloadWidget>  PayloadWidgetClass;                                // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDialogueTimelinePayloadData          Payload;                                           // 0x38(0x48)(Edit, BlueprintVisible, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	class UCGTimelinePayloadWidget*              PayloadWidget;                                     // 0x80(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDialogueTimelinePayload* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.DialogueWidget
class UDialogueWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UDialogueWidget* GetDefaultObj();

	void Up();
	int32 SelectedIndex(bool* Enabled);
	void Select();
	void PostSelectionEvent();
	void Init(TArray<struct FDialogueSingleOptionData>& Prompts);
	void Down();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.EndGameCreditsInput
class IEndGameCreditsInput : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEndGameCreditsInput* GetDefaultObj();

	void Interaction_Accept_Release();
	void Interaction_Accept();
};

// 0x78 (0x298 - 0x220)
// Class ChernobylGame.EveningActivityManager
class AEveningActivityManager : public AActor
{
public:
	TArray<struct FDataTableRowHandle>           FoodBuffs;                                         // 0x220(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        LowMoraleThreshold;                                // 0x230(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceForTriggeringConflict;                       // 0x234(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class ACGNPC*>             Companions;                                        // 0x238(0x50)(Edit, NativeAccessSpecifierPublic)
	TArray<class ACGNPC*>                        AllCompanions;                                     // 0x288(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AEveningActivityManager* GetDefaultObj();

	void UpdateCompanionStatsMission(class FName CompanionID);
	void UpdateAllCompanionsStatsMission();
	enum class ECompanionConflictType Update(struct FCompanionsInConflict* Conflict);
	void HideCompanions();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.EventFunctionLibrary
class UEventFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEventFunctionLibrary* GetDefaultObj();

	void SortEventsByDate(TArray<struct FInnerEvent>& InOutArrayToSort);
	void SetEventStatus(class UObject* WorldContextObject, class FName EventID, class FName Status);
	class FString ParseReport(const class FString& Report, struct FReportInfo& Info);
	void MergeEventArraysRemoveDuplicates(TArray<struct FInnerEvent>& InArray1, TArray<struct FInnerEvent>& InArray2, TArray<struct FInnerEvent>* OutMergedArray);
	bool IsEventActive(class UObject* WorldContextObject, class FName EventID);
	void InitEventsOnLevel(class ALevelScriptActor* ThisLevel, enum class EEventMap ThisMap);
	void GetEventResults(class UObject* WorldContextObject, TArray<struct FEventResult>* Results);
	bool GenerateReportInfo(class UObject* WorldContextObject, class FName FromEvent, struct FReportInfo* OutInfo);
	bool ForceActivateEvent(class UObject* WorldContextObject, class FName EventID, enum class EEventMap Map);
	void FilterNpcByAvailableEvents(class UObject* WorldContextObject, TArray<class FName>& InNpcs, TArray<class FName>& InEvents, TArray<class FName>* OutNpcs);
	void EnableEvent(class UObject* WorldContextObject, class FName Event);
	void DisableEvent(class UObject* WorldContextObject, class FName Event);
	void ClearEventSystemStatuses(class UObject* WorldContextObject);
};

// 0x28 (0x248 - 0x220)
// Class ChernobylGame.EventSystemBackend
class AEventSystemBackend : public AActor
{
public:
	uint8                                        Pad_3E3D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentDay;                                        // 0x228(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          FullyLoyalCompanions;                              // 0x230(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	bool                                         bAllowStoryQuests;                                 // 0x240(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E3F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AEventSystemBackend* GetDefaultObj();

	bool ValidateActiveQuests(TMap<enum class EEventMap, class FName>* OutChangedQuests);
	void UpdateCompanionsLoyaltyCache();
	void Update(class APrepassQuestActor* Prepass);
	void SetValue(const struct FDataTableRowHandle& Entry, bool NewVlaue);
	bool SetMood(class FName MoodID, enum class EEventMap Map);
	bool SetCompanionForQuest(class FName CompanionID, class FName QuestID);
	bool Prepeare(bool bForce, bool bIsNewGamePlus);
	bool GetValue(const struct FDataTableRowHandle& Entry);
	void ForceCustomFirstDayQuestBase(class FName QuestID);
	void FixMapOnOldSave(enum class EEventMap InMap);
	void Clear();
	float CalculateEffectiveness(class FName CompanionID, class FName QuestID, enum class EEventMap QuestMap);
	bool ActivateQuestDebug(class FName QuestID, enum class EEventMap Map, class FName CompanionID);
};

// 0x0 (0x220 - 0x220)
// Class ChernobylGame.EventSystemLevelBackend
class AEventSystemLevelBackend : public AActor
{
public:

	static class UClass* StaticClass();
	static class AEventSystemLevelBackend* GetDefaultObj();

	void Update(enum class EEventMap CurrentMap, bool bReturnLevelListOnly, TArray<class FName>* OutLevelsToStream, bool bIsContinue);
};

// 0x20 (0x50 - 0x30)
// Class ChernobylGame.EventSystemStaticData
class UEventSystemStaticData : public UDataAsset
{
public:
	TArray<class UTexture2D*>                    Icons;                                             // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          IconDescriptions;                                  // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEventSystemStaticData* GetDefaultObj();

};

// 0x30 (0x250 - 0x220)
// Class ChernobylGame.FakeRadarSphere
class AFakeRadarSphere : public AActor
{
public:
	class UCurveFloat*                           GrowthCurve;                                       // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRadarFoundSomething;                             // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeforeRadarDestroyed;                            // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        AnimationTime;                                     // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bWasAtLastTick;                                    // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E45[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFakeRadarSphere* GetDefaultObj();

	class AFakeRadarSphere* SpawnFakeRadarWave(class UObject* WorldContextObject, struct FTransform& InSpawnTransform);
	void RadarSphereDestroyedDelegate__DelegateSignature(class AFakeRadarSphere* Target);
	void RadarDetectionDelegate__DelegateSignature(class AFakeRadarSphere* Target, class AActor* ActorFound);
};

// 0x20 (0x240 - 0x220)
// Class ChernobylGame.FireVolume
class AFireVolume : public AActor
{
public:
	uint8                                        Pad_3E46[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBoxComponent*                         CollisionComponent;                                // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x230(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDelay;                                       // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OneTimeUsage;                                      // 0x23D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E47[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFireVolume* GetDefaultObj();

};

// 0x48 (0xF8 - 0xB0)
// Class ChernobylGame.FPAnimSystemQueue
class UFPAnimSystemQueue : public UAnimSystemQueue
{
public:
	FMulticastInlineDelegateProperty_            QueryFinishedDelegate;                             // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            FullQueryFinishedDelegate;                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bQueryEnabled;                                     // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4A[0x27];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFPAnimSystemQueue* GetDefaultObj();

	class FString ReadQuery(struct FFPAnimQuery& InQuery);
	void QueryActivity(struct FFPAnimQuery& InAnimQuery, bool* OutQueryResult, TArray<struct FFPAnimQuery>* OutQueryQueue, bool bInShouldBlockNewQueries, float InAnimScale);
	void LogPrintCurrentQueue();
	float GetGlobalAnimScale();
	void EnableNewQueries(bool InNewQueryiesEnabled);
};

// 0x40 (0x260 - 0x220)
// Class ChernobylGame.PatrolActor
class APatrolActor : public AActor
{
public:
	class APatrolActor*                          Next;                                              // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaitTime;                                          // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldWait;                                       // 0x22C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimOverWait;                                     // 0x22D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldFixPosition;                                // 0x22E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          InMontageToPlay;                                   // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          MontageToPlay;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          OutMontageToPlay;                                  // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FixTime;                                           // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldRun;                                        // 0x24C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPatrolActorReached;                              // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class APatrolActor* GetDefaultObj();

	TArray<class APatrolActor*> GetLoop();
};

// 0x38 (0x298 - 0x260)
// Class ChernobylGame.FriendlyPatrolActor
class AFriendlyPatrolActor : public APatrolActor
{
public:
	struct FCGApproachIdleSettings               ApproachIdleSettings;                              // 0x260(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class USceneComponent*                       RootSceneComp;                                     // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     ApproachTarget;                                    // 0x278(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         ColBox;                                            // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnApproachFinishedDelegate;                        // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AFriendlyPatrolActor* GetDefaultObj();

	void OnOverlap(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bInFromSweep, struct FHitResult& InSweepResult);
};

// 0x20 (0x58 - 0x38)
// Class ChernobylGame.GasBuff
class UGasBuff : public UBaseBuff
{
public:
	uint8                                        Pad_3E4F[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGasBuff* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class ChernobylGame.GetSubtitlesFromSoundAsyncNode
class UGetSubtitlesFromSoundAsyncNode : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ShowText;                                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E50[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetSubtitlesFromSoundAsyncNode* GetDefaultObj();

	class UGetSubtitlesFromSoundAsyncNode* GetSubtitlesAsync(class UObject* WorldContextObject, class USoundWave* Sound);
};

// 0x10 (0x38 - 0x28)
// Class ChernobylGame.GlobalSingleton
class UGlobalSingleton : public UObject
{
public:
	TSubclassOf<class USubtitlesManager>         SubtitleManagerBlueprintClass;                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubtitlesManager*                     SubtitleManagerInstance;                           // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGlobalSingleton* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.GlobalSingletonLibrary
class UGlobalSingletonLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGlobalSingletonLibrary* GetDefaultObj();

	class UGlobalSingleton* GetSingleton(bool* IsValid);
};

// 0x18 (0x50 - 0x38)
// Class ChernobylGame.GlobalSlomoBuff
class UGlobalSlomoBuff : public UBaseBuff
{
public:
	uint8                                        Pad_3E53[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGlobalSlomoBuff* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ChernobylGame.GodmodeBuff
class UGodmodeBuff : public UBaseBuff
{
public:

	static class UClass* StaticClass();
	static class UGodmodeBuff* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.HackingFunctionLibrary
class UHackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHackingFunctionLibrary* GetDefaultObj();

	class FString MixStrings(const class FString& AlphaZero, const class FString& AlphaOne, float Alpha);
	void InsertXmlTagsIntoBinary(const class FString& InTextWithBinary, const class FString& InTagBegin, const class FString& InTagEnd, class FString* OutText);
	void InsertWordsIntoRichString(const class FString& Source, class FString* Destination, const TArray<class FString>& Strings, const TArray<int32>& Positions, const TArray<class FString>& OpeningXmlTags, bool IgnoreInsertedLength);
	void InsertStrings(const class FString& Source, class FString* Destination, const TArray<class FString>& Strings, const TArray<int32>& Positions);
	void GetLettersAtIndex(const TArray<class FString>& InWords, int32 Index, TArray<class FString>* OutLetters);
	void GetIndicesOfWordsWithThisLetterAtIndex(TArray<class FString>& InWords, int32 InIndex, const class FString& InLetter, TArray<int32>* OutIndices, bool NotThisLetter);
	class FString GetCharacterAt(const class FString& InString, int32 Index);
	class FString GenerateRandomBinaryString(int32 Length);
	int32 FindClosestFalse(const TArray<bool>& InArray, int32 StartIndex, bool ReversedOrder);
	class FString DivideRichTextIntoColumns(const class FString& Source, const TArray<int32>& ColumnSizes);
	class FString DivideIntoColumns(const class FString& Source, const TArray<int32>& ColumnSizes);
	class FString CreateRichTextTag(const class FString& Style, const struct FLinearColor& Color);
	class FString ConvertToBinary(const class FString& UnparsedText);
	bool CompareColors(struct FLinearColor& A, struct FLinearColor& B);
};

// 0x58 (0x108 - 0xB0)
// Class ChernobylGame.HealthComponent
class UHealthComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnDeath;                                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHPLost;                                          // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHpGained;                                        // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        CurrentHP;                                         // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHp;                                             // 0xE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GodModeEnabled;                                    // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHpLostAbsolute;                                  // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bCanBeMeleeDamaged;                                // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E6A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHealthComponent* GetDefaultObj();

	void OverrideMaxHP(float InNewMaxHP);
	void OverrideCurrentHP(float InNewHP);
	float K2_DealDamage(float Damage, struct FCGDamageEvent& DamageType, class AActor* DamageCauser);
	float Heal(float HpHealed);
	float DealDamage(float Damage, struct FCGDamageEvent& DamageType, class AActor* DamageCauser);
};

// 0xB8 (0x168 - 0xB0)
// Class ChernobylGame.HealthComponent2
class UHealthComponent2 : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            HealthChangedDelegate;                             // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            RadiationChangedDelegate;                          // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HealthPhaseChangedDelegate;                        // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            RadiationPhaseChangedDelegate;                     // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerDiedDelegate;                                // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HealthComponentInitialized;                        // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MaxHealthChangedDelegate;                          // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        RadiationFillLimit;                                // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiationRecoveryDelay;                            // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiationRecoveryStep;                             // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E80[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageType>               LastDamageClass;                                   // 0x130(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E81[0x1C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeltaGodModeTime;                                  // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RadiationThreshold;                                // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RadiationMaxDose;                                  // 0x15C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RadiationThresholdForMovement;                     // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E82[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHealthComponent2* GetDefaultObj();

	void SetRadiationMultiplier(float Multiplier);
	void SetGodMode(bool Enable, bool bFromCheat);
	void RemoveRadSegments(float Segments, bool bSkipGodMode);
	void ModifyMaximumHealth(int32 SegmentsPerStage);
	bool K2_ChangeHPSections(float Sections, TSubclassOf<class UDamageType> InDamageClass, bool BypassMultiplayer);
	bool K2_ChangeHP(float Points, TSubclassOf<class UDamageType> InDamageClass, bool BypassMultiplayer);
	void InitInv();
	int32 GetUIBarSegments();
	float GetRadiationThreshold();
	float GetRadiationMultiplier();
	float GetRadiationMaxDose();
	float GetMinRadiationForPhase(enum class EHealthPhase Phase);
	float GetMaxRadiationForPhase(enum class EHealthPhase Phase);
	float GetMaxRadiation();
	float GetMaxHP();
	float GetMaxHealthForPhase(enum class EHealthPhase Phase);
	bool GetGodModeFromCheat();
	bool GetGodMode();
	enum class EHealthPhase GetCurrentRadiationPhase();
	float GetCurrentRadiation();
	float GetCurrentHP();
	enum class EHealthPhase GetCurrentHealthPhase();
	bool ChangeRadPercentage(float PointsPercentage, bool BypassMultiplayer);
	bool ChangeRad(float Points, bool BypassMultiplayer);
	void ChangeMaxHP(float Points);
};

// 0xA0 (0xD0 - 0x30)
// Class ChernobylGame.HeroIntepolateTo
class UHeroIntepolateTo : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E86[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHeroIntepolateTo* GetDefaultObj();

	class UHeroIntepolateTo* InterpolatePlayerToTransform(class UObject* WorldContextObject, const struct FTransform& Transform, float InterpolationLengthSeconds);
	class UHeroIntepolateTo* InterpolatePlayerToLocation(class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float InterpolationLengthSeconds, bool DisablePlayerInputOnStart, bool HidePlayerHandsOnStart, bool EnablePlayerInputOnCompleted, bool ShowPlayerHandsOnCompleted, bool EnableCollisionOnCompleted);
};

// 0x0 (0x38 - 0x38)
// Class ChernobylGame.HungryBuff
class UHungryBuff : public UBaseBuff
{
public:

	static class UClass* StaticClass();
	static class UHungryBuff* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.InputFunctionLibrary
class UInputFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UInputFunctionLibrary* GetDefaultObj();

	void UsingKeyboardOrGamepad(bool* bUsingGamepad);
	void IsGamepadConnected(bool* Connected);
	void CountConnectedGamepads(int32* GamepadCount);
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.Interactable
class IInteractable : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInteractable* GetDefaultObj();

	void UnlockInteraction();
	bool SupportsOnlyFocusEvents();
	void SetObjectVisible(bool bVisible);
	void SetInteractionLocked(bool bLocked);
	void OnPlayerNearFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerNearFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnInteractionReleasedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentPlayerWasInteractingWith);
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	float MaxInteractionDistance();
	void LockInteraction();
	bool IsObjectVisible();
	bool IsInteractionUnlocked();
	bool GetSkipChildComponentWhenOverlapping();
	bool GetShouldOverrideMaxInteractionDistance();
	float GetOverrideMaxInteractionDistance();
	float GetNearInteractionDistance();
	float GetFarInteractionDistance();
	class FName GetComponentTagToSkipWhenOverlappingSphere();
	struct FVector2D GetActorInteractionAngle();
};

// 0x8 (0x4E0 - 0x4D8)
// Class ChernobylGame.InteractableStaticMesh
class UInteractableStaticMesh : public UStaticMeshComponent
{
public:
	uint8                                        Pad_3EB2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractableStaticMesh* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class ChernobylGame.InterpolateFloatAsyncNode
class UInterpolateFloatAsyncNode : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Update;                                            // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB7[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterpolateFloatAsyncNode* GetDefaultObj();

	void InterpolateFloatAsyncNodeOutputPin__DelegateSignature(float Current, class UInterpolateFloatAsyncNode* Interpolator);
	class UInterpolateFloatAsyncNode* FInterpToConstantAsync(class UObject* WorldContextObject, float From, float To, float InterpSpeed);
	class UInterpolateFloatAsyncNode* FInterpToAsync(class UObject* WorldContextObject, float From, float To, float InterpSpeed);
	void Abort();
};

// 0x58 (0x88 - 0x30)
// Class ChernobylGame.InterpolateRotatorAsyncNode
class UInterpolateRotatorAsyncNode : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Update;                                            // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EBB[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterpolateRotatorAsyncNode* GetDefaultObj();

	class UInterpolateRotatorAsyncNode* RInterpToConstantAsync(class UObject* Co, const struct FRotator& From, const struct FRotator& To, float InterpSpeed);
	void InterpolateRotatorAsyncNodeOutputPin__DelegateSignature(const struct FRotator& Current, class UInterpolateRotatorAsyncNode* Interpolator);
};

// 0xB0 (0x160 - 0xB0)
// Class ChernobylGame.InventoryComponent2
class UInventoryComponent2 : public UActorComponent
{
public:
	class UDataTable*                            ItemsDT;                                           // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasDisableDropSlots;                              // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EDF[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            InventoryUpdatedDelegate;                          // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InventoryInitializedDelegate;                      // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InventoryAddedDelegate;                            // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FInventoryEntry>               Items;                                             // 0x100(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EE0[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventoryComponent2* GetDefaultObj();

	bool SortBySize();
	void SendUpdateBroadcast();
	void Resize(const struct FVector2D& NewSize);
	bool RemoveUpgrade(const struct FVector2D& Position, class FName Upgrade, int32 StorageID);
	float RemoveAt(const struct FVector2D& Index, float Amount, bool Force, int32 StorageID, bool bSendBroadcast);
	float Remove(class FName ItemId, float Amount, const struct FVector2D& Index, bool Force, int32 StorageID, bool bSendBroadcast);
	void PrintDebug();
	bool IsValidIndex(const struct FVector2D& Index);
	bool IsInventoryInitialized();
	bool HasItemWithInternalId(class FName InternalId);
	TArray<class FName> GetUpgrades(struct FInventoryEntry& Entry);
	struct FVector2D GetSize();
	class FName GetNameByResourceType(enum class EResourceType Type);
	struct FVector2D GetMaxSize();
	struct FInventoryEntry GetItemWithInternalId(class FName InternalId);
	TArray<struct FInventoryEntry> GetItemsWithStorageId(int32 StorageID);
	TArray<struct FInventoryEntry> GetItemsSorted();
	TArray<struct FInventoryEntry> GetItems();
	struct FItemEntry GetItemInfo(class FName Name, bool* IsValid);
	struct FInventoryEntry GetItemAtOrFirst(class FName UniqueId, const struct FVector2D& Index);
	class FName GetInternalItemId(struct FInventoryEntry& Entry);
	bool GetCanBeDropped(const struct FVector2D& Index);
	struct FInventoryEntry GetByIndex(const struct FVector2D& Index, int32 StorageID);
	struct FInventoryEntry GetAnyItemWithUniqueID(class FName UniqueId);
	void FlushItems();
	float CountUID(class FName ItemUID);
	float Count(class FName ItemId);
	bool CheckSpaceAt(class FName ItemId, const struct FVector2D& Index, int32 StorageID);
	bool CheckIfValid();
	float CanAddAt(class FName ItemId, float Amount, const struct FVector2D& Index, int32 StorageID);
	float CanAdd(class FName ItemId, float Amount, const struct FVector2D& Index, int32 StorageID);
	bool AddUpgrade(const struct FVector2D& Position, class FName Upgrade, class FName* UniqueName, int32 StorageID);
	float AddAt(class FName ItemId, const TArray<class FName>& Upgrades, float Amount, const struct FVector2D& Index, int32 StorageID, bool bSendBroadcast);
	float Add(class FName ItemId, const TArray<class FName>& Upgrades, float Amount, const struct FVector2D& Index, int32 StorageID, bool bSendBroadcast, const struct FVector2D& MaxIndex);
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.IObjectWithEnableDisable
class IIObjectWithEnableDisable : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIObjectWithEnableDisable* GetDefaultObj();

	void SetInteractionEnabled(bool bEnabled);
	bool IsInteractionEnabled();
	void InteractionEnabledStateChanged(bool bEnabled);
	void EnableInteraction();
	void DisableInteraction();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.LevelFunctionLibrary
class ULevelFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULevelFunctionLibrary* GetDefaultObj();

	TArray<class FName> GetSublevelsForCurrentPersistant(class UObject* WorldCtx);
	void GetSublevelName(class AActor* InActor, class FString* OutString);
	TArray<class FName> GetLevelNamesFromAssets(const TArray<TSoftObjectPtr<class UWorld>>& Levels);
	class FName GetLevelNameFromAsset(TSoftObjectPtr<class UWorld> Level);
	class FName GetLevelFromActor(class AActor* Actor);
	void GetCurveValue(struct FRuntimeFloatCurve& InCurve, float InX, float* OutY);
	TArray<class FName> GetCurrentStreamedLevels(class UObject* WorldCtx);
	TArray<class AActor*> GetAllActorsFromLevel(TSubclassOf<class AActor> Class, class UObject* WorldCtx, class FName LevelName);
	void CallFunctionOnLevelRoomSystem(class ULevel* InLevel, const class FString& InFunctionName, const struct FRoomLoadInformation& RoomInfo);
	void CallFunctionOnLevel(class ULevelStreaming* InLevel, const class FString& InFunctionName);
};

// 0x30 (0x60 - 0x30)
// Class ChernobylGame.LevelStreamingAsyncNode
class ULevelStreamingAsyncNode : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnComplited;                                       // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF7[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelStreamingAsyncNode* GetDefaultObj();

	class ULevelStreamingAsyncNode* StreamLevelsAsync(class UObject* WorldContextObject, class ALevelStreamingManager* LevelManager, TArray<class FName>& Levels);
	void LevelLoadingFinished(class FName& LevelName);
};

// 0x88 (0x2A8 - 0x220)
// Class ChernobylGame.LevelStreamingManager
class ALevelStreamingManager : public AActor
{
public:
	FMulticastInlineDelegateProperty_            OnLevelLoadCompleteDelegate;                       // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeforeLevelUnloadDelegate;                       // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelUnloadCompleteDelegate;                     // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSettingLevelsCompleteDelegate;                   // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EFE[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALevelStreamingManager* GetDefaultObj();

	void UnloadStreamingLevel(class FName InLevelName);
	void SetStreamingLevels(TArray<class FName>& InLevelNames);
	void LoadStreamingLevel(class FName InLevelName);
	bool IsLevelLoaded(class FName& InLevelName);
	void InternalOnUnloadFinished();
	void InternalOnLoadFinished();
};

// 0x30 (0x60 - 0x30)
// Class ChernobylGame.LevelUnstreamingAsyncNode
class ULevelUnstreamingAsyncNode : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnComplited;                                       // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F06[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelUnstreamingAsyncNode* GetDefaultObj();

	class ULevelUnstreamingAsyncNode* UnstreamLevelsAsync(class UObject* WorldContextObject, class ALevelStreamingManager* LevelManager, TArray<class FName>& Levels);
	void LevelUnloadingFinished(class FName& LevelName);
	void BeforeUnloadingFinished(class FName& LevelName);
};

// 0x0 (0x220 - 0x220)
// Class ChernobylGame.LogTests
class ALogTests : public AActor
{
public:

	static class UClass* StaticClass();
	static class ALogTests* GetDefaultObj();

	void CategoryLogTest();
};

// 0x18 (0x238 - 0x220)
// Class ChernobylGame.LookAtArea
class ALookAtArea : public AActor
{
public:
	uint8                                        Pad_3F08[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBoxComponent*                         BoxCollider;                                       // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDetectionDistance;                              // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F09[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALookAtArea* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.LookAtAreaInterface
class ILookAtAreaInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILookAtAreaInterface* GetDefaultObj();

	void UnlockInteraction();
	void SetInteractionLocked(bool bLocked);
	void OnLookAtStarted();
	void OnLookAtFinished();
	void LockInteraction();
	bool IsInteractionUnlocked();
	float GetMaxDetectionDistance();
};

// 0x10 (0xC0 - 0xB0)
// Class ChernobylGame.MadnessComponent
class UMadnessComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnMadnessValueChanged;                             // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMadnessComponent* GetDefaultObj();

	void UpdateUI();
	bool ModifyMadness(int32 Offset, bool bSkipGodMode);
	float GetMaximumPsycheOverall();
	float GetMaximumPsycheAllowed();
	int32 GetMaximumMadness();
	bool GetIsMadnessModificationEnabled();
	bool GetIsMadnessEnabled();
	float GetCurrentPsyche();
	int32 GetCurrentMadness();
};

// 0xAD0 (0xFE0 - 0x510)
// Class ChernobylGame.MainPawnCpp
class AMainPawnCpp : public ACGCharacter
{
public:
	uint8                                        Pad_3F42[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IPdaInput>            PdaUI;                                             // 0x518(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class ITutorialInput>       TutorialUI;                                        // 0x528(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IQuickUseUI>          QuickMenuUI;                                       // 0x538(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class ICutsceneInput>       CutsceneUI;                                        // 0x548(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IEndGameCreditsInput> EndGameCreditsUI;                                  // 0x558(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class ITrainingPromptInput> TrainingPromptUI;                                  // 0x568(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UCameraComponent*                      FirstPersonCamera;                                 // 0x578(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraComponent*                      SwapCamera;                                        // 0x580(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraComponent*                      CustomSequenceCamera;                              // 0x588(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverheatingFlashlight*                FlashLightSpotLight;                               // 0x590(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USphereComponent*                      InteractableDetectionSphereComponent;              // 0x598(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USphereComponent*                      LookAtAreaDetectionSphereComponent;                // 0x5A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFPAnimSystemQueue*                    AnimSystemQueueComponent;                          // 0x5A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryComponent2*                  InventoryComponent;                                // 0x5B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryComponent2*                  StorageComponent;                                  // 0x5B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpgradeComponent*                     UpgradeComponent;                                  // 0x5C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMiniStorage*                          MiniStorageComponent;                              // 0x5C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuickMenuComponent*                   QuickMenuComponent;                                // 0x5D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrafting*                             CraftingComponent;                                 // 0x5D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHealthComponent2*                     HealthComponent;                                   // 0x5E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArmorComponent*                       ArmorComponent;                                    // 0x5E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMadnessComponent*                     MadnessComponent;                                  // 0x5F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCGCharacterMovementStateMachine*      CharacterMovementStateMachine;                     // 0x5F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                GameplayHands;                                     // 0x600(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  PDAMesh;                                           // 0x608(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBuffManager*                          BuffManager;                                       // 0x610(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticBuffManager*                    StaticBuffManager;                                 // 0x618(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCGLevelTimerComponent*                LevelTimer;                                        // 0x620(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCGVisibilityModifierComponent*        VisibilityModifierComponent;                       // 0x628(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       AUXFakePivot;                                      // 0x630(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                CameraBone;                                        // 0x638(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCGCollisionCheckers*                  CollisionCheckers;                                 // 0x640(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractableDetectionSphereRadius;                 // 0x648(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtAreaDetectionSphereRadius;                   // 0x64C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableInteractionsWithInteractable;               // 0x650(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UActorComponent>        ComponentPlayerIsLookingAt;                        // 0x654(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UActorComponent>        ComponentPlayerIsInteratingWith;                   // 0x65C(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UActorComponent>        ComponentInNearInteractionRange;                   // 0x664(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> FArrayOfPreviouslyVisibleLookAtComponents;         // 0x670(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLookUpInput;                                     // 0x680(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTurnInput;                                       // 0x690(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerBreathIn;                                  // 0x6A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerBreathOut;                                 // 0x6B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDialogueStarted;                                 // 0x6C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDialogueEnded;                                   // 0x6D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDialogueComponent*                    CurrentDialogueSystem;                             // 0x6E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActivation;                                      // 0x6E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMeleeDamageDealt;                                // 0x6F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNonCharacterHit;                                 // 0x708(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHideShowAction;                                  // 0x718(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F4E[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovementMode                     SaveGame_MovementMode;                             // 0x780(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionEnabled                 SaveGame_CapsuleComponentCollisionEnabled;         // 0x781(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F50[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              SaveGame_PlayerControllerControlRotation;          // 0x784(0xC)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         SaveGame_PlayerControllerIgnoreMoveInput;          // 0x790(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SaveGame_PlayerControllerIgnoreLookInput;          // 0x791(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F51[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LastAreaSlotEntered;                               // 0x794(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurrentNPCInDialogueWith;                          // 0x79C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGNPC*                                CurrentNPCInDialogueWithPtr;                       // 0x7A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllInputButMovementDisabled;                      // 0x7B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUserInterfaceDisabledDueToState;                // 0x7B1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F54[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTeleporterCastStart;                             // 0x7C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTeleporterCastEnd;                               // 0x7D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMap<enum class EDirection, class UAkAudioEvent*> FlyBySounds;                                       // 0x7E0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        MaxFlyBySoundDistance;                             // 0x830(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGMusicManager*                       MusicManager;                                      // 0x838(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCGDamageEvent                        LastDamageEvent;                                   // 0x840(0xE0)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShowAmmoUI;                                      // 0x920(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHideAmmoUI;                                      // 0x930(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCustomRadarImageCreated;                         // 0x940(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        SprintTransitionToMediumStatePoint;                // 0x950(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintTransitionToHeavyStatePoint;                 // 0x954(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ESprintWWiseState, class UAkAudioEvent*> WWiseSprintEvents;                                 // 0x958(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F5A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         IsJumpSoundDisabled;                               // 0x9AD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F5B[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bViewInterpolationOn;                              // 0x9B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCrouching;                                      // 0x9BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F5D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CrouchOffset;                                      // 0x9BC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanSetSprint;                                     // 0x9C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSprinting;                                      // 0x9C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInDelayedbuild;                                 // 0x9C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowCrouch;                                      // 0x9C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFPReaction>                   BulletReactions;                                   // 0x9C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCrouchFinished;                                  // 0x9D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMap<class UCGCollisionLimbComponent*, float> LimbsZRelative;                                    // 0x9E8(0x50)(BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        ReactionScale;                                     // 0xA38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHeroCustomAnim_Started;                          // 0xA40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHeroCustomAnim_Finished;                         // 0xA50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bTriggerFootstepLoopEnabled;                       // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDashing;                                        // 0xA61(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F60[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShakeScale;                                        // 0xA64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F61[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFPAnimQuery                          PreCustomAnimState;                                // 0xA70(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bJustLeftPauseMenu;                                // 0xA8C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F63[0x6B];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCombatEntered;                                   // 0xAF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCombatLeft;                                      // 0xB08(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class ACGAICharacter*>                CurrentAggroList;                                  // 0xB18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ACGAICharacter*>                CurrentInterrogationList;                          // 0xB28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ACGAICharacter*>                CurrentChaseList;                                  // 0xB38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class ACGHeroGhost*                          Ghost;                                             // 0xB48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCGVirtuaIndicatorOffsight*            VirtuaCopIndicatorOffsight;                        // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnThreatUpdate;                                    // 0xB58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class ACGAICharacter*, float>           ThreatPerCharacter;                                // 0xB68(0x50)(NativeAccessSpecifierPublic)
	class AActor*                                AimAssistTarget;                                   // 0xBB8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F64[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimAssistMaxDistance;                              // 0xBCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalHipSpreadModifier;                           // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HiddenHipSpreadModifier;                           // 0xBD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAiming;                                         // 0xBD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeutralIsAiming;                                  // 0xBD9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWantsToAim;                                       // 0xBDA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F65[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnShotFired;                                       // 0xBE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bIsReloading;                                      // 0xBF0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReloadingFinished;                              // 0xBF1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F66[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     CurrentClipSize;                                   // 0xBF8(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3F67[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveItemAnimDatabase               FPAnimDatabase;                                    // 0xC50(0x1F0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ACGActiveItem>>     ActiveItemsClasses;                                // 0xE40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class ACGActiveItem*>                 ActiveItems;                                       // 0xE50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGActiveItem>             DefaultActiveItem;                                 // 0xE60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACGActiveItem*                         CurrentlyActiveItem;                               // 0xE68(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACGActiveItem>             PreviousItemClass;                                 // 0xE70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPDAOpened;                                       // 0xE78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPDAClosed;                                       // 0xE88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bIsMelee;                                          // 0xE98(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseMelee;                                      // 0xE99(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldHide;                                       // 0xE9A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldHideFast;                                   // 0xE9B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldShow;                                       // 0xE9C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHideShowFinishedDel;                             // 0xEA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F69[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InteractionTraceLength;                            // 0xEE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            StandardLevelInitializationFinishedDelegate;       // 0xEE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	class UCGOnScreenLog*                        InfluenceWidgetCPP;                                // 0xEF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWantsToSprint;                                    // 0xF00(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            TutorialEnded;                                     // 0xF08(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                         bPressEventCalled;                                 // 0xF18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReleaseEventCalled;                               // 0xF19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bInteactionsVisible;                               // 0xF1A(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bInteractableObjectInNearDistance;                 // 0xF1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         WearingGasMask;                                    // 0xF1C(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGasMaskBroken;                                  // 0xF1D(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AActor*, struct FCGGasProperties> GasVolumesAffectedBy;                              // 0xF20(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6C[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentRadiationDose;                              // 0xFB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FireCurrentDelay;                                  // 0xFB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class ICraftingNewInput>    CraftingActor;                                     // 0xFB8(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IBuildSystemInterface> BuildSystemActor;                                  // 0xFC8(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UDataTable*                            PerksDB;                                           // 0xFD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AMainPawnCpp* GetDefaultObj();

	void UpdatePropertiesFromActiveItem();
	void UpdateCurrentItemLastEntry();
	void UpdateAggro(class ACGAICharacter* InCharacter, bool bInIsAggroed);
	void TryToSwitchAmmo(bool* OutSwitchSucceeded);
	void TryToShoot(bool* OutActivationSucceeded);
	void TryToReload(bool* OutReloadSucceeded);
	bool TryToAim();
	void SwapActiveItem(TSubclassOf<class ACGActiveItem> InNewActiveItemClass, bool* OutSwapSuccessful);
	void ShowHideGameplayHands(bool NewHidden, float SpeedMultiplier);
	void SetWasInteractionWithInteractableExecuted(bool bIsExecuted);
	void SetSkippableCurrentDialogue(bool bInNewSkippable);
	void SetPlayerBreathParameters(float BreathPeriodDuration, float BreathIntensity);
	void SetPDAToggleActivated(bool bIsActivated);
	void SetMovementStateMachineEnabled(bool bInEnabled);
	void SetGameplayHandsAndItemsVisibleTrue();
	void SetGameplayHandsAndItemsVisibleFalse();
	void SetGameplayHandsAndItemsVisible(bool bInVisible);
	void SetFirstPersonCameraFocusCPP(class AActor* InFocusSorce, float PossibleOffset, float GalobalInterpMod, class FName Socket);
	void SetExperienceGainBlocked(bool bIsBlocked);
	void RestartSwayTimeline();
	void ResetCurrentClipSizeCache();
	void ResetCrouch();
	void RequestForcedUncrouch();
	void RemovePerk(class FName PerkName);
	void RemoveInterrogation(class ACGAICharacter* InAI);
	void RemoveAggro(class ACGAICharacter* InAI);
	void ProcessFire(float DeltaTime);
	void PlayReactionShakeABP(struct FFPReaction& InReaction, float InScale);
	void PlayReactionShake(struct FFPReaction& InReaction, float InScale);
	void PlayCutscene(class UMovieSceneSequencePlayer* InSequencePlayer, class AActor* InFakeHeroStart, class AActor* InFakeHeroEnd, const TArray<class ACGAICharacter*>& InSequencerActors, float InHideWeaponAnimScale, float InHeroInterpolationToStartLength, float InCameraInterpolationToStartLength, float InCameraInterpolationToEndLength, float InAICharactersBlendOutLength, bool bInRestore);
	float PlayCustomAnim(class UAnimSequence* InSequence, const struct FTransform& InTransform, const struct FPlayCustomAnimProperties& InProperties, class ACGFakeHero** OutFakeHero, float InBlendInTime, float InBlendInCameraTime, float InBlendOutCameraTime, bool bInShouldInterpolate, bool bInSholdEnableMovementAfter, bool bInShouldApplyGodmodeForDuration, bool bInShouldHideCustomHands, bool bInShouldUncrouch, bool bOldBehavior, bool bOffsetByHalfCapsule);
	void PerformFullQuickSave();
	void PerformCopyQuickSave();
	void OverrideLastDamageEvent(struct FCGDamageEvent& InNewLastDamage);
	bool OpenBuildSystem();
	void OnRadiationPhaseChanged(enum class EHealthPhase InOldPhase, enum class EHealthPhase InNewPhase);
	void OnMeleeActivated();
	void OnHideShowFinished(bool InResult, enum class EFPAnimSystemActivity InTargetState);
	void OnHealthPhaseChanged(enum class EHealthPhase InOldPhase, enum class EHealthPhase InNewPhase, TSubclassOf<class UDamageType> InDamageType);
	void OnGasMaskFilterChanged();
	void OnEndOverlapWithComponent(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnDeath();
	void OnDash(enum class EDashDirection InDirection);
	void OnCustomSequenceFinished();
	void OnCrouch();
	void OnClimb();
	void OnChernobyliteDrugBlendOut();
	void OnBeginOverlapWithComponent(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void MovementStart(TSubclassOf<class ACGMovementState> InInitialMovementState);
	void LevelTimerRanOut();
	bool IsStealthKillEnabled();
	bool IsPlayerWearingGasMask();
	void InvokePauseMenu();
	void HideShowActiveItem(bool* OutActionSuccessful, bool bInFastAction);
	void HideCurrentActiveItem();
	bool HasParkourExpert();
	bool GetWasInteractionWithInteractableExectued();
	TMap<class ACGAICharacter*, float> GetThreatPerCharacter();
	float GetPlayerStamina();
	bool GetPlayerMovementStarted();
	int32 GetNumAvailableGasMaskFilters();
	float GetLeanAxis();
	bool GetIsWWiseMediumOrHeavySprintState();
	bool GetIsPlayerSprinting();
	bool GetIsPDAToggleActivated();
	bool GetIsExperienceGainBlocked();
	void GetHighestThreat(class ACGAICharacter** OutHighestThreatCharacter, float* OutHighestFloat);
	class UMaterialInstanceDynamic* GetGasMaskPostprocessInstanceDynamic();
	enum class EScannableResourceType GetCurrentResourceType();
	TArray<class ACGAICharacter*> GetCurrentAggroList();
	float GetCumulatedVisionAlertModifier();
	struct FCGClimbQuery GetClimbPossibility();
	void FullQueryFinished(enum class EState InQueryInitialItemState, TSubclassOf<class ACGActiveItem> InQueryInitialItemClass);
	void ForceInteractionFinished(class UActorComponent* InComponent);
	class ACGActiveItem* FindActiveItemInInventory(TSubclassOf<class ACGActiveItem> InActiveItemClass);
	void FadeAudioMaster(bool InAudioOn);
	void EnableInteractionsWithInteractable();
	void DropItem(class FName ItemId, float Amount, TArray<class FName>& Upgrades);
	void DisableJumpSound(float Duration, bool OverwriteExisting);
	void DisableInteractionsWithInteractable();
	void DisableFallDamage(bool bInNewDisabled);
	void DialogueShowSkipPrompt();
	void DialogueSetFocues(class AActor* ActorToFocus);
	void DialogueHideSkipPrompt();
	void DialogueEndFocues();
	void DecreaseGasMaskFiltersCount();
	void DebugPsycheModify(float Delta);
	void DamageReceivedReactionCPP(float InDivideScale);
	void Cutscenes_SequenceUpdateHero(float InFloat);
	void Cutscenes_SequenceUpdateCharacters(float InFloat);
	void Cutscenes_SequenceUpdate(float InFloat);
	void Cutscenes_SequenceFinishHero();
	void Cutscenes_SequenceFinishCharacters();
	void Cutscenes_SequenceFinish();
	void Cutscenes_InterpHeroToStartUpdate(float InFloat);
	void Cutscenes_InterpHeroToStartFinish();
	bool CloseInventory();
	void Climb(struct FCGClimbQuery& InQuery);
	bool CheckUncrouchPossibility();
	bool CheckPerk(class FName PerkName, float* ValueA, float* ValueB, bool bReturnOneIfNotFound);
	bool CheckIfBuildSystemIsAbleToOpen();
	bool CheckCrouchPossibility();
	void ChangePsyche_CPP(float Delta);
	void ChangeGasMaskFilter();
	void BroadcastCPP_OnDialogueStarted();
	void BroadcastCPP_OnDialogueEnded();
	bool AreInteractionsWithInteractableEnabled();
	void AddPerkCPP(class FName PerkName);
	bool AddPerk(class FName PerkName);
	void AddInterrogation(class ACGAICharacter* InAI);
	void AddAggro(class ACGAICharacter* InAI);
	void ActiveItem_TryAlternativeActivate(bool* OutActivationSucceeded);
	void ActiveItem_TryActivate(bool* OutActivationSucceeded);
	bool ActiveItem_Melee();
	bool AccessInventory();
};

// 0x20 (0x240 - 0x220)
// Class ChernobylGame.MengerSpongeFractal
class AMengerSpongeFractal : public AActor
{
public:
	class UBoxComponent*                         Root;                                              // 0x220(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Scene;                                             // 0x228(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInstancedStaticMeshComponent*         Fractal;                                           // 0x230(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Iterations;                                        // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeshSize;                                          // 0x23C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AMengerSpongeFractal* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.MiniStorage
class UMiniStorage : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UMiniStorage* GetDefaultObj();

	void Remove(enum class EResourceType Type, float Amount);
	float Count(enum class EResourceType Type);
	void Add(enum class EResourceType Type, float Amount);
};

// 0x80 (0x2A0 - 0x220)
// Class ChernobylGame.MorningActivityManager
class AMorningActivityManager : public AActor
{
public:
	uint8                                        Pad_3F71[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class ACGNPC*>             Companions;                                        // 0x228(0x50)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FCompanionDaysToDie>           CompanionsDays;                                    // 0x278(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	struct FMorningActivityInfo                  LastActivityInfo;                                  // 0x288(0x10)(BlueprintVisible, SaveGame, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int32                                        SleepingOnFloorLastUpdatedOnDay;                   // 0x298(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F72[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMorningActivityManager* GetDefaultObj();

	struct FMorningActivityInfo Update();
	void HideCompanions();
};

// 0x8 (0x4C0 - 0x4B8)
// Class ChernobylGame.NPCBase
class ANPCBase : public ACharacter
{
public:
	uint8                                        Pad_3F73[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANPCBase* GetDefaultObj();

};

// 0xC8 (0x440 - 0x378)
// Class ChernobylGame.OverheatingFlashlight
class UOverheatingFlashlight : public USpotLightComponent
{
public:
	float                                        BatteryLeftPercent;                                // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverheatingSpeedPercentPerSecond;                  // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoverySpeedPercentPerSecond;                     // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarningTreshold;                                   // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBatteryTresholdReached;                          // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBatteryEmpty;                                    // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBatteryFull;                                     // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTurnedOn;                                        // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTurnedOff;                                       // 0x3C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTurnedOnEmpty;                                   // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBatteryChanged;                                  // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         IsOverheated;                                      // 0x3F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpotLightComponent*                   WaterCausticsSpotlight;                            // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7D[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOverheatingFlashlight* GetDefaultObj();

	void UpdateWaterCausticsFlashLight();
	void ToggleTurnedOn(bool Force);
	void SetTurnedOn(bool On, bool Force);
	void OverheatingFlashlightEvent__DelegateSignature(class UOverheatingFlashlight* Object);
	bool IsTurnedOn();
	void FlashlightSetIntensity(float InIntensity);
};

// 0xB8 (0x168 - 0xB0)
// Class ChernobylGame.PassiveDialogueActions
class UPassiveDialogueActions : public UActorComponent
{
public:
	bool                                         ShouldDisable;                                     // 0xB0(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPassiveDialoguePlayFailed;                       // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<enum class EPassiveDialogueSteps, bool> StepsComplitedCycle;                               // 0xC8(0x50)(NativeAccessSpecifierPrivate)
	TMap<enum class EPassiveDialogueSteps, bool> StepsComplited;                                    // 0x118(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPassiveDialogueActions* GetDefaultObj();

	void Update();
	void Stop();
	void Play();
	struct FPassiveDialogueInfo IsDislikedBuildEntityInBase();
	struct FPassiveDialogueInfo IsCompanionInConflict();
	struct FPassiveDialogueInfo IsCompanionHurt();
	struct FPassiveDialogueInfo HasPlayerHaveLowPsyche();
	struct FPassiveDialogueInfo HasPlayerDoneTraining();
	struct FPassiveDialogueInfo HasCompanionLowMorale();
	class ACGNPC* GetNPC();
	void DialogueStepComplited();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.PdaInput
class IPdaInput : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPdaInput* GetDefaultObj();

	void SwitchApp(int32 InAppIndx);
	void OpenMap();
	void OpenApp(int32 InAppIndx);
	void InputZoomUp();
	void InputZoomDown();
	void InputUpDown(float Axis);
	void InputUp();
	void InputUIAccept();
	void InputRUpDown(float Axis);
	void InputRUp();
	void InputRRight();
	void InputRLeftRight(float Axis);
	void InputRLeft();
	void InputRightStick();
	void InputRight();
	void InputRDown();
	void InputR2();
	void InputR1();
	void InputQuickUse8();
	void InputQuickUse7();
	void InputQuickUse6();
	void InputQuickUse5();
	void InputQuickUse4();
	void InputQuickUse3();
	void InputQuickUse2();
	void InputQuickUse1();
	void InputLeftStick();
	void InputLeftRight(float Axis);
	void InputLeft();
	void InputL2();
	void InputL1();
	void InputForceLeave();
	void InputFaceUpReleased();
	void InputFaceUp();
	void InputFaceRightReleased();
	void InputFaceRight();
	void InputFaceLeftReleased();
	void InputFaceLeft();
	void InputFaceDownReleased();
	void InputFaceDown();
	void InputDPadUp();
	void InputDPadRight();
	void InputDPadLeft();
	void InputDPadDown();
	void InputDown();
	void InputClose();
	void InputAssign();
	void ForceDropItem();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.PickableObject
class IPickableObject : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPickableObject* GetDefaultObj();

	void SetItemFromDistributor();
	void SetItemAndAmount(enum class EResourceType Type, float Amount, class UStaticMesh* SM, float BaseAmountValue);
	bool GetItemFromDistributor();
};

// 0x30 (0x60 - 0x30)
// Class ChernobylGame.PlayDialogueCustomPose
class UPlayDialogueCustomPose : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F9D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayDialogueCustomPose* GetDefaultObj();

	class UPlayDialogueCustomPose* PlayDialogueCustomPose(class UObject* InWorldContextObject, TArray<struct FCGCustomDialogueAction>& InCustomDialogueActionArray, float InInterpolationLength);
	void Finish();
};

// 0x48 (0x78 - 0x30)
// Class ChernobylGame.PlayQuickTimeEventNode
class UPlayQuickTimeEventNode : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnProgress;                                        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F9E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuickTimeEvent*                       QuickTimeEvent;                                    // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayQuickTimeEventNode* GetDefaultObj();

	void Update(float Progress);
	class UPlayQuickTimeEventNode* PlayQuickTimeEventRaw(class UObject* WorldContextObject, struct FQuickTimeEventData& QuickTimeEvent, class APlayerController* PlayerController);
	class UPlayQuickTimeEventNode* PlayQuickTimeEvent(class UObject* WorldContextObject, class UQuickTimeEvent* QuickTimeEvent, class APlayerController* PlayerController);
	void GetCurrentPlatformBrush_Raw(struct FSlateBrush* OutBrush, const struct FQuickTimeEventData& EventData);
	void Failed();
	void Completed();
};

// 0xB0 (0xE0 - 0x30)
// Class ChernobylGame.PlaySoundWithSubtitlesAsyncNode
class UPlaySoundWithSubtitlesAsyncNode : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            AudioCreated;                                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FAB[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaySoundWithSubtitlesAsyncNode* GetDefaultObj();

	void ShowSubtitle(class USubtitlesManager* SubtitlesManager, class FText Subtitle, float TimeShown);
	class UPlaySoundWithSubtitlesAsyncNode* PlaySoundAttachedToComponentWithSubtitlesFromAudio(class UObject* WorldContextObject, class USoundWave* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, class FText ActorName, const struct FLinearColor& ActorColor, bool IsWhisper, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, class USoundConcurrency* ConcurrencySettings, class USoundAttenuation* AttenuationSettings);
	class UPlaySoundWithSubtitlesAsyncNode* PlaySoundAtLocationWithSubtitlesFromAudio(class UObject* WorldContextObject, class USoundWave* Sound, class FText ActorName, const struct FLinearColor& ActorColor, const struct FVector& Location, bool IsWhisper, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, class USoundConcurrency* ConcurrencySettings, class USoundAttenuation* AttenuationSettings);
	class UPlaySoundWithSubtitlesAsyncNode* PlaySound2DWithSubtitlesFromAudio(class UObject* WorldContextObject, class USoundWave* Sound, class FText ActorName, const struct FLinearColor& ActorColor, bool IsWhisper, float VolumeMultiplier, float PitchMultiplier, class USoundConcurrency* ConcurrencySettings);
	void ClearNativeEventsBoundToAudioFinished(class UAudioComponent* AudioComponent);
};

// 0x8 (0x40 - 0x38)
// Class ChernobylGame.PoisonDebuff
class UPoisonDebuff : public UBaseBuff
{
public:
	uint8                                        Pad_3FAC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPoisonDebuff* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class ChernobylGame.PrepassQuestActor
class APrepassQuestActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class APrepassQuestActor* GetDefaultObj();

	void Update();
};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.QteUIBase
class UQteUIBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UQteUIBase* GetDefaultObj();

	void UpdateProgress(float ProgressPercent);
	void Finished();
};

// 0x28 (0xD8 - 0xB0)
// Class ChernobylGame.QuickMenuComponent
class UQuickMenuComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            QuickMenuUpdatedDelegate;                          // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            QuickMenuUsedDelegate;                             // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EQuickMenuSlot                    SelectedSlot;                                      // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQuickMenuActive;                                  // 0xD1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUseDisabled;                                    // 0xD2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsQuickUseScrollEnabled;                          // 0xD3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3FBD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQuickMenuComponent* GetDefaultObj();

	bool Use(enum class EQuickMenuSlot Slot);
	void SetQuickUseScrollEnabled(bool bIsEnabled);
	void SetQMenuActive(bool bNewActive);
	bool SetLeaveDuplicates(enum class EQuickMenuSlot Slot, class FName ItemId);
	bool SetFirstFreeSlot(class FName ItemId);
	bool Set(enum class EQuickMenuSlot Slot, class FName ItemId);
	void ResetSelectedSlot();
	void RemoveDuplicates();
	bool GetQuickUseScrollEnabled();
	enum class EQuickMenuSlot GetFirstSlotWithName(class FName Name, bool* OutResult);
	class FName Get(enum class EQuickMenuSlot Slot);
	void EquipItemFromInventory(struct FInventoryEntry& Entry);
	void ClearAllSlots();
};

// 0x240 (0x268 - 0x28)
// Class ChernobylGame.QuickTimeEvent
class UQuickTimeEvent : public UObject
{
public:
	enum class EQTEType                          Type;                                              // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InputName;                                         // 0x2C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IndicatorPC;                                       // 0x40(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IndicatorPS4;                                      // 0xC8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IndicatorXbox;                                     // 0x150(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         CanBeFailedByTimeout;                              // 0x1D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FCA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeBeforeFail;                                    // 0x1DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeFailedByWrongKey;                             // 0x1E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InputActionAllKeys;                                // 0x1E4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Update;                                            // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Failed;                                            // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        ActionInputBindingIndex;                           // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ActionInputBindingIndex2;                          // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ActionInputWrongInput;                             // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AxisInputBindingIndex;                             // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AxisInputBindingIndex2;                            // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        VerticalAxisValue;                                 // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          TimerTimeoutHandle;                                // 0x238(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          FailingTimer;                                      // 0x240(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3FCF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     BoundToPlayer;                                     // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsAxisLocked;                                      // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3FD0[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQuickTimeEvent* GetDefaultObj();

	void UnbindInputs(class APlayerController* PlayerController);
	void StickRotationVertical(float AxisValue);
	void StickRotationHorizontal(float AxisValue);
	void QTEUpdateDelegate__DelegateSignature(float PercentCompleted);
	void QTEFinishedDelegate__DelegateSignature();
	void OnWrongButtonPressed();
	void OnTimeOut();
	void OnFail();
	void HoldButtonTick();
	void HoldButtonStop();
	void HoldButtonStart();
	float GetRemainingTimePercent(class UObject* WorldContextObject);
	float GetRemainingTime(class UObject* WorldContextObject);
	void GetCurrentPlatformBrush(struct FSlateBrush* OutBrush);
	void ButtonPressed();
	void BindInputs(class APlayerController* PlayerController);
	void AxisPressed(float AxisValue);
	void AxisHeld(float AxisValue);
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.QuickUseUI
class IQuickUseUI : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IQuickUseUI* GetDefaultObj();

	void ShowWidget();
	void QUse4();
	void QUse3();
	void QUse2();
	void QUse1();
	void QScrollUp();
	void QScrollDown();
	void QInputEnd();
	void QInputAssign();
	void QEnableScroll();
	void QDisableScroll();
	void QDeclineScroll();
	void QAcceptScroll();
	void HideWidget();
	void Enable();
	void Disable();
};

// 0xD8 (0x2F8 - 0x220)
// Class ChernobylGame.RadarAfterImage
class ARadarAfterImage : public AActor
{
public:
	bool                                         FollowTarget;                                      // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FD6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           AlphaCurve;                                        // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Lifetime;                                          // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3FD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Material;                                          // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UPoseableMeshComponent*, class USkeletalMeshComponent*> SkeletalMeshMapping;                               // 0x240(0x50)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class AActor*                                CopiedActor;                                       // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*              AIParticleSystem;                                  // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3FD9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftObjectPtr<class UPrimitiveComponent>, TSoftObjectPtr<class UPrimitiveComponent>> OldToNewMap;                                       // 0x2A8(0x50)(ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ARadarAfterImage* GetDefaultObj();

	class UParticleSystemComponent* SpawnParticleEffect();
	void RemoveOutline();
	class AActor* GetHeldActor();
	class UMaterialInstanceDynamic* GetDynamicMaterial();
	float GetCurrentLifetime();
	void DestroyParticleEffect();
};

// 0x58 (0x88 - 0x30)
// Class ChernobylGame.RadarHighlightDataAsset
class URadarHighlightDataAsset : public UDataAsset
{
public:
	TMap<TSubclassOf<class AActor>, class UMaterialInterface*> MaterialsUsedByClasses;                            // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FallbackMaterial;                                  // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URadarHighlightDataAsset* GetDefaultObj();

};

// 0x80 (0x2A0 - 0x220)
// Class ChernobylGame.RadarSphere
class ARadarSphere : public AActor
{
public:
	bool                                         ShouldHighlight;                                   // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FDF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           GrowthCurve;                                       // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AActor>>            ClassesOfActorsToFind;                             // 0x230(0x10)(BlueprintVisible, ZeroConstructor, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRadarFoundSomething;                             // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeforeRadarDestroyed;                            // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRadarImageCreated;                               // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FxMaterial;                                        // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    FxMaterialSecond;                                  // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    FxMaterialSoldier;                                 // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AnimationTime;                                     // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bWasAtLastTick;                                    // 0x28C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3FE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CreatedImages;                                     // 0x290(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ARadarSphere* GetDefaultObj();

	void UpdateHighlightsToANewType(class UObject* WorldContextObject);
	class ARadarSphere* SpawnRadarWave(class UObject* WorldContextObject);
	bool RemoveHightlightFromActor(class UObject* WorldContextObject, class AActor* Actor, float* OutCurrentLifetime);
	void RadarSphereDestroyedDelegate__DelegateSignature(class ARadarSphere* Target);
	void RadarImageCreatedDelegate__DelegateSignature(class ARadarSphere* Target, class ARadarAfterImage* RadarImage);
	void RadarDetectionDelegate__DelegateSignature(class ARadarSphere* Target, class AActor* ActorFound);
	class ARadarAfterImage* CreateHighlightForActorStartingAtDuration(class UObject* WorldContextObject, class AActor* Actor, float StartingDuration, bool UseForce);
};

// 0x18 (0x50 - 0x38)
// Class ChernobylGame.RadiationBuff
class URadiationBuff : public UBaseBuff
{
public:
	uint8                                        Pad_3FE3[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URadiationBuff* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.ReportInput
class IReportInput : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IReportInput* GetDefaultObj();

	void InputUpDown(float Axis);
	void InputUp();
	void InputRightStick();
	void InputRight();
	void InputR2Release();
	void InputR2();
	void InputR1();
	void InputLeftRight(float Axis);
	void InputLeft();
	void InputL1();
	void InputFaceUp();
	void InputFaceDown();
	void InputDPadRight();
	void InputDPadLeft();
	void InputDown();
	void InputClose();
	void InputBack();
	void InputAcceptReleased();
	void InputAccept();
};

// 0x58 (0x2B8 - 0x260)
// Class ChernobylGame.ResearchText
class UResearchText : public UUserWidget
{
public:
	TArray<class USelectableTextBase*>           SelectableTexts;                                   // 0x260(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        WordsToSelect;                                     // 0x270(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalWordsToSelect;                                // 0x274(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedCorrectWords;                              // 0x278(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TextSelectionEnabled;                              // 0x27C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FEA[0x3B];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UResearchText* GetDefaultObj();

	void WordSelectedVisualChange(class UBorder* Border);
	void OnSelected(class USelectableTextBase* Caller, bool Correct);
	void FinishTextSelection(bool InPlayerChoosedCorrectly);
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.SaveableObject
class ISaveableObject : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISaveableObject* GetDefaultObj();

	bool ShouldUpdateOverlapsOnLoad();
	void PrepareDataForSave();
	void LoadingFinished();
	bool HasObjectsToSave();
	TArray<class UObject*> GetObjectsToSave();
};

// 0x90 (0x2B0 - 0x220)
// Class ChernobylGame.SaveGameActor
class ASaveGameActor : public AActor
{
public:
	uint8                                        Pad_3FF1[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASaveGameActor* GetDefaultObj();

	bool SaveGameAsync(FDelegateProperty_ Callback, const class FString& SlotName, int32 UserIndex);
	bool SaveGame(const class FString& SlotName, int32 UserIndex);
	bool LoadGame(const class FString& SlotName, int32 UserIndex);
};

// 0x90 (0xB8 - 0x28)
// Class ChernobylGame.SaveGameFormat
class USaveGameFormat : public USaveGame
{
public:
	TArray<struct FSaveUnitActor>                M_ObjectToArchive;                                 // 0x28(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           M_ReferenceMap;                                    // 0x38(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FSaveUnitLevell>               M_Levels;                                          // 0x88(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class FName                                  PlayerPawn;                                        // 0x98(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PlayerController;                                  // 0xA0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HUD;                                               // 0xA8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  M_WorldName;                                       // 0xB0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USaveGameFormat* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.ScannableObject
class IScannableObject : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IScannableObject* GetDefaultObj();

	bool ShouldIgnoreScan();
	bool ShouldBeHightlighted();
	enum class EScannableResourceType GetResourceType();
	TArray<TSoftObjectPtr<class UPrimitiveComponent>> GetMeshesToSkipDuringHighlight();
	TArray<class USkeletalMeshComponent*> GetForcedMeshesToHighlight();
	TArray<class AActor*> GetAdditionalActorsToHighlight();
};

// 0x20 (0x240 - 0x220)
// Class ChernobylGame.SceneCaptureActor
class ASceneCaptureActor : public AActor
{
public:
	uint8                                        Pad_3FF3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                AsyncTextureRenderTarget;                          // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3FF4[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASceneCaptureActor* GetDefaultObj();

};

// 0xC8 (0x328 - 0x260)
// Class ChernobylGame.SelectableTextBase
class USelectableTextBase : public UUserWidget
{
public:
	TArray<class UTextBlock*>                    TextBlocks;                                        // 0x260(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FWordGroup>                    Groups;                                            // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                WordsMapping;                                      // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UBorder*>                       BordersOfTextBlocks;                               // 0x290(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSet<class UBorder*>                         SelectedBorders;                                   // 0x2A0(0x50)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ShouldRespondToClicks;                             // 0x2F0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF9[0x37];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USelectableTextBase* GetDefaultObj();

	void PopulateWordGroups(const class FString& InString, TArray<uint8>* OutWordsMapping, TArray<struct FWordGroup>* OutGroups, TArray<class UTextBlock*>* OutWordsList);
	void CreateTextBlockWidget(class FText& InText, class UTextBlock** OutTextBlock, class UBorder** OutBorder);
	void BroadcastWordSelection(bool InCorrectSelection);
};

// 0x20 (0x280 - 0x260)
// Class ChernobylGame.ShadowPatrolActor
class AShadowPatrolActor : public APatrolActor
{
public:
	TArray<class AShadowPatrolActor*>            NextChernohostPatrols;                             // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ACGShadowTeleportBase*>         NextChernohostTeleports;                           // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AShadowPatrolActor* GetDefaultObj();

	TArray<class ACGShadowTeleportBase*> GetNextCombinedTeleports();
	TArray<class APatrolActor*> GetNextCombinedPatrols();
	TArray<class AActor*> GetClosestTeleportRoute();
	class AActor* FindNextNode();
};

// 0x8 (0x40 - 0x38)
// Class ChernobylGame.StaggerBuff
class UStaggerBuff : public UBaseBuff
{
public:
	uint8                                        Pad_3FFB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStaggerBuff* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.StaticBuffManager
class UStaticBuffManager : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UStaticBuffManager* GetDefaultObj();

	bool RemoveBuff(enum class EStaticBuff Buff);
	bool HaveBuff(enum class EStaticBuff Buff);
	bool AddBuff(enum class EStaticBuff Buff);
};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.SubtitleEntry
class USubtitleEntry : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class USubtitleEntry* GetDefaultObj();

	void SetToRemove();
	void ForceRemoveNow();
};

// 0x0 (0x260 - 0x260)
// Class ChernobylGame.SubtitlesManager
class USubtitlesManager : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class USubtitlesManager* GetDefaultObj();

	bool SubtitlesAreInDebugMode();
	void RemoveWhisperOrSubtitle(class UUserWidget* Whisper);
	class USubtitlesManager* GetSubtitlesManager(class UObject* WorldContextObject);
	void GetSubtitlesFromSoundWave(class USoundWave* SoundWave, TArray<struct FSubtitleCueBP>* OutSubtitleCues);
	class UUserWidget* AddWhisper(class FText& WhisperText, float TimeShown, const struct FLinearColor& TextColor);
	class USubtitleEntry* AddSubtitle(class FText& ActorName, class FText& SubtitleText, float TimeShown, const struct FLinearColor& ActorColor);
	class USubtitleEntry* AddAvatarSubtitle(class FText& ActorName, class FText& SubtitleText, class FName ActorId, float TimeShown, const struct FLinearColor& ActorColor, bool IsPlaceholderText);
};

// 0x8 (0x228 - 0x220)
// Class ChernobylGame.SuperEkstraMegaFractal
class ASuperEkstraMegaFractal : public AActor
{
public:
	class UInstancedStaticMeshComponent*         InstancedStaticMesh;                               // 0x220(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASuperEkstraMegaFractal* GetDefaultObj();

};

// 0xF0 (0x120 - 0x30)
// Class ChernobylGame.SwitchHeroToCustomView
class USwitchHeroToCustomView : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            BodyBlendFinished;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CameraBlendFinished;                               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_400D[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USwitchHeroToCustomView* GetDefaultObj();

	void UncrouchFinished();
	void SwitchHeroToCustomViewOutputPin__DelegateSignature();
	class USwitchHeroToCustomView* FSwitchHeroToGameplayView(class AMainPawnCpp* InHero, const struct FTransform& InBlendToTransform, float InBlendInTime);
	class USwitchHeroToCustomView* FSwitchHeroToCustomView(class AMainPawnCpp* InHero, const struct FTransform& InBlendToTransform, float InBlendInTime, float InBlendInCameraTime, bool bInShouldUncrouch, bool bInNoInputCam);
};

// 0x28 (0x130 - 0x108)
// Class ChernobylGame.TextWithEmbeddedImages
class UTextWithEmbeddedImages : public UWidget
{
public:
	TArray<class UTexture2D*>                    Images;                                            // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  UnparsedText;                                      // 0x118(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTextWithEmbeddedImages* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ChernobylGame.TimedGodmodeBuff
class UTimedGodmodeBuff : public UBaseBuff
{
public:

	static class UClass* StaticClass();
	static class UTimedGodmodeBuff* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ChernobylGame.TimedSlowmoBuff
class UTimedSlowmoBuff : public UBaseBuff
{
public:

	static class UClass* StaticClass();
	static class UTimedSlowmoBuff* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.TrainingPromptInput
class ITrainingPromptInput : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITrainingPromptInput* GetDefaultObj();

	void Up();
	void Select();
	void Down();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.TutorialInput
class ITutorialInput : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITutorialInput* GetDefaultObj();

	void InputBackPressed();
	void InputAcceptReleased();
	void InputAcceptPressed();
	void InputAccept();
};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.UBlueprintInput
class IUBlueprintInput : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUBlueprintInput* GetDefaultObj();

	void InputOpenPDA();
	void InputActivateTutorial();
};

// 0x0 (0xB0 - 0xB0)
// Class ChernobylGame.UpgradeComponent
class UUpgradeComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UUpgradeComponent* GetDefaultObj();

	bool LearnBlueprint(enum class EUpgradeType Type, class FName BlueprintID);
	bool HasUpgrades(class FName ItemId);
	bool HasAvailableUpgrades(class FName ItemId);
	TArray<class FName> GetUpgrades(enum class EUpgradeType Type);
	struct FUpgradeEntry GetUpgradeInfo(enum class EUpgradeType Type, class FName UpradeID, bool* IsVaid);
	struct FCGTriggerProperties GetTriggerAdditionalInfo(enum class EUpgradeType Type, class FName UpgradeID, bool* IsValid);
	TMap<class FName, int32> GetStats(enum class EUpgradeType Type, class FName UpgradeName);
	class UStaticMesh* GetStaticMeshForAnUpgrade(enum class EUpgradeType Type, class FName UpgradeID);
	struct FCGScopeProperties GetScopeAdditionalInfo(enum class EUpgradeType Type, class FName UpgradeID, bool* IsValid);
	struct FCGHandleProperties GetHandleAdditionalInfo(enum class EUpgradeType Type, class FName UpgradeID, bool* IsValid);
	TArray<class FName> GetCraftedUpgrades(enum class EUpgradeType Type);
	TArray<struct FUpgradeCategory> GetCategories(class FName ItemId);
	struct FCGBarrelProperties GetBarrelAdditionalInfo(enum class EUpgradeType Type, class FName UpgradeID, bool* IsValid);
	TArray<class FName> GetAvailableUpgrades(enum class EUpgradeType Type);
	class FName GetAttachmentPointForUpgrade(class FName UpgradeName);
	bool ForgetBlueprint(enum class EUpgradeType Type, class FName BlueprintID);
	void AddCraftedUpgrades(enum class EUpgradeType Type, class FName UpgradeName);
};

// 0x58 (0x88 - 0x30)
// Class ChernobylGame.WaitForLevelUnloadedAsyncNode
class UWaitForLevelUnloadedAsyncNode : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnFullyUnloaded;                                   // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimeOut;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInvalidWorld;                                    // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4032[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle;                                       // 0x80(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaitForLevelUnloadedAsyncNode* GetDefaultObj();

	class UWaitForLevelUnloadedAsyncNode* WaitForLevelUnloadedAsyncNode(class UObject* WorldContextObject, const class FString& LevelName, float CheckInterval, float Timeout);
	void CheckIsUnloaded();
};

// 0x30 (0x60 - 0x30)
// Class ChernobylGame.CrystalGeneratorProperties
class UCrystalGeneratorProperties : public UDataAsset
{
public:
	float                                        DeploymentDelayInSec;                              // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RayDistance;                                       // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewCrystalDelay;                                   // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShowUpVelocity;                                    // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HideVelocity;                                      // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CrystalsMass;                                      // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmudgeWidth;                                       // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4034[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     CustomMaterial;                                    // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           CustomStaticMesh;                                  // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrystalGeneratorProperties* GetDefaultObj();

};

// 0x13B0 (0x1460 - 0xB0)
// Class ChernobylGame.WallCrystalGeneratorComponent
class UWallCrystalGeneratorComponent : public UActorComponent
{
public:
	bool                                         Enabled;                                           // 0xB0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4035[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrystalGeneratorProperties*           Properties;                                        // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4036[0x13A0];                                  // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWallCrystalGeneratorComponent* GetDefaultObj();

};

// 0x4EE0 (0x5100 - 0x220)
// Class ChernobylGame.WallCrystalGenerator
class AWallCrystalGenerator : public AActor
{
public:
	bool                                         Enabled;                                           // 0x220(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4037[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     DecalMaterial;                                     // 0x228(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstance*                     DecalMaterial2;                                    // 0x230(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4038[0x4EC8];                                  // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AWallCrystalGenerator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChernobylGame.WidgetFunctionLibrary
class UWidgetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWidgetFunctionLibrary* GetDefaultObj();

	struct FVector2D ScalePositionByDPI(const struct FVector2D& Position);
};

// 0x0 (0x470 - 0x470)
// Class ChernobylGame.WW3AimAssistCapsuleComponent
class UWW3AimAssistCapsuleComponent : public UCapsuleComponent
{
public:

	static class UClass* StaticClass();
	static class UWW3AimAssistCapsuleComponent* GetDefaultObj();

};

}


