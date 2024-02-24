#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SH.SHActorState
class ISHActorState : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISHActorState* GetDefaultObj();

	bool ShouldNotBeSaved();
	void SetActorState(class FName StateName);
	void OnStateRestored();
	class FName GetActorState();
};

// 0x0 (0x28 - 0x28)
// Class SH.SHOutline
class ISHOutline : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISHOutline* GetDefaultObj();

	void QuestOutline(bool IsHighlighted);
	void Outline(bool IsHighlighted);
};

// 0x18 (0xC8 - 0xB0)
// Class SH.SHNoiseGeneratingComponent
class USHNoiseGeneratingComponent : public UActorComponent
{
public:
	bool                                         bEnabled;                                          // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateOnDamage;                                 // 0xB1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateOnThrowHit;                               // 0xB2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttenuation;                                      // 0xB3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageHitNoise;                                    // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrowHitNoise;                                     // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseRadius;                                       // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugOn;                                          // 0xC0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHNoiseGeneratingComponent* GetDefaultObj();

	void SetNextThrowHit();
	void SetEnabled(bool IsEnabled);
	void OnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	bool GetNextThrowHit();
};

// 0x18 (0x238 - 0x220)
// Class SH.RandomActor
class ARandomActor : public AActor
{
public:
	TArray<struct FTileInfo>                     Maze;                                              // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MazeHeight;                                        // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MazeWidth;                                         // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ARandomActor* GetDefaultObj();

	TArray<struct FTileInfo> GetMap(int32 Height, int32 Width);
};

// 0x1E8 (0x408 - 0x220)
// Class SH.SHItem
class ASHItem : public AActor
{
public:
	uint8                                        Pad_779[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  PickupMesh;                                        // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x238(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FString                                ClassDescriptionKey;                               // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x260(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxStack;                                          // 0x284(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_782[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DurabilitySpawnMin;                                // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurabilitySpawnMax;                                // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RepairCost;                                        // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RepairAvailableMax;                                // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDisassemblable;                                  // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsConsumable;                                      // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUsableOnPartyMate;                               // 0x29A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUsable;                                          // 0x29B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OnUseCooldown;                                     // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEquippable;                                      // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFragile;                                          // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanGenerateQuest;                                 // 0x2A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeQuestTarget;                                 // 0x2A3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredForQuest;                                  // 0x2A4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotRemoveAfterDeath;                            // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USHNoiseGeneratingComponent*           NoiseComponent;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             HitSound;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             DestructionSound;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemRarity                       ItemRarity;                                        // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BasePrice;                                         // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxDropCount;                                      // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HitThreshold;                                      // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Audio;                                             // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalOutlined;                                   // 0x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQuestOutlined;                                    // 0x2E9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPerkOutlined;                                     // 0x2EA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHoldenByPlayer;                                 // 0x2EB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLaunched;                                       // 0x2EC(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLifetimeData                     ItemLifetimeData;                                  // 0x2F0(0x38)(Edit, BlueprintVisible, Net, Transient, RepNotify, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	float                                        DurabilityCache;                                   // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsWeaponMod;                                       // 0x32C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponModifierType               ItemModType;                                       // 0x32D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSecondWeaponMod;                                 // 0x32E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponModifierType               ItemSecondModType;                                 // 0x32F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDraggable;                                       // 0x330(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsGlobalSpawner;                                   // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnIsGlobalSpawnerChanged;                          // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UStaticMesh*                           GlobalSpawnerSpawnedMesh;                          // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           GlobalSpawnerRespawnMesh;                          // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHItem>                   GlobalSpawnerPickupItemClass;                      // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCollectible;                                     // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CollectibleVisibilityTick;                         // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToSpawn;                                     // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cooldown;                                          // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             UseSound;                                          // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             RepairSound;                                       // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             DisassembleSound;                                  // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldBeHighlightedByPerk;                         // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_810[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnItemStateChanged;                                // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ASHEffect>>         OnUseEffectsClasses;                               // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDropComponentsInfo>           DropComponentsInfo;                                // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawned;                                          // 0x3C8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHPlayerCharacter*                    OwnerPlayerCharacter;                              // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                LastThrowInstigator;                               // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToRespawn;                                     // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_826[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AchievementKey;                                    // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AchievementID;                                     // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEquipped;                                         // 0x401(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_842[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RespawnReadyTimeSaveData;                          // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHItem* GetDefaultObj();

	bool Use(class ASHPlayerCharacter* Character);
	bool UpdateCollectibleVisibilityLocalEvent();
	void UpdateCollectibleVisibilityLocal();
	void UpdateCollectibleVisibility();
	bool UnEquip(class ASHPlayerCharacter* Character);
	void SubtractDurability(float Amount);
	void StopRespawnTimer();
	void StartRespawnTimer(float Time);
	void Respawn();
	void RequestItemLifetimeData();
	void QuestOutline(bool IsHighlighted);
	void PlayDestruction();
	bool Pickup(class ASHInventory* Inventory, class ASHPlayerCharacter* Character);
	void PerkOutline(bool IsHighlighted);
	void Outline(bool IsHighlighted);
	void OnUseImplementation(class ASHPlayerCharacter* Character);
	void OnUse(class ASHPlayerCharacter* Character);
	void OnUnEquipImplementation(class ASHPlayerCharacter* Character);
	void OnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnRep_Spawned();
	void OnPickup(class ASHInventory* Inventory, class ASHPlayerCharacter* Character);
	void OnItemLifetimeDataUpdated();
	void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnEquipImplementation(class ASHPlayerCharacter* Character);
	void OnDetach();
	void OnAttach();
	void On_RepLifetimeData();
	void On_CDO_Initialize();
	bool LoadFromSave();
	bool IsPlayerAlreadyHave(class ASHPlayerCharacter* Player);
	bool IsOnCooldown();
	bool IsEquipped();
	bool IsCollectibleVisible();
	int32 GetServerTimeStamp();
	int32 GetPickupItemCount(class ASHInventory* Inventory, class ASHPlayerCharacter* PickupCharacter);
	class ASHPlayerCharacter* GetOwnedPlayerCharacter();
	int32 GetDisassembleMoney(class ASHPlayerCharacter* Character);
	void ForceSendItemLifetimeData(struct FItemLifetimeData& SendData);
	bool Equip(class ASHPlayerCharacter* Character);
	void EnableGlobalSpawner();
	bool Disassemble(class ASHPlayerCharacter* Character, float Money);
	void DisableGlobalSpawner();
	bool CanBeUsed();
	bool CanBeUnEquipped();
	bool CanBeEquipped();
	bool ApplyUseEffects(class ASHPlayerCharacter* Character);
	void AddDurabilityMax(float Amount);
	void AddDurability(int32 Amount);
};

// 0x0 (0x408 - 0x408)
// Class SH.SHBasePerkRewardItem
class ASHBasePerkRewardItem : public ASHItem
{
public:

	static class UClass* StaticClass();
	static class ASHBasePerkRewardItem* GetDefaultObj();

};

// 0x0 (0x408 - 0x408)
// Class SH.SHAbilityRewardItem
class ASHAbilityRewardItem : public ASHBasePerkRewardItem
{
public:

	static class UClass* StaticClass();
	static class ASHAbilityRewardItem* GetDefaultObj();

};

// 0x58 (0x108 - 0xB0)
// Class SH.SHAchievementsComponent
class USHAchievementsComponent : public UActorComponent
{
public:
	struct FAchievementsSaveInfo                 AchievementsSaveInfo;                              // 0xB0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHAICharacter>            NPCBiologistClass;                                 // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHAICharacter>            NPCEngineerClass;                                  // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHAICharacter>            NPCScientistClass;                                 // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHAchievementsComponent* GetDefaultObj();

	void ValidateAchievements();
	void SynchronizePlatinum();
	void ServerOnSuccessfulAchievementComplete(enum class EAchievement Achievement);
	void ServerGiveAchievement(enum class EAchievement Achievement);
	void OnTeleportationArtefactUsed();
	void OnSuccessfulAchievementComplete(enum class EAchievement Achievement);
	void OnPneumoliftUsed();
	void OnKunaiKill();
	void OnGrenadeKill();
	void OnGirlScreamerTriggered();
	void OnFlashbackScreamerTriggered();
	void OnContainerUnlocked();
	void OnAnomalyArtefactCaught();
	void OnAiKilled(enum class EAIAchievementType AIAchievementType);
	void GiveAllAchievements();
	class FName GetAchievementName(enum class EAchievement Achievement);
};

// 0x0 (0x28 - 0x28)
// Class SH.SHObject
class USHObject : public UObject
{
public:

	static class UClass* StaticClass();
	static class USHObject* GetDefaultObj();

	class UWorld* GetOwningWorld();
	class AActor* GetOwningActor();
};

// 0x8 (0x30 - 0x28)
// Class SH.SHAction
class USHAction : public USHObject
{
public:
	uint8                                        Pad_AF2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHAction* GetDefaultObj();

	void Tick(float DeltaTime);
	void PlayStop();
	void PlayStart();
	void PlayInterrupt();
	bool IsPlaying();
	bool CanBePlayed();
	void BeginPlay();
};

// 0x78 (0x128 - 0xB0)
// Class SH.SHActionsComponent
class USHActionsComponent : public UActorComponent
{
public:
	TArray<TSubclassOf<class USHAction>>         AvailableActionClasses;                            // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSubclassOf<class USHAction>, class USHAction*> ActionsMap;                                        // 0xC8(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class USHAction*>                     ReplicatedActions;                                 // 0x118(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USHActionsComponent* GetDefaultObj();

	void StopAction(TSubclassOf<class USHAction> ActionClass);
	void ServerStopAction(TSubclassOf<class USHAction> ActionClass);
	void ServerPlayAction(TSubclassOf<class USHAction> ActionClass);
	void PlayAction(TSubclassOf<class USHAction> ActionClass);
	void OnRep_ReplicatedActions();
	bool IsPlayingAction(TSubclassOf<class USHAction> ActionClass);
	class USHAction* GetAction(TSubclassOf<class USHAction> ActionClass);
};

// 0x10 (0x230 - 0x220)
// Class SH.SHCustomPlayerStart
class ASHCustomPlayerStart : public AActor
{
public:
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UArrowComponent*                       ArrowComponent;                                    // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ASHCustomPlayerStart* GetDefaultObj();

};

// 0x10 (0x240 - 0x230)
// Class SH.SHActivatedPlayerStart
class ASHActivatedPlayerStart : public ASHCustomPlayerStart
{
public:
	uint8                                        Pad_C24[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bActivated;                                        // 0x238(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C27[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHActivatedPlayerStart* GetDefaultObj();

	bool IsActivated();
	void DeactivateSpawnPoint();
	void ActivateSpawnPoint();
};

// 0x80 (0x2A0 - 0x220)
// Class SH.SHAIBossRoom
class ASHAIBossRoom : public AActor
{
public:
	uint8                                        Pad_C9E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHAICharacter*                        BossCharacter;                                     // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHPlayerCharacter*>            OverlappedPlayers;                                 // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHAIBossRoomTrap*>             Traps;                                             // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHAIBossRoomTrap*>             ActiveTraps;                                       // 0x250(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bTrapsInitialized;                                 // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OnePlayerTrapsCount;                               // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TwoPlayersTrapsCount;                              // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThreePlayersTrapsCount;                            // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FourPlayersTrapsCount;                             // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPlayerEnterBossroom;                             // 0x280(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerLeaveBossroom;                             // 0x290(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHAIBossRoom* GetDefaultObj();

	void UpdateBoss();
	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void InitializeBoss();
	void Initialize();
	void DeactivateTraps();
	void ActivateTraps();
};

// 0x20 (0x240 - 0x220)
// Class SH.SHAIBossRoomTrap
class ASHAIBossRoomTrap : public AActor
{
public:
	class ASHAIBossRoom*                         BossRoom;                                          // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x228(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D12[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D18[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHLostControlEffect>      ControlEffectClass;                                // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHAIBossRoomTrap* GetDefaultObj();

	void OnRep_IsActive();
	void OnDeactivateTrap();
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnActivateTrap();
	void DeactivateTrap();
	void ActivateTrap();
};

// 0x4D0 (0x988 - 0x4B8)
// Class SH.SHCharacter
class ASHCharacter : public ACharacter
{
public:
	class FText                                  CharacterName;                                     // 0x4B8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  HeadBoneName;                                      // 0x4D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHInventory>              BagpackInventoryClass;                             // 0x4D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHInventory*                          BackpackInventory;                                 // 0x4E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHCombatManager*                      CombatManager;                                     // 0x4E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHCombatComponent*                    CombatComponent;                                   // 0x4F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Health*                  Health;                                            // 0x4F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalAnimationComponent*           PhysicalAnimation;                                 // 0x500(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePhysicalAnimation;                             // 0x508(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ApplyPhysAnimationBelowBone;                       // 0x50C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ExcludeBelowBones;                                 // 0x518(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PhysicalAnimationProfileName;                      // 0x528(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultPhysicsBlendWeight;                         // 0x530(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInRagdoll;                                        // 0x534(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ControllerYaw;                                     // 0x538(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRunCantStrafe;                                    // 0x53C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCrouchCantStrafe;                                 // 0x53D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInBlock;                                        // 0x53E(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECombatActionType                 CurrentCombatActionType;                           // 0x53F(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttackActionType                 CurrentAttackActionType;                           // 0x540(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugOn;                                          // 0x541(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingLostControlEffect;                       // 0x542(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingWallCollision;                           // 0x543(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSomethingClose;                                 // 0x544(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseNewCombatSystem;                               // 0x545(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FHitReactionInfo, class UAnimMontage*> HitReactionAnimations;                             // 0x548(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F5[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          PostponedMontage;                                  // 0x5B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F7[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPostponeMontage;                                  // 0x5CC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWantsTargeting : 1;                               // Mask: 0x1, PropSize: 0x10x5CD(0x1)(Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsTargeting : 1;                                  // Mask: 0x2, PropSize: 0x10x5CD(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_77 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bIsKicking : 1;                                    // Mask: 0x80, PropSize: 0x10x5CD(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_78 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bIsParring : 1;                                    // Mask: 0x2, PropSize: 0x10x5CE(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsParryWindow : 1;                                // Mask: 0x4, PropSize: 0x10x5CE(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_79 : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bDebugSpartanSkill : 1;                            // Mask: 0x20, PropSize: 0x10x5CE(0x1)(Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebugVikingSkill : 1;                             // Mask: 0x40, PropSize: 0x10x5CE(0x1)(Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInStun : 1;                                       // Mask: 0x80, PropSize: 0x10x5CE(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1103[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bIsDying : 1;                                      // Mask: 0x1, PropSize: 0x10x5D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_7A : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1104[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CorpseLayTime;                                     // 0x5D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RespawnTime;                                       // 0x5D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USHEventsManager*                      EventsManager;                                     // 0x5E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCharacterKilled;                                 // 0x5E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDataTable*                            KillRewardData;                                    // 0x5F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInSafeZone;                                     // 0x600(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1113[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHItemContainer>          DeathContainerClass;                               // 0x608(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHItemContainer*                      DeathContainer;                                    // 0x610(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USHDamageType>>     IgnoredDamageTypes;                                // 0x618(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightWeaponSocket;                                 // 0x628(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeftWeaponSocket;                                  // 0x630(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHWeapon*                             PendingWeapon;                                     // 0x638(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetingSpeedModifier;                            // 0x640(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnomalySlowModifier;                               // 0x644(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPhysicalMaterial*                     HeadPhysMaterial;                                  // 0x648(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bWantsToRun : 1;                                   // Mask: 0x1, PropSize: 0x10x650(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_7B : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1124[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTakeHitInfo                          LastTakeHitInfo;                                   // 0x658(0x128)(Net, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1126[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStartFire;                                       // 0x788(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWeaponEquip;                                     // 0x798(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWeaponUnequipEquip;                              // 0x7A8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class UAnimMontage*                          DeathAnim;                                         // 0x7B8(0x8)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       RespawnFX;                                         // 0x7C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             RespawnSound;                                      // 0x7C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1131[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHWeapon_ThrowingItems>   ThrowingWeaponClass;                               // 0x7E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHWeapon_ThrowingItems*               ThrowingWeapon;                                    // 0x7F0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHWeapon*                             LocalLastWeapon;                                   // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASHWeapon*                             CurrentWeapon;                                     // 0x800(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class ASHWeapon_Kick>            KickWeaponClass;                                   // 0x808(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHWeapon*                             KickWeapon;                                        // 0x810(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KickWeaponSocket;                                  // 0x818(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BattleStanceChangeTimeout;                         // 0x820(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GoIdleTimeout;                                     // 0x824(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1139[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EBattleStanceState                _battleStanceState;                                // 0x830(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_113B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_BattleStanceWait;                               // 0x838(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IKTraceDistance;                                   // 0x840(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IKRootBoneName;                                    // 0x844(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IKHipBoneName;                                     // 0x84C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateRootBone;                                   // 0x854(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1142[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIKFootInfo>                   TraceFeet;                                         // 0x858(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisableIK;                                         // 0x868(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1144[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IKMeshRelativeZ;                                   // 0x86C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              IKRootBoneRotation;                                // 0x870(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        IKMeshZOffset;                                     // 0x87C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IKMeshDropHeight;                                  // 0x880(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1145[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class USHDamageType>>     UnblockableDamageTypes;                            // 0x888(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1146[0xD8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCriticalDamageDealt;                             // 0x970(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        CharacterAttackSize;                               // 0x980(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1149[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHCharacter* GetDefaultObj();

	bool TakeHit(const struct FHitInformation& HitInformation);
	void Suicide();
	void StopWeaponParry();
	void StopWeaponKick();
	void StopWeaponFire();
	void StopWeaponAltFire();
	void StopThrow();
	void StartWeaponParry();
	void StartWeaponKick();
	void StartWeaponFire();
	void StartWeaponAltFire();
	void StartThrow();
	void StartKick();
	void SetWantsThrow(bool bWantsThrow);
	void SetWantsKick(bool bWantsKick);
	void SetWantsFire(bool bWantsFire);
	void SetWantsAltFire(bool bWantsAltFire);
	void SetUpPhysicalAnimationSettings(class FName BoneName);
	void SetupPhysAnimationProfile();
	void SetTargeting(bool bNewTargeting);
	void SetRunning(bool bNewRunning, bool bToggle);
	void SetBattleStanceState(enum class EBattleStanceState DesiredState);
	void ServerSetTargeting(bool bNewTargeting);
	void ServerSetRunning(bool bNewRunning, bool bToggle);
	void ServerSetBattleStanceState(enum class EBattleStanceState DesiredState);
	void ServerEquipWeapon(class ASHWeapon* NewWeapon);
	void ReceiveOnKillSomebody(class ASHCharacter* Somebody);
	void ReceiveAnyDamageCustom(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, bool bDamageBlocked);
	void PushBackOnHit(const struct FVector& MovingDiretion, enum class EHitResult HitResult, enum class EMeleeWeaponType MeleeWeaponType);
	void ProcessHitResponse(const struct FHitInformation& HitInformation);
	void ProcessFeetIK(float DeltaTime);
	void PostponeCurrentMontage(float Seconds);
	float PlayWeaponAnimation(struct FWeaponAnimMontageInfo& AnimationInfo);
	bool PlayStoneHitReaction();
	void PlayHitReactionImpulse(const struct FVector& HitDirection, float DamageTypeImpulse, enum class EMeleeWeaponType MeleeWeaponType, enum class EAttackActionType AttackActionType, class USkeletalMeshComponent* SpecificMesh, class FName HittedBoneName);
	void PlayHitReactionAnimation(const struct FVector& HitDirection, enum class EAttackActionType AttackActionType, enum class EMeleeWeaponType MeleeWeaponType, enum class EDazeType WeaponDazeType, float WeaponDazeChance);
	void OnRep_LastTakeHitInfo();
	void OnRep_KickWeapon();
	void OnRep_CurrentWeapon(class ASHWeapon* LastWeapon);
	void OnRep_BackpackInventory();
	void OnKillSomebody(class ASHCharacter* Somebody);
	void OnHitSomebody(class APawn* Somebody);
	bool OnFootStep();
	void OnFire();
	bool OnDeathEvent();
	void OnDamageDealt(float Damage, class AActor* DamageTarget);
	void OnBackpackReplicated();
	bool KickCanMove();
	bool IsTargeting();
	bool IsRunning();
	bool IsMovingBackwards();
	bool IsInSafeZone();
	bool IsFiring();
	bool IsAlive();
	bool IKFootTrace(float TraceDistance, struct FIKFootInfo* FeetInfo, float DeltaTime);
	class ASHWeapon* GetWeapon();
	float GetTargetingSpeedModifier();
	float GetSquaredDistanceToClosestPlayerCharacter();
	float GetSquaredDistanceToClosestAi();
	float GetSquaredDistanceToCharacter(class ASHCharacter* Character);
	class ASHWeapon* GetKickWeapon();
	class ASHWeapon* GetCurrentWeapon();
	void GetCombatZone(const struct FVector& ObjectLocation, enum class ECombatZone* CombatZone);
	TArray<struct FVector> GetCircularMovementCoordinates(float Radius, int32 Coordinates);
	enum class EBattleStanceState GetBattleStance();
	float GetAnomalySlowModifier();
	struct FRotator GetAimOffsets();
	void FindCombatPosition(enum class ECombatZone CombatZone, const struct FVector& ObjectLocation, struct FVector* CombatPosition, bool* bIsCombatPositionValid);
	void EquipWeapon(class ASHWeapon* Weapon);
	void ClientOnCriticalDamageDealt();
	void CheckCriticalZone(const struct FVector& ObjectLocation, bool* bIsInCriticalZone);
	void CheckCombatZoneAvailability(enum class ECombatZone CombatZone, class ASHCharacter* CharToCheck, bool* bIsCombatZoneAvailable);
	bool CanSetBattleStance(enum class EBattleStanceState DesiredState);
	bool CanParry();
	bool CanKick();
	void CalcRootBoneRotation(float DeltaTime);
	void AnimateBlendWeight();
};

// 0x408 (0xD90 - 0x988)
// Class SH.SHAICharacter
class ASHAICharacter : public ASHCharacter
{
public:
	class USHPlayerStat_Armor*                   Armor;                                             // 0x988(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Shield*                  Shield;                                            // 0x990(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          BlockHitAnim;                                      // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          BlockBrokenAnim;                                   // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          HittedBlockAnim;                                   // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          HittedParryAnim;                                   // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLowerScoreAfterLastHitInSet : 1;                  // Mask: 0x1, PropSize: 0x10x9B8(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsHitted : 1;                                     // Mask: 0x2, PropSize: 0x10x9B8(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWantsEscape : 1;                                  // Mask: 0x4, PropSize: 0x10x9B8(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8A : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EAICombatState                    CurrentCombatState;                                // 0x9B9(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StressValue;                                       // 0x9BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BonusSneakAttackDistance;                          // 0x9C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTakeHitFromOtherAI;                               // 0x9C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMeshRenderCustomDepth;                            // 0x9C5(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1732[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomDepthStencil;                                // 0x9C8(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1735[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAIActionSet>                  ProactiveActionSets;                               // 0x9D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentProactiveActionSetID;                       // 0x9E0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentProactiveActionID;                          // 0x9E4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIActionSet>                  ReactiveActionSets;                                // 0x9E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentReactiveActionSetID;                        // 0x9F8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentReactiveActionID;                           // 0x9FC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentStealthSightRadius;                         // 0xA00(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowStealthSightRadius;                             // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalStealthSightRadius;                          // 0xA08(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HighStealthSightRadius;                            // 0xA0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentSightRadius;                                // 0xA10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowSightRadius;                                    // 0xA14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalSightRadius;                                 // 0xA18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HighSightRadius;                                   // 0xA1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        bAllowedSafeZone;                                  // 0xA20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowHearingRange;                                   // 0xA24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalHearingRange;                                // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HighHearingRange;                                  // 0xA2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentHearingRange;                               // 0xA30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIStates                         State;                                             // 0xA34(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIStates                         PreviousState;                                     // 0xA35(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1759[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCurrentStateChanged;                             // 0xA38(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        PatrolStateMoveSpeed;                              // 0xA48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlertStateMoveSpeed;                               // 0xA4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InspectStateMoveSpeed;                             // 0xA50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackStateMoveSpeed;                              // 0xA54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackStateMeleeMoveSpeed;                         // 0xA58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpecialStateMoveSpeed;                             // 0xA5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondSpecialStateMoveSpeed;                       // 0xA60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThirdSpecialStateMoveSpeed;                        // 0xA64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FourthSpecialStateMoveSpeed;                       // 0xA68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FifthSpecialStateMoveSpeed;                        // 0xA6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EvadeStateMoveSpeed;                               // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeathStateMoveSpeed;                               // 0xA74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StunStateMoveSpeed;                                // 0xA78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroupMovingMoveSpeed;                              // 0xA7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DazedMoveSpeed;                                    // 0xA80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CircularMovementStateMoveSpeed;                    // 0xA84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugAi;                                          // 0xA88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1771[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DefaultThrowItemSocket;                            // 0xA8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1772[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHItem>                   DefaultThrownItemClass;                            // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultThrowItemLifetime;                          // 0xAA0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrowForce;                                        // 0xAA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrowDistance;                                     // 0xAA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReduceThrowForce;                                 // 0xAAC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlindManAchievement;                              // 0xAAD(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1778[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimalNoiseVolume;                                // 0xAB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGroupMovingComplete;                              // 0xAB4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIBehaviorType                   BehaviorType;                                      // 0xAB5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCalculateDistanceToEnemy;                         // 0xAB6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceToEnemyCharacter;                          // 0xAB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClosestDistanceToEnemyCharacter;                   // 0xABC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stamina;                                           // 0xAC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaRegenerationTime;                           // 0xAC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1784[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ARecastNavMesh*                        MyRecastNavMesh;                                   // 0xAD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            MonstrumRewardData;                                // 0xAD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadyToTargetChange;                              // 0xAE0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetChangeCooldown;                              // 0xAE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCanBeDazedNormalAttack;                           // 0xAF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeDazedHeavyAttack;                            // 0xAF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeDazedAIAttackBlocked;                        // 0xAF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1792[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DazeDuration;                                      // 0xAF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1795[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHWeapon_MeleeModificationInfo*       ActiveWeapon_MeleeModificationInfo;                // 0xB00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SoundIntegerParameter;                             // 0xB08(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoopAiDamageScale;                                 // 0xB0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ASHCharacter>>      AllowedEnemies;                                    // 0xB10(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ASHCharacter>>      AllowedFriends;                                    // 0xB20(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AttacksToBecomePlayerEnemy;                        // 0xB30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoopAiHealthScale;                                 // 0xB34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOneShotAlert;                                     // 0xB38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotAttack;                                    // 0xB39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotInspect;                                   // 0xB3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotPatrol;                                    // 0xB3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotSpecial;                                   // 0xB3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotSecondSpecial;                             // 0xB3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotThirdSpecial;                              // 0xB3E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotFourthSpecial;                             // 0xB3F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotFifthSpecial;                              // 0xB40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotGroupMoving;                               // 0xB41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotDazed;                                     // 0xB42(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotStun;                                      // 0xB43(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOneShotCircularMovement;                          // 0xB44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStrongEnemy;                                      // 0xB45(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunAlert;                                        // 0xB46(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunAttack;                                       // 0xB47(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunInspect;                                      // 0xB48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunPatrol;                                       // 0xB49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunSpecial;                                      // 0xB4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunSecondSpecial;                                // 0xB4B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunThirdSpecial;                                 // 0xB4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunFourthSpecial;                                // 0xB4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunFifthSpecial;                                 // 0xB4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunStun;                                         // 0xB4F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunGroupMoving;                                  // 0xB50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunDazed;                                        // 0xB51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunCircularMovement;                             // 0xB52(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunAlert;                                   // 0xB53(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunAttack;                                  // 0xB54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunInspect;                                 // 0xB55(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunPatrol;                                  // 0xB56(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunSpecial;                                 // 0xB57(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunSecondSpecial;                           // 0xB58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunThirdSpecial;                            // 0xB59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunFourthSpecial;                           // 0xB5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunFifthSpecial;                            // 0xB5B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunStun;                                    // 0xB5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunGroupMoving;                             // 0xB5D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunDazed;                                   // 0xB5E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStoneStunCircularMovement;                        // 0xB5F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StunTime;                                          // 0xB60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ModifiedStunTime;                                  // 0xB64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StunCooldown;                                      // 0xB68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStunOnCooldown;                                   // 0xB6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17C7[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCalculateEvade;                                   // 0xB78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpawnPoint;                                        // 0xB7C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               EvadePoint;                                        // 0xB88(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EvadeRadius;                                       // 0xB94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHCharacter*                          EnemyCharacter;                                    // 0xB98(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHAISpawnPoint*                       AISpawnPoint;                                      // 0xBA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHAIDirector*                         AiDirector;                                        // 0xBA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               GroupMovingLocation;                               // 0xBB0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAggroEmotionReady;                                // 0xBBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoPatrolResetAggroEmotionReady;                 // 0xBBD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCalculateAttackMeleeSpeed;                        // 0xBBE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17CF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttackMeleeSpeedRadius;                            // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentAttackStateSpeed;                           // 0xBC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  HeadSocketName;                                    // 0xBC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BackBoneName;                                      // 0xBD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bValidateBack;                                     // 0xBD8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AggroEmotionIgnoreDistance;                        // 0xBDC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bThrowSlowProjectiles;                             // 0xBE0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CloseThrowSlowDistance;                            // 0xBE4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrowSlowDistance;                                 // 0xBE8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrowSlowCooldown;                                 // 0xBEC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASHEffect>                 ThrowSlowClass;                                    // 0xBF0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSlowProjectileReady;                              // 0xBF8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSlowProjectilePlayCharacterReaction;              // 0xBF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSlowProjectileStopCharacter;                      // 0xBFA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSlowProjectileThrowOnCooldown;                    // 0xBFB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17E7[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bApplySlowProjectile;                              // 0xC08(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17E9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HeadBoneIndex;                                     // 0xC18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            HeadSocketLocalTransform;                          // 0xC20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bHeadBoneCached;                                   // 0xC50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDazeDescription>              NormalAttackDazeReactions;                         // 0xC58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDazeDescription>              HeavyAttackDazeReactions;                          // 0xC68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDazeDescription>              AttackBlockDazeReactions;                          // 0xC78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDazeDescription>              BleedingAttackDazeReactions;                       // 0xC88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDazeDescription>              ElectricAttackDazeReactions;                       // 0xC98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDazeDescription>              PoisonAttackDazeReactions;                         // 0xCA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDazeDescription>              FireAttackDazeReactions;                           // 0xCB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDazeDescription>              ForgedAttackDazeReactions;                         // 0xCC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDazeDescription>              IceAttackDazeReactions;                            // 0xCD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBossCharacter;                                  // 0xCE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFractions                        CharacterFraction;                                 // 0xCE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1800[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterFractionWeight;                           // 0xCEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPerkOutlined;                                     // 0xCF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldBeHighlightedByPerk;                         // 0xCF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDodgingAttack;                                    // 0xCF2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1801[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDodgingAttackReady;                               // 0xD00(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1802[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DodgeAttackAngle;                                  // 0xD04(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValidateDodgeAngle;                               // 0xD08(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1805[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DodgeChance;                                       // 0xD0C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DodgingAttackCooldown;                             // 0xD10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1807[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DodgeCounts;                                       // 0xD20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DodgeCountsLeft;                                   // 0xD24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CircularMovementCanMoveCounterClockwise;           // 0xD28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       CircularMovementCoordinates;                       // 0xD30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CircularMovementIndex;                             // 0xD40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCircularMovementClockwise;                        // 0xD44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               NextCircularMovementLocation;                      // 0xD48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCMFirstLocationReached;                           // 0xD54(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1812[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CircularMovementMaxDuration;                       // 0xD58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1813[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CircularMovementChance;                            // 0xD68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CircularMovementCooldown;                          // 0xD6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCircularMovementReady;                            // 0xD70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1815[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CircularMovementRadius;                            // 0xD74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CircularMovementPointsAmount;                      // 0xD78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1816[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAIAchievementType                AIAchievementType;                                 // 0xD88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1818[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHAICharacter* GetDefaultObj();

	float ValidateBackDamage(float Damage, class AActor* DamageCauser);
	void UseStamina(float Value);
	bool UpdateThirdSpecialState(float DeltaTime);
	bool UpdateStunState(float DeltaTime);
	bool UpdateSpecialState(float DeltaTime);
	bool UpdateSecondSpecialState(float DeltaTime);
	bool UpdatePatrolState(float DeltaTime);
	bool UpdateInspectState(float DeltaTime);
	bool UpdateGroupMovingState(float DeltaTime);
	bool UpdateFourthSpecialState(float DeltaTime);
	bool UpdateFifthSpecialState(float DeltaTime);
	bool UpdateEvadeState(float DeltaTime);
	bool UpdateDeathState(float DeltaTime);
	bool UpdateDazedState(float DeltaTime);
	bool UpdateCircularMovementState(float DeltaTime);
	bool UpdateAttackState(float DeltaTime);
	bool UpdateAlertState(float DeltaTime);
	void ThrowDefaultItem();
	bool StunCharacter(class ASHCharacter* Character);
	void StartThrowDefaultItem();
	void StartSlowProjectileThrowCooldown();
	void StartGroupMoving(const struct FVector& TargetLocation);
	void StartDodgingAttackCooldown();
	bool StartDodgingAttack(class UAnimMontage* Montage);
	void StartDazeType(enum class EDazeType DazeType, float Chance);
	void StartDaze(enum class EDazeType DazeType);
	bool StartCircularMovement();
	void SlowProjectileThrowed();
	void SlowProjectileApplied(class ASHCharacter* Character);
	bool SightRadiusChanged();
	void SetState(enum class EAIStates NewState);
	void SetSlowProjectileReady(bool NewValue);
	void SetIsKicking(bool bNewIsKicking);
	void SetEvadePoint(const struct FVector& NewEvadePoint);
	bool SetEnemyCharacter(class ASHCharacter* Character);
	void SetBehaviorType(enum class EAIBehaviorType NewBehaviorType);
	void SetAiDirector(class ASHAIDirector* NewDirector);
	void SetAggroEmotionReady(bool NewValue);
	void ServerThrowItem(class ASHItem* Item);
	void ServerStartThrowDefaultItem();
	bool SensingTakeDamage(class ASHCharacter* Character, bool FromSensor, float Damage);
	bool SensingSeePawn(class APawn* Pawn, bool FromSensor);
	bool SensingHearNoise(float Volume, class AActor* Actor, const struct FVector& Location, float Distance, bool FromSensor);
	void PlaySoundWithIntegerParameter(class USoundCue* Sound, class FName Name);
	void PerkOutline(bool IsHighlighted);
	void Outline(bool bOutline, int32 Stencil);
	bool OnThirdSpecialStateStop();
	bool OnThirdSpecialState();
	bool OnStunStateStop();
	bool OnStunState();
	void OnStunCooldown();
	bool OnStunComplete();
	bool OnStateChanged();
	void OnStaminaCooldown();
	bool OnSpecialStateStop();
	bool OnSpecialState();
	void OnSlowProjectileThrowCooldown();
	bool OnSecondSpecialStateStop();
	bool OnSecondSpecialState();
	void OnRep_MeshRenderCustomDepth();
	bool OnPatrolStateStop();
	bool OnPatrolState();
	bool OnLeaveFlashlight(class ASHFlashLight* Flashlight);
	bool OnInterruptAttackHit();
	bool OnInteractStateStop();
	bool OnInteractState();
	bool OnInspectStateStop();
	bool OnInspectState();
	void OnHearNoise(float Volume, class AActor* Actor, const struct FVector& Location, float Distance);
	bool OnGroupMovingStateStop();
	bool OnGroupMovingState();
	bool OnFourthSpecialStateStop();
	bool OnFourthSpecialState();
	bool OnFifthSpecialStateStop();
	bool OnFifthSpecialState();
	bool OnEvadeStateStop();
	bool OnEvadeState();
	bool OnEnterFlashlight(class ASHFlashLight* Flashlight);
	void OnDodgingAttackCooldown();
	void OnDodgingAttackComplete();
	bool OnDeathStateStop();
	bool OnDeathState();
	bool OnDazeStarted(enum class EDazeType DazeType);
	bool OnDazeEventStarted(class UAnimMontage* DazeMontage);
	bool OnDazedStateStop();
	bool OnDazedState();
	void OnDazeCooldown();
	void OnCircularMovementTimeout();
	bool OnCircularMovementStateStop();
	bool OnCircularMovementState();
	void OnCircularMovementCooldown();
	bool OnAttackStateStop();
	bool OnAttackState();
	bool OnAlertStateStop();
	bool OnAlertState();
	bool IsDodgingAttackValidAngle();
	bool IsDodgingAttackReady();
	bool IsDodgingAttack();
	bool IsCloseToCircularMovementLocation(float SquaredDistance);
	bool IsAllowedFriend(class AActor* TargetActor);
	bool IsAllowedEnemy(class AActor* TargetActor);
	void InterruptDaze();
	bool InitializeCircularMovement();
	struct FRotator GetViewRotation();
	struct FVector GetNextCircularMovementLocation();
	struct FRotator GetHeadRotation();
	class ASHCharacter* GetEnemyCharacter();
	float GetDotToEnemyCharacter();
	bool DoesPathExist(class AActor* TargetActor);
	bool DamageAllowEnemy(class AActor* TargetActor);
	bool CouldSeePawn(class APawn* Other);
	void CompleteGroupMoving();
	bool CanStartStunEvent();
	bool CanStartDazeEvent(enum class EDazeType DazeType);
	bool CanBeOneShotted(class ASHWeapon* Weapon, class AActor* DamageCauser);
	void CalculateNextCircularMovementLocation();
	bool BB_SyncState();
	bool BB_SynchronizeEnemyCharacter();
	bool BB_SyncBehaviorType();
	bool BB_SetSlowProjectileReady();
	bool BB_GroupMovingLocation();
	bool BB_EvadePoint();
	bool BB_AggroEmotionReady();
	bool ApplyStun(class ASHCharacter* EnemyCharacter, bool bFromStone, bool bFromWeaponThrow);
	bool AiSpawnPointUpdated();
	void AIAttack();
};

// 0x58 (0x278 - 0x220)
// Class SH.SHAICombatDirector
class ASHAICombatDirector : public AActor
{
public:
	TMap<class ASHCharacter*, struct FAgentGroup> EnemyToAgents;                                     // 0x220(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        bDebug : 1;                                        // Mask: 0x1, PropSize: 0x10x270(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18C4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHAICombatDirector* GetDefaultObj();

	void UnregisterEnemy(class ASHCharacter* Enemy);
	void UnregisterAIAgent(class ASHAICharacter* Agent);
	void RegisterAIAgent(class ASHAICharacter* NewAgent, class ASHCharacter* Enemy);
};

// 0x0 (0x328 - 0x328)
// Class SH.SHAIController
class ASHAIController : public AAIController
{
public:

	static class UClass* StaticClass();
	static class ASHAIController* GetDefaultObj();

};

// 0xA0 (0x150 - 0xB0)
// Class SH.SHAICustomizationComponent
class USHAICustomizationComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnApplyCustomization;                              // 0xB0(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	float                                        BeardChance;                                       // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BeardIndex;                                        // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USkeletalMesh*>                 Beards;                                            // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairChance;                                        // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HairIndex;                                         // 0xDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USkeletalMesh*>                 Hairs;                                             // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KitChance;                                         // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KitIndex;                                          // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USkeletalMesh*>                 Kits;                                              // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeadMaterialIndex;                                 // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstance*>             HeadMaterials;                                     // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyChance;                                        // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BodyIndex;                                         // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USkeletalMesh*>                 Bodies;                                            // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PantsChance;                                       // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PantsIndex;                                        // 0x13C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USkeletalMesh*>                 Pants;                                             // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHAICustomizationComponent* GetDefaultObj();

	void ApplyCustomization();
};

// 0xA8 (0x2F0 - 0x248)
// Class SH.SHAIDirector
class ASHAIDirector : public ANavigationObjectBase
{
public:
	uint8                                        Pad_194D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnChance;                                       // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSpawnAllowed;                                     // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInitialSpawnAllowed;                              // 0x255(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsQuestSpawn;                                     // 0x256(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bQuestStateActive;                                 // 0x257(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDestroyQuestSpawnedAi;                            // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1953[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActorState;                                        // 0x25C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentWaypointIndex;                              // 0x264(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bGroupDamageSensing;                               // 0x268(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1957[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GroupDamageSensingRadius;                          // 0x26C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bGroupSeeSensing;                                  // 0x270(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1958[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GroupSeeSensingRadius;                             // 0x274(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bGroupHearSensing;                                 // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_195A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GroupHearSensingRadius;                            // 0x27C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCachedAiCharacterDescription> CachedGroup;                                       // 0x280(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ASHAICharacter*>                AiCharacters;                                      // 0x290(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSkipFirstMinimalRadiusCheck;                      // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseSaves;                                         // 0x2A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDontUseSaves;                                     // 0x2A2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1961[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDirectorSaveInfo                   AIDirectorSaveInfoData;                            // 0x2A8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, Protected, NativeAccessSpecifierProtected)
	struct FDeathInfo                            DeathInfo;                                         // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EFractions                        CharacterFraction;                                 // 0x2E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1966[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FractionSpawnAggressionMin;                        // 0x2E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FractionSpawnAggressionMax;                        // 0x2E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1968[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHAIDirector* GetDefaultObj();

	void SetSpawnPointQuestState(bool bNewState);
	void SensingTakeDamage(class ASHAICharacter* AICharacter, class ASHCharacter* Character, bool FromSensor, float Damage);
	void SensingSeePawn(class ASHAICharacter* AICharacter, class APawn* Pawn, bool FromSensor);
	void SensingHearNoise(class ASHAICharacter* AICharacter, float Volume, class AActor* Actor, const struct FVector& Location, float Distance, bool FromSensor);
	int32 GetGroupSize();
};

// 0x18 (0x260 - 0x248)
// Class SH.SHAIEventSpawnPoint
class ASHAIEventSpawnPoint : public ANavigationObjectBase
{
public:
	class USkeletalMeshComponent*                SpawnMesh;                                         // 0x248(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHAICharacter>            DisplayAICharacterClass;                           // 0x250(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHAICharacter*                        SpawnedCharacter;                                  // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHAIEventSpawnPoint* GetDefaultObj();

};

// 0x1D0 (0x4C0 - 0x2F0)
// Class SH.SHAIGroupSpawnPoint
class ASHAIGroupSpawnPoint : public ASHAIDirector
{
public:
	class USkeletalMeshComponent*                Root;                                              // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                Spawn1;                                            // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                Spawn2;                                            // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                Spawn3;                                            // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                Spawn4;                                            // 0x310(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class ASHAICharacter>>    AICharacterClass;                                  // 0x318(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpawnDistanceMin;                                  // 0x328(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpawnDistanceMax;                                  // 0x32C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FailedSpawnTimer;                                  // 0x330(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RespawnTimer;                                      // 0x334(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAlwaysSpawn;                                      // 0x338(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHAIWaypoint*>                 Waypoints1;                                        // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ASHAIWaypoint*>                 Waypoints2;                                        // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ASHAIWaypoint*>                 Waypoints3;                                        // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ASHAIWaypoint*>                 Waypoints4;                                        // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCycleWaypoints;                                   // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAiSpawnType                      AiSpawnType;                                       // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpawnerBehaviorType              SpawnerBehaviorType;                               // 0x382(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19F4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaypointsBehaviorUpdateTime;                       // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClosestDistance;                                   // 0x388(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsCharacterSpawned;                                // 0x38C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnTransform1;                                   // 0x390(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            SpawnTransform2;                                   // 0x3C0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            SpawnTransform3;                                   // 0x3F0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            SpawnTransform4;                                   // 0x420(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTransform>                    CalculatePoints;                                   // 0x450(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ASHAICharacter*>                SpawnedCharacters;                                 // 0x460(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinGroupSize;                                      // 0x470(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxGroupSize;                                      // 0x474(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GroupMovingTime;                                   // 0x478(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHAICharacter*>                DeadCharacters;                                    // 0x480(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A0C[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bGroupMoving;                                      // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReadyToGroupMoving;                               // 0x4B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A13[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeToGroupMove;                                   // 0x4B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bWaypointsInitialized;                             // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A15[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHAIGroupSpawnPoint* GetDefaultObj();

	void UpdateDistance();
	bool UpdateAiCharacters();
	void StopDistanceTimer();
	void StartRespawnTimer(float Time);
	void StartDistanceTimer();
	void RespawnAiCharacters();
	void OnRespawnTimerCallback();
	void OnCharacterDeath(class ASHAICharacter* Character);
	class ASHAIWaypoint* GetCurrentWaypoint(int32 CharacterIndex);
	void DestroyAiCharacter(class ASHAICharacter* Character);
	int32 CalculateGroupSize();
	void CalculateDistance();
};

// 0x18 (0x440 - 0x428)
// Class SH.SHAIInteractionComponent
class USHAIInteractionComponent : public USphereComponent
{
public:
	class ASHAICharacter*                        OwnerCharacter;                                    // 0x428(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A8A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHAIInteractionComponent* GetDefaultObj();

	void UpdatePlayers();
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0xC0 (0x3B0 - 0x2F0)
// Class SH.SHAISpawnPoint
class ASHAISpawnPoint : public ASHAIDirector
{
public:
	class USkeletalMeshComponent*                SpawnMesh;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHAIWaypoint*>                 Waypoints;                                         // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAiSpawnType                      AiSpawnType;                                       // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnerBehaviorType              SpawnerBehaviorType;                               // 0x309(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B07[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaypointsBehaviorUpdateTime;                       // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCycleWaypoints;                                   // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B0A[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnDistanceMin;                                  // 0x328(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpawnDistanceMax;                                  // 0x32C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EvadeRadius;                                       // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClosestDistance;                                   // 0x334(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsCharacterSpawned;                                // 0x338(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHAICharacter*                        SpawnedCharacter;                                  // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASHAICharacter>            AICharacterClass;                                  // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FailedSpawnTimer;                                  // 0x350(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RespawnTimer;                                      // 0x354(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ASHAICharacter*>                DeadCharacters;                                    // 0x358(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B15[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnTransform;                                    // 0x370(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B16[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHAISpawnPoint* GetDefaultObj();

	void UpdateDistance();
	bool UpdateAiCharacter();
	void StopDistanceTimer();
	void StartRespawnTimer(float Time);
	void StartDistanceTimer();
	void RespawnAiCharacter();
	void OnRespawnTimerCallback();
	void OnCharacterDeath(class ASHAICharacter* Character);
	struct FVector GetNextWaypointLocation();
	struct FVector GetNextRandomWaypointLocation();
	void ForceAiRespawn();
	void DestroyAiCharacter(class ASHAICharacter* Character);
	void CalculateDistance();
	bool AiCharacterSpawned(class ASHAICharacter* AICharacter);
};

// 0x0 (0x220 - 0x220)
// Class SH.SHAIWaypoint
class ASHAIWaypoint : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASHAIWaypoint* GetDefaultObj();

};

// 0x18 (0x420 - 0x408)
// Class SH.SHAmmoBox
class ASHAmmoBox : public ASHItem
{
public:
	TSubclassOf<class ASHWeapon_Ammo>            AmmoClass;                                         // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AmmoCount;                                         // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnAmmoCountMin;                                 // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnAmmoCountMax;                                 // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B3E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHAmmoBox* GetDefaultObj();

};

// 0x28 (0x248 - 0x220)
// Class SH.SHAnomaly
class ASHAnomaly : public AActor
{
public:
	uint8                                        Pad_1B99[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHArtefact>               ArtefactClass;                                     // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RespawnReadyTimeSaveData;                          // 0x230(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bisSpawnedSaveData;                                // 0x234(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLoadedSaveData;                                 // 0x235(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnomalyAchievementType           AnomalyAchievementType;                            // 0x236(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnomalyParticleSystemTickUpdateTime;               // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnomalyParticleSystemTickUpdateDistance;           // 0x23C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnomalyParticleSystemTickUpdateDistanceSQRT;       // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHAnomaly* GetDefaultObj();

	void UpdateAnomalyParticleSystemTick();
	void TriggerAchievement(class ASHPlayerController* PlayerController);
	void SaveAnomaly(bool IsSpawned, float RespawnTime);
	void OnSaveLoaded(bool IsLoaded, bool IsSpawned, float RespawnTimeLeft);
	void EnableAnomalyParticleSystem();
	void DisableAnomalyParticleSystem();
};

// 0x28 (0xD8 - 0xB0)
// Class SH.SHAnomalyFishingComponent
class USHAnomalyFishingComponent : public UActorComponent
{
public:
	float                                        ArtefactSpawnChance;                               // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultArtefactSpawnChance;                        // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ConstantRarityItemChance;                          // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NoneRarityItemChance;                              // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CommonRarityItemChance;                            // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UncommonRarityItemChance;                          // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RareRarityItemChance;                              // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LegendaryRarityItemChance;                         // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ArtefactRarityItemChance;                          // 0xD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C49[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHAnomalyFishingComponent* GetDefaultObj();

	bool ShouldSpawnArtefact();
	void LoadSaveData(float SaveInfo);
	bool ItemCatched(class ASHItem* Item);
	float GetSaveData();
};

// 0x68 (0x470 - 0x408)
// Class SH.SHArmor
class ASHArmor : public ASHItem
{
public:
	enum class EArmorType                        ArmorType;                                         // 0x408(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDebuffProperties>             DebuffProperties;                                  // 0x410(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHDebuff*>                     Debuffs;                                           // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHDebuff*>                     AppliedDebuffs;                                    // 0x430(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ASHEffect>>         EffectsClasses;                                    // 0x440(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHEffect*>                     AppliedEffects;                                    // 0x450(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHCharacter*                          MyPawn;                                            // 0x460(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         _initialized;                                      // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CCB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHArmor* GetDefaultObj();

	void OnRep_MyPawn();
	void DetachMeshesMulticast();
	void DetachMeshesLocal();
	void AttachMeshesMulticast();
	void AttachMeshesLocal();
};

// 0x10 (0x480 - 0x470)
// Class SH.SHArmor_Backpack
class ASHArmor_Backpack : public ASHArmor
{
public:
	int32                                        UpgradeSlotCount;                                  // 0x470(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BonusWeight;                                       // 0x474(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         BackpackMesh;                                      // 0x478(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHArmor_Backpack* GetDefaultObj();

};

// 0x8 (0x478 - 0x470)
// Class SH.SHArmor_Hat
class ASHArmor_Hat : public ASHArmor
{
public:
	class USkeletalMesh*                         HatMesh;                                           // 0x470(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHArmor_Hat* GetDefaultObj();

};

// 0xA8 (0x518 - 0x470)
// Class SH.SHArtefact
class ASHArtefact : public ASHArmor
{
public:
	class UParticleSystemComponent*              PickupMeshParticleSystem;                          // 0x470(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FArtifactDebuffProperties>     DebuffProperties1;                                 // 0x478(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FArtifactDebuffProperties>     DebuffProperties2;                                 // 0x488(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FArtifactDebuffProperties>     DebuffProperties3;                                 // 0x498(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FArtifactDebuffProperties>     DebuffProperties4;                                 // 0x4A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FArtifactDebuffProperties>     DebuffProperties5;                                 // 0x4B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FArtifactDebuffProperties>     DebuffProperties6;                                 // 0x4C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FArtifactDebuffProperties>     DebuffProperties7;                                 // 0x4D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FArtifactDebuffProperties>     DebuffProperties8;                                 // 0x4E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FArtifactDebuffProperties>     DebuffProperties9;                                 // 0x4F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FArtifactDebuffProperties>     DebuffProperties10;                                // 0x508(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHArtefact* GetDefaultObj();

	TArray<struct FDebuffProperties> GetPropertiesFor(struct FItemLifetimeData& Data);
	TArray<struct FDebuffProperties> GetCurrentProperties();
	void GeneratePropertiesFor(class ASHPlayerCharacter* Player);
};

// 0x28 (0x50 - 0x28)
// Class SH.SHSpecialMove
class USHSpecialMove : public UObject
{
public:
	float                                        StaminaCost;                                       // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedBySenseiMod;                              // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHCharacter*                          OwnerCharacter;                                    // 0x30(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHPlayerCharacter*                    OwnerPlayerCharacter;                              // 0x38(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DA1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHSpecialMove* GetDefaultObj();

	void Start();
	void ServerStart();
	void MulticastStart();
	bool IsPlaying();
	bool CanBeTerminated();
	bool CanBePlayed();
};

// 0x48 (0x98 - 0x50)
// Class SH.SHAttack_Dodge
class USHAttack_Dodge : public USHSpecialMove
{
public:
	struct FWeaponAnimMontageInfo                LeftAnimation;                                     // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                RightAnimation;                                    // 0x68(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                BackAnimation;                                     // 0x80(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHAttack_Dodge* GetDefaultObj();

	void ServerRight();
	void ServerLeft();
	void ServerBack();
	void MulticastRight();
	void MulticastLeft();
	void MulticastBack();
};

// 0x68 (0xB8 - 0x50)
// Class SH.SHAttack_Rolldown
class USHAttack_Rolldown : public USHSpecialMove
{
public:
	struct FWeaponDetailedAnimMontageInfo        RolldownMontage;                                   // 0x50(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHLostControlEffect>      LostControlClass;                                  // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHAttack_Rolldown* GetDefaultObj();

};

// 0x98 (0xC8 - 0x30)
// Class SH.SHCombatAction
class USHCombatAction : public USHAction
{
public:
	TArray<struct FAttackActionInfo>             Attacks;                                           // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E09[0x78];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                AnimIDs;                                           // 0xB8(0x10)(Net, ZeroConstructor, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USHCombatAction* GetDefaultObj();

	void OnRep_AnimIDs();
	void IncrementAnimID(uint8 AttackID);
	struct FCombatActionAnimSet GetCurrentAnimSet(uint8 AttackID);
};

// 0x38 (0x100 - 0xC8)
// Class SH.SHAttackAction
class USHAttackAction : public USHCombatAction
{
public:
	uint8                                        Pad_1E30[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHAttackAction* GetDefaultObj();

	void UnsetPowerAttack();
	void SetPowerAttack(const struct FWeaponAnimMontageInfo& PowerAnimInfo);
};

// 0x0 (0x308 - 0x308)
// Class SH.SHBaseGameMode
class ASHBaseGameMode : public AGameMode
{
public:

	static class UClass* StaticClass();
	static class ASHBaseGameMode* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class SH.SHBaseScreamer
class ASHBaseScreamer : public AActor
{
public:
	enum class ETimeOfDayType                    TimeOfDayType;                                     // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bScreamerEnabled;                                  // 0x221(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMorningEnabled;                                   // 0x222(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTwilightEnabled;                                  // 0x223(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNightEnabled;                                     // 0x224(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E4B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHBaseScreamer* GetDefaultObj();

};

// 0x0 (0x408 - 0x408)
// Class SH.SHBlankItem
class ASHBlankItem : public ASHItem
{
public:

	static class UClass* StaticClass();
	static class ASHBlankItem* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class SH.SHBlockAction
class USHBlockAction : public USHCombatAction
{
public:
	uint8                                        Pad_1E6B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHBlockAction* GetDefaultObj();

	void OnBlockHit();
	void OnBlockBroken();
};

// 0xD0 (0x4F8 - 0x428)
// Class SH.SHButton
class USHButton : public UButton
{
public:
	class FText                                  Text;                                              // 0x428(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        TextFont;                                          // 0x440(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           TextColorAndOpacity;                               // 0x490(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TextShadowOffset;                                  // 0x4B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextShadowColorAndOpacity;                         // 0x4C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TextMargin;                                        // 0x4D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                CustomStyle;                                       // 0x4E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E88[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHButton* GetDefaultObj();

	void SetTextColorAndOpacity(const struct FSlateColor& Color);
	struct FSlateColor GetTextColorAndOpacity();
};

// 0x8 (0x228 - 0x220)
// Class SH.SHCableActor
class ASHCableActor : public AActor
{
public:
	class USHCableComponent*                     CableComponent;                                    // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHCableActor* GetDefaultObj();

};

// 0x20 (0x4E0 - 0x4C0)
// Class SH.SHCableComponent
class USHCableComponent : public UCableComponent
{
public:
	uint8                                        Pad_1EF9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       SavedParticles;                                    // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHCableComponent* GetDefaultObj();

};

// 0x10 (0x620 - 0x610)
// Class SH.SHCharacterMovementComponent
class USHCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	uint8                                        Pad_1F18[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHCharacterMovementComponent* GetDefaultObj();

	bool CanUnCrouch();
};

// 0x50 (0x100 - 0xB0)
// Class SH.SHCharacterReactionsComponent
class USHCharacterReactionsComponent : public UActorComponent
{
public:
	TArray<struct FCharacterReactionProperties>  Properties;                                        // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPlayerCharacter*                    OwnerCharacter;                                    // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     OwnerController;                                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerCameraManager*                  OwnerCameraManager;                                // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceDistance;                                     // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceRate;                                         // 0xEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F60[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumeCooldown;                                    // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVolumeOnCooldown;                                 // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F66[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHCharacterReactionsComponent* GetDefaultObj();

	void ApplyCharacterReactionVolume(const TArray<struct FCharacterReactionVariant>& Variants);
	void ApplyCharacterReaction(const TArray<struct FCharacterReactionVariant>& Variants);
};

// 0x10 (0x230 - 0x220)
// Class SH.SHCharacterReactionsVolume
class ASHCharacterReactionsVolume : public AActor
{
public:
	TArray<struct FCharacterReactionVariant>     CharacterReactionVariants;                         // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHCharacterReactionsVolume* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class SH.SHChatManager
class ASHChatManager : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASHChatManager* GetDefaultObj();

	void Unstuck(class ASHPlayerController* PlayerController);
	void Teleport(class ASHPlayerController* PlayerController, float X, float Y);
	void Suicide(class ASHPlayerController* PlayerController);
	void StatGameClient(class ASHPlayerController* PlayerController);
	void StatGame(class ASHPlayerController* PlayerController);
	void SkipPrologue(class ASHPlayerController* PlayerController);
	void SkipActiveTasks(class ASHPlayerController* PlayerController);
	void SimulateFractions(class ASHPlayerController* PlayerController);
	void SetTimeOfDay(class ASHPlayerController* PlayerController, float NewTimeOfDay);
	void Menu(class ASHPlayerController* PlayerController);
	void Login(class ASHPlayerController* PlayerController, const class FString& Password);
	void LogFractions(class ASHPlayerController* PlayerController);
	void KillAllAi(class ASHPlayerController* PlayerController);
	void God(class ASHPlayerController* PlayerController);
	void GiveItemsQuest(class ASHPlayerController* PlayerController);
	void GiveItems(class ASHPlayerController* PlayerController);
	void GameDifficulty(class ASHPlayerController* PlayerController);
	void EnableUV(class ASHPlayerController* PlayerController);
	void EnableAiDebug(class ASHPlayerController* PlayerController);
	void DisableUV(class ASHPlayerController* PlayerController);
	void DisableAiDebug(class ASHPlayerController* PlayerController);
};

// 0xB8 (0x528 - 0x470)
// Class SH.SHChestArmor
class ASHChestArmor : public ASHArmor
{
public:
	struct FChestArmorMeshesList                 ChestArmorMeshesList;                              // 0x470(0xB0)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DurabilityTakeHitCost;                             // 0x520(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2038[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHChestArmor* GetDefaultObj();

};

// 0x138 (0x260 - 0x128)
// Class SH.SHCombatComponent
class USHCombatComponent : public USHActionsComponent
{
public:
	TMap<enum class ECombatActionType, TSubclassOf<class USHCombatAction>> AvailableCombatClasses;                            // 0x128(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        ComboDelay;                                        // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208F[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<struct FCombo>                          Combos;                                            // 0x188(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_2090[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHCombatComponent* GetDefaultObj();

	void StopCombatAction(enum class ECombatActionType CombatActionT);
	void ServerStopCombatAction(enum class ECombatActionType CombatActionT);
	void ServerPlayCombatAction(enum class ECombatActionType CombatActionT);
	void ServerInterruptCombatAction(enum class ECombatActionType CombatActionT);
	void PlayCombatAction(enum class ECombatActionType CombatActionT);
	void MulticastStopCombatAction(enum class ECombatActionType CombatActionT);
	void MulticastPlayCombatAction(enum class ECombatActionType CombatActionT);
	void MulticastInterruptCombatAction(enum class ECombatActionType CombatActionT);
	void InterruptCombatAction(enum class ECombatActionType CombatActionT);
	bool CanBePlayed(enum class ECombatActionType CombatActionT);
};

// 0x70 (0x120 - 0xB0)
// Class SH.SHCombatManager
class USHCombatManager : public UActorComponent
{
public:
	float                                        PowerAttackInputDelay;                             // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USHSpecialMove>            RolldownClass;                                     // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHSpecialMove>            DodgeClass;                                        // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHMeleeAttack>            FromJumpAttackClass;                               // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHCharacter*                          OwnerCharacter;                                    // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASHPlayerCharacter*                    OwnerPlayerCharacter;                              // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASHWeapon_MeleeBase*                   CharacterMeleeWeapon;                              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USHMeleeAttack*                        CurrentMeleeAttack;                                // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USHSpecialMove*                        CurrentSpecialMove;                                // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20C3[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USHSpecialMove*                        RolldownInstance;                                  // 0x110(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USHSpecialMove*                        DodgeInstance;                                     // 0x118(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USHCombatManager* GetDefaultObj();

	void TerminateAll();
	void StopWeaponFire();
	void StopWeaponAltFire();
	void StopSpartanAttack();
	void StartWeaponFire();
	void StartWeaponAltFire();
	void StartSpartanAttack();
	void OnStopThrow();
	void OnStartThrow();
	void OnCharacterWeaponChanged();
	bool MakeRolldown();
	bool MakeFromStealth(class ASHCharacter* Target);
	bool MakeDodge();
	bool CanBePlayed(enum class EMeleeAttackType Type);
};

// 0x98 (0x148 - 0xB0)
// Class SH.SHCraftComponent
class USHCraftComponent : public UActorComponent
{
public:
	uint8                                        Pad_217B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CraftRecipesData;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftRequiredEquipment           CurrentCraftEquipment;                             // 0xC8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_217C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECraftRequiredEquipment>   ActiveCraftEquipments;                             // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransmutationExpertCurrentValue;                   // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransmutationExpertModifiedValue;                  // 0xE4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransmutationMasterCurrentValue;                   // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransmutationMasterModifiedValue;                  // 0xEC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScavengerExpertCurrentValue;                       // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScavengerExpertModifiedValue;                      // 0xF4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScavengerMasterCurrentValue;                       // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScavengerMasterModifiedValue;                      // 0xFC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkillDisassembleItemsCurrentValue;                 // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2181[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemDurabilityPerCraft;                            // 0x104(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ASHProjectileItem>> DemomanIllusionistItems;                           // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContextString;                                     // 0x118(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FRecipeLearnKey>               LearnedRecipes;                                    // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHPlayerCharacter*                    OwnerPlayerCharacter;                              // 0x138(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCraftMasterOneLearned;                            // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCraftMasterTwoLearned;                            // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocksmithLearned;                                 // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDemomanIllusionistLearned;                        // 0x143(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2189[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHCraftComponent* GetDefaultObj();

	void UnLearnRecipeByKey(const struct FRecipeLearnKey& Key);
	void UnLearnRecipe(int32 RecipeID);
	void ServerCraftModForSlot(class USHInventorySlot* Slot, int32 RecipeID);
	void ServerCraft(int32 RecipeID, int32 Count);
	bool RequiredCraftingToolFor(int32 RecipeID);
	void OnUnlearnAllSkills();
	void OnTransmutationMasterSkillLearned();
	void OnTransmutationExpertSkillLearned();
	void OnScavengerMasterSkillLearned();
	void OnScavengerExpertSkillLearned();
	void OnRep_LearnedRecipes();
	void OnRemoveCraftZone(enum class ECraftRequiredEquipment CraftRequiredEquipment);
	void OnDisassembleItemsSkillLearned();
	void OnAddCraftZone(enum class ECraftRequiredEquipment CraftRequiredEquipment);
	void LoadSaveData(const TArray<struct FRecipeLearnKey>& SaveInfo);
	void LearnRecipeByKey(const struct FRecipeLearnKey& Key, bool HideNotify);
	void LearnRecipe(int32 RecipeID, bool HideNotify);
	bool IsRecipeLearnedByKey(const struct FRecipeLearnKey& Key);
	bool IsRecipeLearned(int32 RecipeID);
	int32 HaveWeaponsFor(int32 RecipeID);
	bool HaveSpaceFor(int32 RecipeID);
	int32 HaveCraftingToolsFor(int32 RecipeID);
	int32 HaveComponentsFor(int32 RecipeID);
	float GetTransmutationChance();
	TArray<struct FRecipeLearnKey> GetSaveData();
	struct FCraftRecipeData GetRecipe(int32 RecipeID, bool* Result);
	float GetDisassembleBonusModifier();
	float GetDetailsPriceModifier();
	class ASHInventory* GetCharacterInventory();
	TArray<int32> GetAllLearnedRecipes();
	bool CraftModForSlot(class USHInventorySlot* Slot, int32 RecipeID);
	bool Craft(int32 RecipeID, int32 Count);
	bool CanDisassemble();
	int32 CanCraftModForSlot(int32 RecipeID, class USHInventorySlot* Slot);
	int32 CanCraft(int32 RecipeID);
};

// 0x8 (0x228 - 0x220)
// Class SH.SHCraftEquipmentVolume
class ASHCraftEquipmentVolume : public AActor
{
public:
	enum class ECraftRequiredEquipment           CraftEquipment;                                    // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHCraftEquipmentVolume* GetDefaultObj();

	void PlayerLeave(class ASHPlayerCharacter* Character);
	void PlayerEnter(class ASHPlayerCharacter* Character);
	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// 0x8 (0x410 - 0x408)
// Class SH.SHCraftingTool
class ASHCraftingTool : public ASHItem
{
public:
	bool                                         bInfiniteDurability;                               // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHCraftingTool* GetDefaultObj();

};

// 0x38 (0x258 - 0x220)
// Class SH.SHCraftTable
class ASHCraftTable : public AActor
{
public:
	uint8                                        Pad_21B0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  CraftTableMesh;                                    // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftTableState                  CurrentState;                                      // 0x230(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftRequiredEquipment           CurrentCraftEquipment;                             // 0x231(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftRequiredEquipment           LastCurrentCraftEquipment;                         // 0x232(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftTableState                  DefaultState;                                      // 0x233(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftTableState                  MaximumState;                                      // 0x234(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           BrokenStateMesh;                                   // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           NormalStateMesh;                                   // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           UpgradedStateMesh;                                 // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftRequiredEquipment           BrokenVolumeType;                                  // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftRequiredEquipment           NormalVolumeType;                                  // 0x251(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftRequiredEquipment           UpgradedVolumeType;                                // 0x252(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoaded;                                           // 0x253(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21B6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHCraftTable* GetDefaultObj();

	void UpdateCraftTableMesh();
	void UpdateCraftEquipment();
	void SetState(enum class ECraftTableState NewState);
	void OnUpdateCraftTable();
	void OnRep_CurrentState();
	void OnCraftRequiredEquipmentUpdated();
	void IncreaseState();
};

// 0x88 (0xB8 - 0x30)
// Class SH.SHCreateSessionCallbackProxy
class USHCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                GameName;                                          // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C2[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHCreateSessionCallbackProxy* GetDefaultObj();

	class USHCreateSessionCallbackProxy* CreateSessionWithSettings(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN, const class FString& GameName, const class FString& Password);
};

// 0x0 (0x28 - 0x28)
// Class SH.SHEvent
class USHEvent : public UObject
{
public:

	static class UClass* StaticClass();
	static class USHEvent* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class SH.SHCuringEvent
class USHCuringEvent : public USHEvent
{
public:
	enum class ECuringType                       CuringType;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHCuringEvent* GetDefaultObj();

	class USHCuringEvent* CreateCuringEvent(enum class ECuringType NewCuringType, class AActor* OwnerActor);
};

// 0xD0 (0x180 - 0xB0)
// Class SH.SHCustomizationComponent
class USHCustomizationComponent : public UActorComponent
{
public:
	TArray<struct FMorphCategoryList>            Morphs;                                            // 0xB0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmotionsChance;                                    // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMorphCategoryList>            Emotions;                                          // 0xC8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationItem>            Hairs;                                             // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationItem>            Mustaches;                                         // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationItem>            Eyes;                                              // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  EyeColors;                                         // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  HairColors;                                        // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationItem>            Faces;                                             // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         HatMesh;                                           // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              HairsDynamicMaterial;                              // 0x140(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              MustachesDynamicMaterial;                          // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              FaceDynamicMaterial;                               // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              EyeDynamicMaterial;                                // 0x158(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HairIndex;                                         // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HairColorIndex;                                    // 0x164(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MustacheIndex;                                     // 0x168(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EyesIndex;                                         // 0x16C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EyeColorIndex;                                     // 0x170(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FaceIndex;                                         // 0x174(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Age;                                               // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2203[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHCustomizationComponent* GetDefaultObj();

	void SetMustacheIndex(int32 Index);
	void SetHatMesh(class USkeletalMesh* NewMesh);
	void SetHairIndex(int32 Index);
	void SetHairColorsIndex(int32 Index);
	void SetFaceIndex(int32 Index);
	void SetEyeIndex(int32 Index);
	void SetEyeColorsIndex(int32 Index);
	void SetAge(float NewAge);
	void ApplyMorphs();
	void ApplyCustomization();
};

// 0x10 (0x50 - 0x40)
// Class SH.SHDamageType
class USHDamageType : public UDamageType
{
public:
	class UForceFeedbackEffect*                  HitForceFeedback;                                  // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UForceFeedbackEffect*                  KilledForceFeedback;                               // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHDamageType* GetDefaultObj();

	enum class EDamageType GetDamageType(class UDamageType* DamageType);
};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_AggrWorldEvent
class USHDamageType_AggrWorldEvent : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_AggrWorldEvent* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Anomaly
class USHDamageType_Anomaly : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Anomaly* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Bleeding
class USHDamageType_Bleeding : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Bleeding* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Melee
class USHDamageType_Melee : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Melee* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Butcher
class USHDamageType_Butcher : public USHDamageType_Melee
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Butcher* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Explode
class USHDamageType_Explode : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Explode* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Fall
class USHDamageType_Fall : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Fall* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_GrutchSpecial
class USHDamageType_GrutchSpecial : public USHDamageType_Melee
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_GrutchSpecial* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Kick
class USHDamageType_Kick : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Kick* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MadmanSpecial
class USHDamageType_MadmanSpecial : public USHDamageType_Melee
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MadmanSpecial* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeBleeding
class USHDamageType_MeleeBleeding : public USHDamageType_Melee
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeBleeding* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeElectric
class USHDamageType_MeleeElectric : public USHDamageType_Melee
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeElectric* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeFire
class USHDamageType_MeleeFire : public USHDamageType_Melee
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeFire* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeForged
class USHDamageType_MeleeForged : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeForged* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeIce
class USHDamageType_MeleeIce : public USHDamageType_Melee
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeIce* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeMod
class USHDamageType_MeleeMod : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeMod* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeModBleeding
class USHDamageType_MeleeModBleeding : public USHDamageType_MeleeMod
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeModBleeding* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeModElectric
class USHDamageType_MeleeModElectric : public USHDamageType_MeleeMod
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeModElectric* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeModFire
class USHDamageType_MeleeModFire : public USHDamageType_MeleeMod
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeModFire* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeModForged
class USHDamageType_MeleeModForged : public USHDamageType_MeleeMod
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeModForged* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeModIce
class USHDamageType_MeleeModIce : public USHDamageType_MeleeMod
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeModIce* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleeModPoison
class USHDamageType_MeleeModPoison : public USHDamageType_MeleeMod
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleeModPoison* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_MeleePoison
class USHDamageType_MeleePoison : public USHDamageType_Melee
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_MeleePoison* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Molotov
class USHDamageType_Molotov : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Molotov* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Oxygen
class USHDamageType_Oxygen : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Oxygen* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Physical
class USHDamageType_Physical : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Physical* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Poisoning
class USHDamageType_Poisoning : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Poisoning* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_QTE
class USHDamageType_QTE : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_QTE* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_QTE_Bleeding
class USHDamageType_QTE_Bleeding : public USHDamageType_QTE
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_QTE_Bleeding* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_QTE_Burning
class USHDamageType_QTE_Burning : public USHDamageType_QTE
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_QTE_Burning* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_QTE_Poisoning
class USHDamageType_QTE_Poisoning : public USHDamageType_QTE
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_QTE_Poisoning* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_QTE_Shocking
class USHDamageType_QTE_Shocking : public USHDamageType_QTE
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_QTE_Shocking* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_QTE_SpecialMob
class USHDamageType_QTE_SpecialMob : public USHDamageType_QTE
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_QTE_SpecialMob* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Rifle
class USHDamageType_Rifle : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Rifle* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_RifleFire
class USHDamageType_RifleFire : public USHDamageType_Rifle
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_RifleFire* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Stone
class USHDamageType_Stone : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Stone* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Thermal
class USHDamageType_Thermal : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Thermal* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_Throw
class USHDamageType_Throw : public USHDamageType
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_Throw* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_ThrowBleeding
class USHDamageType_ThrowBleeding : public USHDamageType_Throw
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_ThrowBleeding* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_ThrowElectric
class USHDamageType_ThrowElectric : public USHDamageType_Throw
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_ThrowElectric* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_ThrowFire
class USHDamageType_ThrowFire : public USHDamageType_Throw
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_ThrowFire* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_ThrowIce
class USHDamageType_ThrowIce : public USHDamageType_Throw
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_ThrowIce* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_ThrowPoison
class USHDamageType_ThrowPoison : public USHDamageType_Throw
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_ThrowPoison* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class SH.SHDamageType_VanogaPuke
class USHDamageType_VanogaPuke : public USHDamageType_Melee
{
public:

	static class UClass* StaticClass();
	static class USHDamageType_VanogaPuke* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SH.SHDayNightInterface
class ISHDayNightInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISHDayNightInterface* GetDefaultObj();

	bool OnTimeOfDayTwilight();
	bool OnTimeOfDayNight();
	bool OnTimeOfDayMorning();
};

// 0x8 (0x30 - 0x28)
// Class SH.SHDebuff
class USHDebuff : public USHEvent
{
public:
	enum class EPlayerStatModificator            PlayerStatMod;                                     // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22AF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHDebuff* GetDefaultObj();

};

// 0x18 (0x240 - 0x228)
// Class SH.SHDecalActor
class ASHDecalActor : public ADecalActor
{
public:
	class FText                                  DecalText;                                         // 0x228(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHDecalActor* GetDefaultObj();

};

// 0x130 (0x350 - 0x220)
// Class SH.SHEffect
class ASHEffect : public AActor
{
public:
	class FText                                  Name;                                              // 0x220(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  ClassDescription;                                  // 0x238(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x250(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        ApplyChance;                                       // 0x268(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDebuffProperties>             DebuffProperties;                                  // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHDebuff*>                     Debuffs;                                           // 0x280(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHDebuff*>                     AppliedDebuffs;                                    // 0x290(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       Blendables;                                        // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundCue*>                     Sounds;                                            // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTraumaProperties>             Trauma;                                            // 0x2C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundCue*>                     OnStartSounds;                                     // 0x2D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharacterReactionVariant>     CharacterReactionVariants;                         // 0x2E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDelayFirstDamageTick;                             // 0x2F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TickTime;                                          // 0x2F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamagePerTick;                                     // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PsyDamagePerTick;                                  // 0x2FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealPerTickFlat;                                   // 0x300(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealPerTickPercent;                                // 0x304(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHDamageType>             DamageTypeClass;                                   // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHPlayerCharacter*                    OwnerCharacter;                                    // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUnique;                                           // 0x328(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LifeTime;                                          // 0x32C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EffectStartTime;                                   // 0x330(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseSave;                                          // 0x334(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDestroyOnFinish;                                  // 0x335(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         _initialized;                                      // 0x336(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22D5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAudioComponent*>               ActiveAudioComponents;                             // 0x338(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         _running;                                          // 0x348(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22D7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHEffect* GetDefaultObj();

	bool UseSave();
	void UpdateLifeTime(float NewLifeTime);
	void Stop();
	void Start();
	void SetRunningValue(bool NewRunning);
	void SetRunning(bool NewRunning);
	void OnRep_Running();
	bool IsUnique();
	bool IsRunning();
	float GetLifeTime();
	float GetEffectStartTime();
	class ASHEffect* CreateEffect(TSubclassOf<class ASHEffect> EffectClass, class AActor* OwnerActor);
};

// 0x8 (0x358 - 0x350)
// Class SH.SHDisease
class ASHDisease : public ASHEffect
{
public:
	enum class EDiseaseType                      DiseaseType;                                       // 0x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHDisease* GetDefaultObj();

};

// 0x8 (0x358 - 0x350)
// Class SH.SHEffect_Buff
class ASHEffect_Buff : public ASHEffect
{
public:
	enum class EEffectBuffType                   BuffType;                                          // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHEffect_Buff* GetDefaultObj();

};

// 0x10 (0x360 - 0x350)
// Class SH.SHEffect_HealOverTime
class ASHEffect_HealOverTime : public ASHEffect
{
public:
	float                                        WorkTime;                                          // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealAmount;                                        // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHEffect_HealOverTime* GetDefaultObj();

};

// 0x90 (0x140 - 0xB0)
// Class SH.SHEffectsManager
class USHEffectsManager : public UActorComponent
{
public:
	uint8                                        Pad_22FF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHEffect*>                     _activeEffects;                                    // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ASHDisease*>                    AllDiseases;                                       // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHCharacter*                          OwnerCharacter;                                    // 0xD8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2301[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       ActiveBlendables;                                  // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USHEffectsManager* GetDefaultObj();

	bool RemoveEffect(class ASHEffect* Effect);
	bool HaveDisease();
	TArray<class ASHDisease*> GetAllDiseases();
	TArray<class ASHEffect*> GetActiveEffects();
	bool ClientRemoveEffect(class ASHEffect* Effect);
	bool ClientAddEffect(class ASHEffect* Effect);
	bool AddEffect(class ASHEffect* Effect);
};

// 0x50 (0x270 - 0x220)
// Class SH.SHEnvironment
class ASHEnvironment : public AActor
{
public:
	float                                        DefaultTimeOfDay;                                  // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDelayedAnimateDayNightCycle;                      // 0x224(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2327[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeOfDay;                                         // 0x228(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerTimeStamp;                                   // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ServerTimeStampTick;                               // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2329[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorldEventSkyColor;                                // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DayLength;                                         // 0x23C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeOfDayType                    TimeOfDayType;                                     // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECycleType                        CycleType;                                         // 0x241(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeOfDayType                    LastTimeOfDayType;                                 // 0x242(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnimateDayNightCycle;                              // 0x243(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RandomInitialTimeOfDay;                            // 0x244(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeatherType                      LocalWeather;                                      // 0x245(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeatherType                      LastInitializedLocalWeather;                       // 0x246(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideGlobalWeather;                            // 0x247(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeatherType                      GlobalWeather;                                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_232A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GlobalWeatherDuration;                             // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkyStressEventActive;                             // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEffectsStressEventActive;                         // 0x251(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQuestStressEventActive;                           // 0x252(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_232D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTimeSkip;                                        // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_232E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHEnvironment* GetDefaultObj();

	void UpdateDayNightInterface(class AActor* Actor);
	float TimeOfDayIntoRange();
	void StopQuestStressEvent();
	void StopGlobalWeather();
	void StartQuestStressEvent();
	void StartLocalWeatherBlueprintEvents();
	void StartGlobalWeather(enum class EWeatherType NewWeather, float Duration);
	void ServerDoRest(float Hours);
	void PendingTimeSkip(int32 Hours);
	bool OnWorldEventSkyColorUpdated();
	bool OnToxicRainWeatherStop();
	bool OnToxicRainWeatherStart();
	bool OnTimeOfDayTypeChange();
	bool OnSnowWeatherStop();
	bool OnSnowWeatherStart();
	bool OnSmallRainWeatherStop();
	bool OnSmallRainWeatherStart();
	bool OnSkyStressEventStopped();
	bool OnSkyStressEventStarted();
	void OnRep_WorldEventSkyColor();
	bool OnQuestStressEventStopped();
	bool OnQuestStressEventStarted();
	bool OnNoneWeatherStop();
	bool OnNoneWeatherStart();
	bool OnMediumRainWeatherStop();
	bool OnMediumRainWeatherStart();
	bool OnFogWeatherStop();
	bool OnFogWeatherStart();
	bool OnEffectsStressEventStopped();
	bool OnEffectsStressEventStarted();
	void OnCycleTypeChange();
	bool OnBigRainWeatherStop();
	bool OnBigRainWeatherStart();
	bool OnAshWeatherStop();
	bool OnAshWeatherStart();
	bool IsOverrideGlobalWeather();
	enum class ETimeOfDayType GetTimeOfDayType();
	int32 GetServerTimeStamp();
	float GetGlobalWeatherDuration();
	enum class EWeatherType GetGlobalWeather();
	float GetCurrentTimeInMilliseconds();
	float GetClampValue(float From, float To, float Step);
	bool ClampOriginalVariable(float& OriginalVariable, float GoalVariable, float Step);
};

// 0x30 (0x288 - 0x258)
// Class SH.SHEventTriggerVolume
class ASHEventTriggerVolume : public ATriggerVolume
{
public:
	int32                                        EventTimeLimit;                                    // 0x258(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownTime;                                      // 0x25C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHQuestEvent>             EventClass;                                        // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHQuestManager*                       Manager;                                           // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USHQuestEvent*                         SpawnedEvent;                                      // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_233A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHEventTriggerVolume* GetDefaultObj();

	void SpawnEvent();
	void OnEventFinished(class USHQuest* Event);
	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnCooldownEnd();
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// 0x18 (0x2A0 - 0x288)
// Class SH.SHEventDefenceTriggerVolume
class ASHEventDefenceTriggerVolume : public ASHEventTriggerVolume
{
public:
	class ASHLocationPoint*                      EnemySpawnPoint;                                   // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHLocationPoint*                      VictimSpawnPoint;                                  // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2343[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHEventDefenceTriggerVolume* GetDefaultObj();

};

// 0x118 (0x1C8 - 0xB0)
// Class SH.SHEventsManager
class USHEventsManager : public UActorComponent
{
public:
	bool                                         bDebug;                                            // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_234F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USHDebuff*>                     ActiveDebuffs;                                     // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2350[0x100];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHEventsManager* GetDefaultObj();

	bool RemoveTrauma(class USHTraumaEvent* Trauma);
	bool RemoveDebuff(class USHDebuff* Debuff);
	bool Remove(class USHCuringEvent* Curing);
	bool ApplyTraumaCuring(class USHTraumaCuringEvent* TraumaCuringEvent);
	bool ApplyTrauma(class USHTraumaEvent* Trauma);
	bool ApplyDebuff(class USHDebuff* Debuff);
	bool Apply(class USHCuringEvent* Curing);
};

// 0x0 (0x28 - 0x28)
// Class SH.SHExplorationInterface
class ISHExplorationInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISHExplorationInterface* GetDefaultObj();

	bool StopExploration(class ASHPlayerCharacter* PlayerCharacter);
	bool StartExploration(class ASHPlayerCharacter* PlayerCharacter);
	bool ShouldNotBeExplored(class ASHPlayerCharacter* PlayerCharacter);
	bool IsExplored();
	float GetExplorationTime();
	class USoundCue* GetExplorationSound();
};

// 0x88 (0xB8 - 0x30)
// Class SH.SHFindFrndsSessionsCallbackProxy
class USHFindFrndsSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_235D[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHFindFrndsSessionsCallbackProxy* GetDefaultObj();

	class FString GetServerName(struct FBlueprintSessionResult& Result);
	int32 GetPingInMs(struct FBlueprintSessionResult& Result);
	int32 GetMaxPlayers(struct FBlueprintSessionResult& Result);
	int32 GetCurrentPlayers(struct FBlueprintSessionResult& Result);
	class USHFindFrndsSessionsCallbackProxy* FindFriendsSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FOnlineSubsystemFriendInfo& FriendsList);
};

// 0x68 (0x98 - 0x30)
// Class SH.SHFindSessionsCallbackProxy
class USHFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2368[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHFindSessionsCallbackProxy* GetDefaultObj();

	class FString GetServerName(struct FBlueprintSessionResult& Result);
	int32 GetPingInMs(struct FBlueprintSessionResult& Result);
	int32 GetMaxPlayers(struct FBlueprintSessionResult& Result);
	int32 GetCurrentPlayers(struct FBlueprintSessionResult& Result);
	class USHFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, bool bUsePresence);
};

// 0x0 (0xC8 - 0xC8)
// Class SH.SHFinisherAction
class USHFinisherAction : public USHCombatAction
{
public:

	static class UClass* StaticClass();
	static class USHFinisherAction* GetDefaultObj();

};

// 0xB8 (0x2D8 - 0x220)
// Class SH.SHFlashLight
class ASHFlashLight : public AActor
{
public:
	class USceneComponent*                       Root;                                              // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpotLightComponent*                   Flashlight;                                        // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  LightConeMesh;                                     // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  CollideCone;                                       // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOn;                                              // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastIsOn;                                          // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2393[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHAICharacter*>                Characters;                                        // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FlashlightMaterial;                                // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              DynamicFlashlightMaterial;                         // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPlayerCharacter*                    PlayerCharacter;                                   // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPlayerState*                        OwnerPlayerState;                                  // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFlashLightStage                  FlashLightStage;                                   // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FlashLightStageIsOn;                               // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2396[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FullFlashLightStageIntensity;                      // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MediumFlashLightStageEnergy;                       // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MediumFlashLightStageIntensity;                    // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowFlashLightStageEnergy;                          // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowFlashLightStageIntensity;                       // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFlashLightMode                   FlashLightMode;                                    // 0x290(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2397[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Energy;                                            // 0x294(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnergyLosePerSecond;                               // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnergyAddPerSecond;                                // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnergyRegenerationDelay;                           // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HorrorFlashlightCooldown;                          // 0x2A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReadyForHorror;                                   // 0x2A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInHorrorVolume;                                   // 0x2A9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2398[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       TurnOnAudio;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       TurnOffAudio;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInitialized;                                      // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRegenerate;                                       // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2399[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHFlashLight* GetDefaultObj();

	void UpdateHorror();
	void UpdateFlashlightStage();
	void UpdateEnergyRegeneration();
	void UpdateEnergyMaterial(float NewValue);
	void UpdateCharacters();
	void TurnOn();
	void TurnOff();
	void ToggleMode();
	void Toggle();
	void StopEnergyRegeneration();
	bool StartHorrorEvent();
	void StartEnergyRegenerationCallback();
	void StartEnergyRegeneration();
	void SetFlashlightStage(enum class EFlashLightStage NewFlashLightStage);
	void SetFlashLightMode(enum class EFlashLightMode NewFlashLightMode);
	void SetFlashLight(bool NewIsOn);
	void SetEnergy(float NewValue);
	void ServerToggleMode();
	void ServerToggle();
	void OnUltravioletMediumStage();
	void OnUltravioletLowStage();
	void OnUltravioletFullStage();
	void OnRep_isOn();
	void OnRep_FlashLightMode();
	void OnLeaveFlashlightHorrorVolume(class ASHFlashlightVolume* FlashlightVolume);
	void OnEnterFlashlightHorrorVolume(class ASHFlashlightVolume* FlashlightVolume);
	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnDefaultStage();
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	bool IsActive();
	void HorrorTimerHandleCallback();
	enum class EFlashLightMode GetFlashLightMode();
	void CharacterLeave(class ASHAICharacter* Character);
	void CharacterEnter(class ASHAICharacter* Character);
	bool CanUltraviolet();
};

// 0x0 (0x220 - 0x220)
// Class SH.SHFlashlightVolume
class ASHFlashlightVolume : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASHFlashlightVolume* GetDefaultObj();

	void PlayerLeave(class ASHPlayerCharacter* Character);
	void PlayerEnter(class ASHPlayerCharacter* Character);
	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// 0x68 (0x288 - 0x220)
// Class SH.SHFractionsManager
class ASHFractionsManager : public AActor
{
public:
	int32                                        MutantsFractionWeight;                             // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaraudersFractionWeight;                           // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewLightFractionWeight;                            // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MutantsDailyChange;                                // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaraudersDailyChange;                              // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewLightDailyChange;                               // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLocationInvasionDescription>  InvadedLocations;                                  // 0x238(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                LiberatedLocations;                                // 0x248(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInvasionLoaded;                                 // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHLevelLocation*>              InvasionLoadingSubscribedLocations;                // 0x260(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MutantsFractionAggression;                         // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaraudersFractionAggression;                       // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewLightFractionAggression;                        // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FractionsWarDayChangeMin;                          // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FractionsWarDayChangeMax;                          // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23AC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHFractionsManager* GetDefaultObj();

	void SimulateFractionsWarDayChange();
	void LiberateLocation(int32 LiberationLocationQuestID);
	bool IsLocationInvaded(class ASHLevelLocation* Location);
	bool IsInvasionLoaded(class ASHLevelLocation* Location);
	int32 GetNewLightFractionAggression();
	int32 GetMutantsFractionAggression();
	int32 GetMaraudersFractionAggression();
	void AddNewLightFractionAggression(int32 Value);
	void AddMutantsFractionAggression(int32 Value);
	void AddMaraudersFractionAggression(int32 Value);
	void AddFractionAggression(enum class EFractions Fraction, int32 Value);
};

// 0x270 (0x408 - 0x198)
// Class SH.SHGameInstance
class USHGameInstance : public UGameInstance
{
public:
	float                                        MasterAudioVolume;                                 // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MusicAudioVolume;                                  // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SoundsAudioVolume;                                 // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VoiceAudioVolume;                                  // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gamma;                                             // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MotionBlur;                                        // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InvertYAxis;                                       // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SavedServerName;                                   // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCharacterModel;                               // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableIK;                                        // 0x1C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHardwareBenchmarkComplete;                        // 0x1CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableTutorial;                                  // 0x1CB(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableViewportMarks;                             // 0x1CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableCameraShake;                               // 0x1CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideHud;                                          // 0x1CE(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GameType;                                          // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsServer;                                          // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPrivate;                                         // 0x1D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Password;                                          // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HardMode;                                          // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxPlayers;                                        // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerName;                                        // 0x1F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PublicIP;                                          // 0x200(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FServerID                             ServerID;                                          // 0x210(0x18)(NativeAccessSpecifierPublic)
	class ASHEnvironment*                        EnvironmentManager;                                // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHWorldEventsManager*                 WorldEventsManager;                                // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHChatManager*                        ChatManager;                                       // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHRadioManager*                       RadioManager;                                      // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPersonalRoomsManager*               PersonalRoomsManager;                              // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHQuestManager*                       QuestManager;                                      // 0x250(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHMapManager*                         MapManager;                                        // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHFractionsManager*                   FractionsManager;                                  // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C3[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USHWorldSaveData*                      WorldSaveDataInstance;                             // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldSaveData                        WorldSaveData;                                     // 0x2A8(0xC8)(NativeAccessSpecifierPublic)
	bool                                         bFirstAppearanceComplete;                          // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameDifficultySettings               GameDifficultySettings;                            // 0x374(0x50)(Edit, BlueprintVisible, Config, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C5[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USHSteamManager*                       SteamManager;                                      // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSteamOverlayActive;                              // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSteamOverlayIsEnabledEvent;                      // 0x3E0(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSteamOverlayIsDisabledEvent;                     // 0x3F0(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bSaveSlotInitialized;                              // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESaveSlot                         CurrentSaveSlot;                                   // 0x401(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOldSavesRestored;                                 // 0x402(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C7[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHGameInstance* GetDefaultObj();

	void UpdateSession();
	void StopSessionUpdate();
	void StartSessionUpdate();
	void ShowSteamInviteFriendsOverlay();
	void SetWeaponDurabilityTakeHitCost(float NewValue);
	void SetStatusEffectsDamageModifier(float NewValue);
	void SetShowMapPosition(bool bNewValue);
	void SetShowLeaveNotifications(bool bNewValue);
	void SetShowJoinNotifications(bool bNewValue);
	void SetShowHud(bool bNewValue);
	void SetShowAim(bool bNewValue);
	void SetShowAiInfo(bool bNewValue);
	void SetSelfHealingType(enum class ESelfHealingType Type);
	void SetSaveSlot(enum class ESaveSlot NewSaveSlot);
	void SetQuestRewardExperienceModifier(float NewValue);
	void SetPveMode(bool bNewValue);
	void SetIncomingStressModifier(float NewValue);
	void SetHunterSpawnChance(float NewValue);
	void SetHideCharacterModel(bool bNewValue);
	void SetGameDifficultyPreset(enum class EGameDifficultyType Type);
	void SetGameDifficulty(float NewValue);
	void SetFullDropEnabled(bool bNewValue);
	void SetEventsDamageModifier(float NewValue);
	void SetDeathMoneyDropRate(float NewValue);
	void SetDayLength(float NewValue);
	void SetBaseRequirementsSpendingModifier(float NewValue);
	void SetArmorDurabilityTakeHitCost(float NewValue);
	void SetAnomalyDamageModifier(float NewValue);
	void SetAiHealthModifier(float NewValue);
	void SetAiDamageModifier(float NewValue);
	void SetAggressiveWorldEventsChanceModifier(float NewValue);
	void SaveSettings();
	bool IsFirstAppearanceComplete();
	bool InitializeSteamManager();
	struct FSaveInfo GetSlotSaveInfo(enum class ESaveSlot SaveSlot, bool* Result);
	TArray<struct FSaveInfo> GetSaveInfoListSorted();
	TArray<struct FSaveInfo> GetSaveInfoList();
	enum class ESaveSlot GetCurrentSaveSlot();
	enum class ESaveSlot FindBestSaveSlot();
	void CompleteFirstAppearance();
};

// 0x38 (0x340 - 0x308)
// Class SH.SHGameMode
class ASHGameMode : public ASHBaseGameMode
{
public:
	bool                                         UseSave;                                           // 0x308(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceUseRooms;                                     // 0x309(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        DedicatedIgnoreLoadLevelNames;                     // 0x310(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bServerManagersSaveEnabled;                        // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23CE[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        BannedPlayers;                                     // 0x330(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ASHGameMode* GetDefaultObj();

	void SaveAll();
	void KickPlayer(class APlayerController* KickedPlayer, class FText& KickReason);
	class AActor* FindBasePlayerStart(class AController* Player, const class FString& IncomingName);
	void BanPlayer(class APlayerController* KickedPlayer, class FText& KickReason);
};

// 0x10 (0x248 - 0x238)
// Class SH.SHGameSession
class ASHGameSession : public AGameSession
{
public:
	uint8                                        Pad_23D0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHGameSession* GetDefaultObj();

};

// 0x70 (0x300 - 0x290)
// Class SH.SHGameState
class ASHGameState : public AGameState
{
public:
	class USHPlayerOnlineComponent*              PlayerOnlineComponent;                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerStateListUpdate;                           // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class ASHAICombatDirector*                   AICombatDirector;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<enum class EPlayerUIColor>              UsedPlayerColors;                                  // 0x2B0(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ASHGameState* GetDefaultObj();

};

// 0x0 (0x330 - 0x330)
// Class SH.SHGameViewportClient
class USHGameViewportClient : public UGameViewportClient
{
public:

	static class UClass* StaticClass();
	static class USHGameViewportClient* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class SH.SHGetFriendsCallbackProxy
class USHGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D1[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHGetFriendsCallbackProxy* GetDefaultObj();

	class USHGetFriendsCallbackProxy* GetFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x28 (0x50 - 0x28)
// Class SH.SHGlobals
class USHGlobals : public UObject
{
public:
	class ASHQuestManager*                       QuestManager;                                      // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHWorldStateManager*                  WorldState;                                        // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHMapManager*                         MapManager;                                        // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHFractionsManager*                   FractionsManager;                                  // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGamepadMode;                                      // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHGlobals* GetDefaultObj();

	void SetGamepadModeFromKey(const struct FKey& Key);
};

// 0x0 (0x220 - 0x220)
// Class SH.SHGrassVolume
class ASHGrassVolume : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASHGrassVolume* GetDefaultObj();

	void PlayerLeave(class ASHPlayerCharacter* Character);
	void PlayerEnter(class ASHPlayerCharacter* Character);
	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// 0x58 (0x460 - 0x408)
// Class SH.SHHeavyItem
class ASHHeavyItem : public ASHItem
{
public:
	uint8                                        Pad_23D8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachOffsetTransform;                             // 0x410(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ASHHeavyItem*                          HeavyItemSpawner;                                  // 0x440(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCarriedByPlayer;                                 // 0x448(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  StaticHeavyItemMesh;                               // 0x450(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_23DB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHHeavyItem* GetDefaultObj();

	void OnItemDropped();
	bool OnHeavyItemSpawnerSet();
	class UStaticMeshComponent* GetStaticHeavyItemMesh();
};

// 0x0 (0x310 - 0x310)
// Class SH.SHHUD
class ASHHUD : public AHUD
{
public:

	static class UClass* StaticClass();
	static class ASHHUD* GetDefaultObj();

};

// 0x130 (0x350 - 0x220)
// Class SH.SHImpactEffect
class ASHImpactEffect : public AActor
{
public:
	class UParticleSystem*                       DefaultFX;                                         // 0x220(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ConcreteFX;                                        // 0x228(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       DirtFX;                                            // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       WaterFX;                                           // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       MetalFX;                                           // 0x240(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       WoodFX;                                            // 0x248(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       GlassFX;                                           // 0x250(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       GrassFX;                                           // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       FleshFX;                                           // 0x260(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             DefaultSound;                                      // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             ConcreteSound;                                     // 0x270(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             DirtSound;                                         // 0x278(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             WaterSound;                                        // 0x280(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             MetalSound;                                        // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             WoodSound;                                         // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             GlassSound;                                        // 0x298(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             GrassSound;                                        // 0x2A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             FleshSound;                                        // 0x2A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDecalData                            DefaultDecal;                                      // 0x2B0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FHitResult                            SurfaceHit;                                        // 0x2C0(0x88)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_23DF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHImpactEffect* GetDefaultObj();

};

// 0x110 (0x330 - 0x220)
// Class SH.SHInventory
class ASHInventory : public AActor
{
public:
	uint8                                        Pad_2411[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x238(0x18)(Edit, BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Size;                                              // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SlotsInRow;                                        // 0x251(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnlimitedWeight;                                  // 0x252(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2414[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxWeight;                                         // 0x254(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentWeight;                                     // 0x258(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoResize;                                        // 0x25C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustCacheItemInstance;                            // 0x25D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCantFitQuestItems;                                // 0x25E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadOnlyInventory;                                // 0x25F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCacheArmor;                                       // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2418[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USHInventorySlot*>              InventorySlots;                                    // 0x268(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ContentChangeFlag;                                 // 0x278(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2419[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOnlyOneExtend;                                    // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsExtended;                                       // 0x27D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnExtended;                                        // 0x280(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnExtended;                                      // 0x290(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemEnterInventory;                              // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemLeaveInventory;                              // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDrop;                                        // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnContentChanged;                                  // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStructureChanged;                                // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWeightChanged;                                   // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         LoadedFromSave;                                    // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USHInventorySlot*>              ShrinkedSlots;                                     // 0x308(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHInventorySlot*>              UpgradeSlots;                                      // 0x318(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoEquipWeapons;                                 // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInLoadingState;                                 // 0x329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHInventory* GetDefaultObj();

	void UnExtend();
	bool SwapSlotsContent(class USHInventorySlot* Lhs, class USHInventorySlot* Rhs);
	void SplitStack(class USHInventorySlot* FromSlot, int32 Count);
	class ASHItem* SpawnSingleItem(class USHInventorySlot* Slot, const struct FTransform& Transform);
	class ASHItem* SpawnAndRemoveSingleItem(class USHInventorySlot* Slot, const struct FTransform& Transform);
	void SetTestSwapSlots(class USHInventorySlot* Slot1, class USHInventorySlot* Slot2);
	void SetNewSlotsInRow(int32 Value);
	void SetNewSize(int32 NewSize);
	int32 RemoveItemOfParentType(TSubclassOf<class ASHItem> ItemParentClass, int32 Count);
	int32 RemoveItem(TSubclassOf<class ASHItem> ItemClass, int32 Count);
	int32 RemoveFromSlot(class USHInventorySlot* FromSlot, int32 Count);
	void RemoveAllQuestItems();
	void OnRep_InventorySlots();
	void OnRep_CurrentWeight();
	void OnRep_ContentChanged();
	void LoadFromSave(const TArray<struct FItemPlaceholderSave>& SaveData);
	bool IsEmpty();
	int32 InsertPlaceholderIntoPlaceholder(class USHInventoryPlaceholder* From, class USHInventoryPlaceholder* To, int32 MaxCount);
	int32 InsertIntoPlaceholder(class ASHItem* Item, class USHInventoryPlaceholder* Placeholder, int32 Count);
	bool HasItemOfClass(TSubclassOf<class ASHItem> ItemClass);
	void GetUpgradeSlots(TArray<class USHInventorySlot*>* Slots);
	int32 GetUpgradeResult(TSubclassOf<class ASHItem> UpgradeItemType);
	TArray<class USHInventorySlot*> GetSlotsSortedByWeight();
	TArray<class USHInventorySlot*> GetSlotsSortedByNew();
	TArray<class USHInventorySlot*> GetSlotsSortedByDurability();
	TArray<class USHInventorySlot*> GetSlotsOfParentType(TSubclassOf<class ASHItem> ItemType);
	TArray<class USHInventorySlot*> GetShrinkedSlots(int32 UpgradeResult);
	TArray<struct FItemPlaceholderSave> GetSaveInfo();
	int32 GetItemCountOfType(TSubclassOf<class ASHItem> ItemType, int32 RequiredQuestID);
	int32 GetItemCountOfParentType(TSubclassOf<class ASHItem> ItemType, int32 RequiredQuestID);
	int32 GetEmptySlotsCount();
	int32 GetCurrentSize();
	void ForceReplication();
	void Extend();
	class ASHInventory* Duplicate();
	void ClearTestSwapSlots();
	void Clear();
	void ChangeReadOnly(bool NewValue);
	int32 CanFitMax(TSubclassOf<class ASHItem> ItemClass);
	bool CanFit(int32 Count, TSubclassOf<class ASHItem> ItemClass);
	bool CanBeExtended(class ASHCharacter* Character);
	int32 AddPlaceholderFromClassWithLifetime(TSubclassOf<class ASHItem> ItemClass, int32 Count, const struct FItemLifetimeData& LifetimeData, int32 RequiredForQuest);
	int32 AddPlaceholderFromClassToEmptySlot(TSubclassOf<class ASHItem> ItemClass, int32 Count, int32 RequiredForQuest);
	int32 AddPlaceholderFromClass(TSubclassOf<class ASHItem> ItemClass, int32 Count, int32 RequiredForQuest);
	int32 AddPlaceholder(class USHInventoryPlaceholder* Placeholder);
	int32 AddItem(class ASHItem* Item, int32 Count);
	void AddInventory(class ASHInventory* Inventory);
};

// 0xB0 (0xD8 - 0x28)
// Class SH.SHInventoryPlaceholder
class USHInventoryPlaceholder : public UObject
{
public:
	TSubclassOf<class ASHItem>                   ItemType;                                          // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Count;                                             // 0x30(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2424[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RequiredForQuest;                                  // 0x34(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemPlaceholderProperties            ItemProperties;                                    // 0x38(0x48)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FItemLifetimeData                     ItemLifetimeData;                                  // 0x80(0x38)(BlueprintVisible, Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	class ASHInventory*                          OwnerInventory;                                    // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHInventory*                          PreviousInventory;                                 // 0xC0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0xC8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEquipmentSlot                    EquippedInSlot;                                    // 0xC9(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPendingTrade;                                     // 0xCA(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2425[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHInventoryPlaceholder* GetDefaultObj();

	void OnRep_ItemLifetimeData();
	void On_RepItemType();
	float GetElapsedCooldownTime();
	class ASHItem* GetDefaultItem();
	float GetCooldownTimeMax();
	void GenerateArtifactLifetimeData(class ASHPlayerCharacter* Player);
};

// 0x40 (0x68 - 0x28)
// Class SH.SHInventorySlot
class USHInventorySlot : public UObject
{
public:
	class USHInventoryPlaceholder*               _placeholder;                                      // 0x28(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASHItem*                               _cachedItem;                                       // 0x30(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASHInventory*                          OwnerInventory;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocked;                                         // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2434[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnContentChanged;                                  // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2435[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USHInventorySlot*                      SourceSlot;                                        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHInventorySlot* GetDefaultObj();

	void Use(class ASHPlayerCharacter* Character);
	void UpdatePlaceholder();
	void UnloadWeapon(class ASHPlayerCharacter* Character);
	void UnEquip(class ASHPlayerCharacter* Character);
	void SetPlaceholder(class USHInventoryPlaceholder* Placeholder);
	void Repair(class ASHPlayerCharacter* Character);
	void PutInEquipSlot(class ASHPlayerCharacter* OwnerCharacter, bool bOnlyInEmpty);
	void OnRep_Placeholder();
	void OnPendingSwapContent(class USHInventorySlot* OtherSlot);
	void OnConsumeItem();
	bool IsOnCooldown();
	bool IsNotEmpty();
	bool IsEquipped();
	bool IsEmpty();
	int32 GetRepairCost(class ASHPlayerCharacter* Character);
	class USHInventoryPlaceholder* GetPlaceholder();
	int32 GetDisassembleMoney(class ASHPlayerCharacter* Character);
	void Equip(class ASHPlayerCharacter* Character);
	void Disassemble(class ASHPlayerCharacter* Character);
	bool CanBeUsed();
	bool CanBeUnEquipped();
	bool CanBeEquipped();
};

// 0xF0 (0x310 - 0x220)
// Class SH.SHItemContainer
class ASHItemContainer : public AActor
{
public:
	uint8                                        Pad_2438[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FContainerDescription                 Description;                                       // 0x230(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	bool                                         bCanBeQuestOutlined;                               // 0x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQuestOutlined;                                    // 0x249(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalOutlined;                                   // 0x24A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2439[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OwnerID;                                           // 0x250(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SearchingTime;                                     // 0x278(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             SearchingSound;                                    // 0x280(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyOneExtend;                                    // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AchievementKey;                                    // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemPlaceholderSave>          ContainerInventorySaveData;                        // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContainerInventoryRespawnTime;                     // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemPlaceholderSave                  ItemPlaceholderSave;                               // 0x2B8(0x50)(Edit, BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_243E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHItemContainer* GetDefaultObj();

	void UnbindFromPlayer();
	void ReplaceInventory(class ASHInventory* Inventory);
	void QuestOutline(bool IsHighlighted);
	void PlayerPerksUpdated();
	void Outline(bool IsHighlighted);
	void OnPlayerDestroyed(class AActor* PlayerActor);
	void CheckQuestOutlined();
	void BindToPlayer(class ASHPlayerCharacter* Player);
};

// 0x48 (0xF8 - 0xB0)
// Class SH.SHJournalComponent
class USHJournalComponent : public UActorComponent
{
public:
	class UDataTable*                            NoteCategoriesData;                                // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNoteLearnKey>                 MadmanLoveStoryAchievementNotes;                   // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContextString;                                     // 0xC8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLearnedNotes                         LearnedNotes;                                      // 0xD8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2460[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHJournalComponent* GetDefaultObj();

	void OnRep_LearnedNotes();
	void LoadSaveData(const TArray<struct FNoteLearnKey>& SaveInfo);
	void LearnNoteByKey(const struct FNoteLearnKey& Key, bool HideNotify);
	void LearnNote(int32 CategoryID, int32 NoteId, bool HideNotify);
	bool IsNoteLearnedByKey(const struct FNoteLearnKey& Key);
	bool IsNoteLearned(int32 CategoryID, int32 NoteId);
	TArray<struct FNoteLearnKey> GetSaveData();
	struct FNoteInfoData GetNoteData(const struct FNoteCategoryData& CategoryData, int32 NoteId, bool* Result);
	struct FNoteCategoryData GetNoteCategory(int32 ID, bool* Result);
	struct FNoteInfoData GetNote(int32 CategoryID, int32 NoteId, bool* Result);
	int32 GetCategoryNotesCount(int32 CategoryID);
	TArray<struct FNoteInfoData> GetAllLearnedNotesInCategoryData(int32 CategoryID);
	TArray<int32> GetAllLearnedNotesInCategory(int32 CategoryID);
	TArray<struct FNoteCategoryData> GetAllLearnedCategoriesData();
	TArray<int32> GetAllLearnedCategories();
	void CheckMadmanLoveStoryAchievement();
};

// 0x0 (0x408 - 0x408)
// Class SH.SHKnowledgeRewardItem
class ASHKnowledgeRewardItem : public ASHBasePerkRewardItem
{
public:

	static class UClass* StaticClass();
	static class ASHKnowledgeRewardItem* GetDefaultObj();

};

// 0x200 (0x458 - 0x258)
// Class SH.SHLevelLocation
class ASHLevelLocation : public ATriggerVolume
{
public:
	bool                                         bDebugOn;                                          // 0x258(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextRenderComponent*                  LocationNameText;                                  // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateQuests;                                   // 0x268(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlaySoundOnEnter;                                 // 0x269(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToGenerateQuest;                             // 0x26C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSafeZone;                                       // 0x270(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SafezoneId;                                        // 0x274(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationDescription                  Description;                                       // 0x278(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UDataTable*                            LocationRadioKillMessagesDataTable;                // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationNameSize;                                  // 0x2E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHItemContainer*>              QuestItemContainers;                               // 0x2E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHLocationPoint*>              AISpawnPoints;                                     // 0x2F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHItemContainer*>              QuestRewardContainers;                             // 0x308(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuestGiveCooldown;                                 // 0x318(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2470[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHPlayerCharacter*>            OverlappedPlayers;                                 // 0x328(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class ASHPlayerCharacter*>              PlayersOnCooldown;                                 // 0x338(0x50)(Protected, NativeAccessSpecifierProtected)
	enum class EWeatherType                      CurrentWeather;                                    // 0x388(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2471[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeatherProperties                    CurrentWeatherProperties;                          // 0x38C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeatherProperties                    NoneWeatherProperties;                             // 0x398(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeatherProperties                    SmallRainProperties;                               // 0x3A4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeatherProperties                    MediumRainProperties;                              // 0x3B0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeatherProperties                    BigRainProperties;                                 // 0x3BC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeatherProperties                    FogProperties;                                     // 0x3C8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeatherProperties                    SnowProperties;                                    // 0x3D4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeatherProperties                    AshProperties;                                     // 0x3E0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeatherProperties                    ToxicRainProperties;                               // 0x3EC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeatherProperties                    OutdoorSnowProperties;                             // 0x3F8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2473[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvasionLevel;                                     // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InvasionLocationId;                                // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LiberationLocationQuestID;                         // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InvasionDuration;                                  // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFractions                        LocationOwner;                                     // 0x420(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFractions                        LocationInvader;                                   // 0x421(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2474[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHAIDirector*>                 LocationOwnerSpawnPoints;                          // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHAIDirector*>                 LocationInvaderSpawnPoints;                        // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHLocationFractionsController*        LocationFractionsController;                       // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocationOwnerType                LocationOwnerType;                                 // 0x450(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2477[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHLevelLocation* GetDefaultObj();

	void UpdateOverlapsCallback();
	void SetWeather(enum class EWeatherType NewWeather, float Duration);
	void ResetCooldownFor(class ASHPlayerCharacter* Player);
	void OnRep_LocationOwnerType();
	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void LoadInvasion();
	TArray<struct FRadioKillMessageDataTable> GetLocationRadioKillMessages();
	enum class EWeatherType GetCurrentWeather();
	void CalculateNextWeather();
};

// 0x0 (0x28 - 0x28)
// Class SH.SHLib
class USHLib : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USHLib* GetDefaultObj();

	void UpdateUseRayTracedDistanceFieldShadows(class ULightComponent* LightComponent, bool bNewValue);
	class FString StringEncode(const class FString& String);
	class FString StringDecode(const class FString& String);
	void SoundClassCrossfade(class USoundClass* FromClass, class USoundClass* ToClass, float ToVolume, float BlendTime);
	bool SHProjectWorldToScreen(class APlayerController* Player, struct FVector& WorldPosition, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);
	bool ShouldHappenMax(float Percentage, float Max);
	bool ShouldHappen(float Percentage);
	void SetSoundClassVolume(class USoundClass* SoundClass, float Volume);
	void SetSceneComponentMobility(class USceneComponent* SceneComponent, enum class EComponentMobility Mobility, bool bApplyToChildrens);
	void SetPointLightComponentMobility(class UPointLightComponent* PointLightComponent, enum class EComponentMobility Mobility);
	void SetMouseSensitivity(float NewSensitivity);
	void SetMeshComponentMobility(class UStaticMeshComponent* MeshComponent, enum class EComponentMobility Mobility);
	void SetComponentCanEverAffectNavigation(class UShapeComponent* ShapeComponent, bool bRelevant);
	void SetAxisMapping(const struct FInputAxisKeyMapping& OldAxisMapping, const struct FInputAxisKeyMapping& NewAxisMapping);
	void SetAudioComponentAutoDestroy(class UAudioComponent* Component, bool AutoDestroy);
	void SetActionMapping(const struct FInputActionKeyMapping& OldActionMapping, const struct FInputActionKeyMapping& NewActionMapping);
	void SaveRenderTargetToDisk(class UTextureRenderTarget2D* InRenderTarget, const class FString& Filename, bool bInvertOpacity);
	void ResetCustomBindings();
	class AActor* ReplaceCableActorWithSHCableActor(class ACableActor* SourceActor);
	void RemoveAxisMapping(const struct FInputAxisKeyMapping& ToRemoveAxisMapping);
	void RemoveActionMapping(const struct FInputActionKeyMapping& ToRemoveActionMapping);
	void MakeAiNoiseAtLocation(class AActor* Actor, const struct FVector& NoiseLocation, float Radius, float Volume, bool Attenuation, bool bDebugOn);
	void MakeAiNoise(class AActor* Actor, float Radius, float Volume, bool Attenuation, bool bDebugOn);
	bool IsWithEditor();
	int32 GetWorlType(class UWorld* World);
	class USHWorldStateManager* GetWorldState();
	int32 GetUnixTime();
	class FString GetUniquePlayerID(class AController* Controller);
	class FString GetUniqueCharacterID(class ASHPlayerCharacter* Player);
	struct FVector2D GetSpriteSize(class UPaperSprite* Sprite);
	float GetSoundClassVolume(class USoundClass* SoundClass);
	class USHGlobals* GetSHGlobals();
	class ASHGameState* GetSHGameState(class UWorld* World);
	int32 GetRandomIndex(const TArray<float>& ChancesArray);
	class ASHQuestManager* GetQuestManager();
	float GetMouseSensitivity();
	class ASHMapManager* GetMapManager();
	class FName GetKeyUIName(const struct FKey& Key);
	class FString GetFocusedWidgetName();
	class UObject* GetDefaultObject(TSubclassOf<class UObject> ObjectClass);
	struct FWeaponAnimMontageInfo GetCurrentWeaponMontage(struct FWeaponDetailedAnimMontageInfo* DetailedInfo, enum class EWeaponType WeaponType);
	void GetAxisMapping(class FName AxisName, float AxisScale, TArray<struct FInputAxisKeyMapping>* Bindings);
	TArray<struct FSHSubtitleCue> GetAudioSubtitles(class USoundWave* Sound);
	class FString GetAppVersion();
	void GetAllClassesFromParentClass(const class FString& Path, TSubclassOf<class UObject> ParentClass, TArray<TSubclassOf<class UObject>>* Result);
	TArray<class AActor*> GetAllActorsOfClassFromActor(class AActor* Actor, TSubclassOf<class AActor> ActorClass);
	void GetActionMapping(class FName ActionName, TArray<struct FInputActionKeyMapping>* Bindings);
	void GenerateExportDataForActors(class UDataTable* Table, const TArray<class AActor*>& Actors);
	bool DoesPathToPointExist(class ASHAICharacter* From, const struct FVector& To);
	bool DoesPathExist(class ASHAICharacter* From, class AActor* To);
	int32 CompareString(const class FString& One, const class FString& Other);
	void CheckMissingActionMappings();
	void ChangeLocalization(const class FString& Target);
};

// 0x18 (0x238 - 0x220)
// Class SH.SHLightVolume_Base
class ASHLightVolume_Base : public AActor
{
public:
	bool                                         bActive;                                           // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHPlayerCharacter*>            Characters;                                        // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHLightVolume_Base* GetDefaultObj();

	bool UpdatePlayers();
	bool TurnOn();
	bool TurnOff();
	void PlayerLeave(class ASHPlayerCharacter* Character);
	void PlayerEnter(class ASHPlayerCharacter* Character);
	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// 0x90 (0x2B0 - 0x220)
// Class SH.SHLocalFightEvent
class ASHLocalFightEvent : public AActor
{
public:
	uint8                                        Pad_2502[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHAIEventSpawnPoint*>          FirstTeamSpawnPoints;                              // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLocalFightEventSquad>         FirstTeamSquads;                                   // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHAIEventSpawnPoint*>          SecondTeamSpawnPoints;                             // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLocalFightEventSquad>         SecondTeamSquads;                                  // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cooldown;                                          // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartChance;                                       // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerDistanceMax;                                 // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SavedRespawnTime;                                  // 0x274(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSaved;                                          // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnCooldown;                                       // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEventStarted;                                     // 0x27A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2505[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHAICharacter*>                FirstTeamSpawnedCharacters;                        // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHAICharacter*>                SecondTeamSpawnedCharacters;                       // 0x298(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2506[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHLocalFightEvent* GetDefaultObj();

	void UpdateEvent();
	void PlayerEnter(class ASHPlayerCharacter* Character);
	void OnRespawnTimerCallback();
	void NewOnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// 0x0 (0x220 - 0x220)
// Class SH.SHLocationFractionsController
class ASHLocationFractionsController : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASHLocationFractionsController* GetDefaultObj();

	void EnableOwner();
	void EnableInvader();
	void DisableOwner();
	void DisableInvader();
};

// 0x8 (0x228 - 0x220)
// Class SH.SHLocationPoint
class ASHLocationPoint : public AActor
{
public:
	class UBillboardComponent*                   Billboard;                                         // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHLocationPoint* GetDefaultObj();

};

// 0x20 (0x240 - 0x220)
// Class SH.SHLootList
class ASHLootList : public AActor
{
public:
	TArray<struct FSingleItemInfo>               ItemList;                                          // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLootListInfo>                 LootLists;                                         // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHLootList* GetDefaultObj();

	TSubclassOf<class ASHItem> RollWithAdditionalChance(float AdditionalChance);
	TSubclassOf<class ASHItem> Roll();
};

// 0x68 (0x288 - 0x220)
// Class SH.SHLostControlEffect
class ASHLostControlEffect : public AActor
{
public:
	float                                        Duration;                                          // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHaveQTE;                                          // 0x224(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_255F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        QTEDuration;                                       // 0x228(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2560[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  QTEText;                                           // 0x230(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        Cooldown;                                          // 0x248(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x24C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopPlayerActivity;                               // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManualDestroyThisActor;                           // 0x251(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerBlockControlType               ApplyControl;                                      // 0x252(0xF)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPlayerBlockControlType               QTEControl;                                        // 0x261(0xF)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ASHPlayerCharacter*                    _character;                                        // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2563[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         _bIsPlayingQTE;                                    // 0x27D(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         _bWasInterruptedByQTE;                             // 0x27E(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         _bPendingDestroy;                                  // 0x27F(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2564[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHLostControlEffect* GetDefaultObj();

	void TurnAutonomousAnimations(bool bEnable);
	void StopWeaponAnimation(struct FWeaponAnimMontageInfo& AnimationInfo);
	void StopQTE(bool bSuccessful);
	void StartQTE();
	void ServerSetQTEState(bool bIsPlaying);
	void ServerQTEStopsControlEffect();
	float PlayWeaponAnimation(struct FWeaponAnimMontageInfo& AnimationInfo);
	void OnStopQTE();
	void OnStartQTE();
	void OnRep_PendingDestroy();
	void OnRep_IsPlayingQTE();
	void OnFinish(bool bWasInterruptedByQTE);
	void OnApply();
	void MontageJumpToSection(class FName SectionName, struct FWeaponAnimMontageInfo& AnimationInfo);
	bool IsPlayingQTE();
	bool IsBlockingUseItems();
	bool IsBlockingTargeting();
	bool IsBlockingSprint();
	bool IsBlockingReload();
	bool IsBlockingPickup();
	bool IsBlockingMove();
	bool IsBlockingJump();
	bool IsBlockingCrouch();
	bool IsBlockingCharacterUI();
	bool IsBlockingChangeWeapon();
	bool IsBlockingCamera();
	bool IsBlockingBlock();
	bool IsBlockingAttack();
	struct FWeaponAnimMontageInfo GetCurrentWeaponMontage(struct FWeaponDetailedAnimMontageInfo& DetailedInfo);
	class ASHPlayerCharacter* GetCharacter();
	void Finish();
	void Apply(class ASHPlayerCharacter* Character);
};

// 0x8 (0x348 - 0x340)
// Class SH.SHMainGameMode
class ASHMainGameMode : public ASHGameMode
{
public:
	bool                                         bStartingRoomComplete;                             // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceStartingRoomComplete;                        // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_256C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHMainGameMode* GetDefaultObj();

};

// 0x0 (0x308 - 0x308)
// Class SH.SHMainMenuGameMode
class ASHMainMenuGameMode : public ASHBaseGameMode
{
public:

	static class UClass* StaticClass();
	static class ASHMainMenuGameMode* GetDefaultObj();

};

// 0x28 (0x450 - 0x428)
// Class SH.SHMapInterestZoneComponent
class USHMapInterestZoneComponent : public USphereComponent
{
public:
	class FText                                  Name;                                              // 0x428(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EInterestZoneType                 ZoneType;                                          // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2571[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            FogOfWarOpenMask;                                  // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHMapInterestZoneComponent* GetDefaultObj();

	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0xE0 (0x300 - 0x220)
// Class SH.SHMapManager
class ASHMapManager : public AActor
{
public:
	class UDataTable*                            StaticObjectsDataTable;                            // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            LoadedFogTexture;                                  // 0x228(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FMapObjectInfo>                StaticObjects;                                     // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                FogOfWarRuntimeTexture;                            // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          QuestAreaObjects;                                  // 0x248(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          QuestMarkObjects;                                  // 0x258(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMapPlayerPoint>               MapPlayerInfo;                                     // 0x268(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMapDeathContainerInfo>        PlayerDeathContainers;                             // 0x278(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerDeathStateTimer>        PlayerDeathTimers;                                 // 0x288(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FColor>                        FogOfWarPixels;                                    // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapUpdate;                                       // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotifyMapChanged;                                // 0x2B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLocationReached;                                 // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class FName>                          InspectedStaticObjects;                            // 0x2D8(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          RepeaterOpenedStaticObjects;                       // 0x2E8(0x10)(Net, ZeroConstructor, SaveGame, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2577[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHMapManager* GetDefaultObj();

	void SetMark(class ASHPlayerController* InstigatorController, struct FVector2D& WorldLocation, struct FVector2D& MapLocation);
	void ResetMark(class ASHPlayerController* InstigatorController);
	void RemoveDeathContainer(class FName& ContainerName);
	void OnRepeaterFixed(class AActor* RepeaterActor);
	void OnRep_SharedInspectedStaticObjects();
	void OnRep_MapContent();
	void OnPlayerDeath(struct FMapDeathContainerInfo& DeathInfo);
	void OnActorInspected(class AActor* Actor);
	bool IsActorRepeaterOpened(class FName ObjectName);
	bool IsActorInspected(class FName ObjectName);
	void CollectMapDataToTable();
};

// 0x10 (0x460 - 0x450)
// Class SH.SHMapZoneComponent_Repeater
class USHMapZoneComponent_Repeater : public USHMapInterestZoneComponent
{
public:
	int32                                        RepeaterRadius;                                    // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2578[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHMapZoneComponent_Repeater* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class SH.SHMeleeAttack
class USHMeleeAttack : public UObject
{
public:
	enum class EMeleeAttackType                  Type;                                              // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_258F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EMeleeAttackType, TSubclassOf<class USHMeleeAttack>> NextAttacks;                                       // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bCanBeDodged;                                      // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2590[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttackDamageMod;                                   // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedBySenseiMod;                              // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2591[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AddStaminaCost;                                    // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAttackStopped;                                   // 0x90(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class USHMeleeAttack*                        PrevAttack;                                        // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHWeapon_MeleeBase*                   OwningWeapon;                                      // 0xA8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                          AttackTimer;                                       // 0xB0(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                          RecoveryTimer;                                     // 0xB8(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2593[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHMeleeAttack* GetDefaultObj();

	void Terminate();
	void Stopped();
	void Stop();
	void Start();
	void ServerTerminate();
	void ServerStop();
	void ServerStart();
	void ServerContinue();
	void PlayTerminate();
	void PlayStop();
	void PlayStart();
	void PlayContinue();
	void MulticastTerminate();
	void MulticastStop();
	void MulticastStart();
	void MulticastContinue();
	bool IsPlayingRecovery();
	bool IsPlaying();
	void GoRecoveryState();
	enum class EMeleeAttackType GetType();
	float GetStaminaCost();
	class USHMeleeAttack* GetPrevAttack();
	void Continue();
	bool CanBePlayed();
};

// 0x38 (0x100 - 0xC8)
// Class SH.SHMeleeAttack_Base
class USHMeleeAttack_Base : public USHMeleeAttack
{
public:
	struct FWeaponAnimMontageInfo                StartAnimation;                                    // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                AttackAnimation;                                   // 0xE0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RecoveryDelay;                                     // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoveryDuration;                                  // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHMeleeAttack_Base* GetDefaultObj();

};

// 0x20 (0xE8 - 0xC8)
// Class SH.SHMeleeAttack_Block
class USHMeleeAttack_Block : public USHMeleeAttack
{
public:
	struct FWeaponAnimMontageInfo                BlockAnimation;                                    // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_259E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHMeleeAttack_Block* GetDefaultObj();

	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnBlockHit();
	void OnBlockBroken();
};

// 0x18 (0xE0 - 0xC8)
// Class SH.SHMeleeAttack_Simple
class USHMeleeAttack_Simple : public USHMeleeAttack
{
public:
	struct FWeaponAnimMontageInfo                AttackAnimation;                                   // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHMeleeAttack_Simple* GetDefaultObj();

};

// 0x8 (0xE8 - 0xE0)
// Class SH.SHMeleeAttack_BlockAttack
class USHMeleeAttack_BlockAttack : public USHMeleeAttack_Simple
{
public:
	float                                        StaminaCost;                                       // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_259F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHMeleeAttack_BlockAttack* GetDefaultObj();

};

// 0x38 (0x100 - 0xC8)
// Class SH.SHMeleeAttack_FromJump
class USHMeleeAttack_FromJump : public USHMeleeAttack
{
public:
	struct FWeaponAnimMontageInfo                JumpAnimation;                                     // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                LandingAnimation;                                  // 0xE0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AttackRadius;                                      // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaCost;                                       // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHMeleeAttack_FromJump* GetDefaultObj();

	void OnLanded(struct FHitResult& Hit);
	void MulticastOnLanded();
};

// 0x58 (0x120 - 0xC8)
// Class SH.SHMeleeAttack_FromStealth
class USHMeleeAttack_FromStealth : public USHMeleeAttack
{
public:
	uint8                                        Pad_25A1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponAnimMontageInfo                MoveAnimation;                                     // 0xD0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                HitAnimation;                                      // 0xE8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AttackDistance;                                    // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaCost;                                       // 0x104(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHLostControlEffect>      LostControlClass;                                  // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHCharacter*                          _target;                                           // 0x110(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_25A3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHMeleeAttack_FromStealth* GetDefaultObj();

	void ServerSetTarget(class ASHCharacter* Target);
};

// 0x58 (0x120 - 0xC8)
// Class SH.SHMeleeAttack_Power
class USHMeleeAttack_Power : public USHMeleeAttack
{
public:
	struct FWeaponAnimMontageInfo                PrepareAnimation;                                  // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                LoopAnimation;                                     // 0xE0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                FinishAnimation;                                   // 0xF8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FinishRecoveryDelay;                               // 0x110(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FinishRecoveryDuration;                            // 0x114(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FinishBeginWindow;                                 // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25A9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHMeleeAttack_Power* GetDefaultObj();

};

// 0x60 (0x128 - 0xC8)
// Class SH.SHMeleeAttack_ThrowWeapon
class USHMeleeAttack_ThrowWeapon : public USHMeleeAttack
{
public:
	struct FWeaponAnimMontageInfo                StartAnimation;                                    // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponAnimMontageInfo                ThrowAnimation;                                    // 0xE0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LaunchWeaponDelay;                                 // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaCost;                                       // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHWeapon_MeleeBase*                   SpawnedWeapon;                                     // 0x100(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USHInventorySlot*                      SpawnedFromSlot;                                   // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_25B0[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHMeleeAttack_ThrowWeapon* GetDefaultObj();

	void Throw();
	void ServerPlayThrow();
	void PlayThrow();
	void OnRep_SpawnedWeapon();
	void MulticastPlayThrow();
};

// 0x0 (0xE0 - 0xE0)
// Class SH.SHMeleeAttack_Weak
class USHMeleeAttack_Weak : public USHMeleeAttack_Simple
{
public:

	static class UClass* StaticClass();
	static class USHMeleeAttack_Weak* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SH.SHModifierListener
class ISHModifierListener : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISHModifierListener* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class SH.SHMonstrumActivator
class ASHMonstrumActivator : public AActor
{
public:
	uint8                                        Pad_25B6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bMonstrumActivated;                                // 0x228(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25B7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHMonstrumActivator* GetDefaultObj();

	void OnMonstrumActivated();
	bool IsMonstrumActivated();
};

// 0x48 (0xF8 - 0xB0)
// Class SH.SHMonstrumComponent
class USHMonstrumComponent : public UActorComponent
{
public:
	class UDataTable*                            MonstrumInfoDataTable;                             // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMonstrumSave>                 LoadedSaveData;                                    // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContextString;                                     // 0xC8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInitialized;                                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_25BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMonstrumInfo>                 _monstrumInfo;                                     // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMonstrumAvailable;                                // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_25C0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHMonstrumComponent* GetDefaultObj();

	void MonsterKilled(TSubclassOf<class AActor> MonsterClass);
	void LoadSaveData(const struct FMonstrumSaveInfo& SaveData);
	void Learn(TSubclassOf<class AActor> MonsterClass);
	bool IsMonstrumAvailable();
	struct FMonstrumSaveInfo GetSaveData();
	float GetMonstrumPerkModifier(enum class EMonstrumPerkType MonstrumPerkType, TSubclassOf<class AActor> MonsterClass, bool* Result);
	class FText GetMonstrumOpinion(int32 MonstrumID);
	struct FMonstrumInfo GetMonstrumInfo(int32 MonstrumID, bool* Result);
	float GetGlobalMonstrumPerkModifier(enum class EMonstrumPerkType MonstrumPerkType, bool* Result);
	int32 GetExperienceToLevel(class UDataTable* ExperienceRewardData, int32 Level);
	TArray<struct FMonstrumInfo> GetAllMonstrumInfo();
	void AddMonstrumExperienceFromDatatable(TSubclassOf<class AActor> MonsterClass, class UDataTable* DataTable, float Portion);
	void AddMonstrumExperience(int32 MonstrumID, int32 Experience);
	void ActivateMonstrum();
};

// 0x40 (0x230 - 0x1F0)
// Class SH.SHMountPointComponent
class USHMountPointComponent : public USceneComponent
{
public:
	class AActor*                                AttachedActor;                                     // 0x1F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PendingAttachedActor;                              // 0x1F8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsAttaching;                                       // 0x200(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsAttached;                                        // 0x201(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnActorAttached;                                   // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorDetached;                                   // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_25C2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHMountPointComponent* GetDefaultObj();

	void OnRep_AttachedActor();
	void Detach();
	void Attach(class AActor* AttachActor);
};

// 0xA0 (0x150 - 0xB0)
// Class SH.SHNotifyManagerComponent
class USHNotifyManagerComponent : public UActorComponent
{
public:
	bool                                         bInitialized;                                      // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNotifyAdded;                                     // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_25CB[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHNotifyManagerComponent* GetDefaultObj();

	void SetQuestNotifyShown(int32 QuestID);
	void SetNotifySkillsButton(bool bNotify);
	void SetNotifyMonstrumButton(bool bNotify);
	void SetNotifyJournalButton(bool bNotify);
	void SetNotifyCraftButton(bool bNotify);
	void SetNoteNotifyShown(int32 NoteCategoryID, int32 NoteId);
	void SetNeedQuestNotifyShow(int32 QuestID);
	void SetNeedNoteNotifyShow(int32 NoteCategoryID, int32 NoteId);
	void SetNeedMonstrumNotifyShow(int32 MonstrumID);
	void SetNeedCraftNotifyShow(int32 RecipeID);
	void SetMonstrumNotifyShown(int32 MonstrumID);
	void SetCraftNotifyShown(int32 RecipeID);
	bool IsNeedQuestNotifyShow(int32 QuestID);
	bool IsNeedNotifySkillsButton();
	bool IsNeedNotifyMonstrumButton();
	bool IsNeedNotifyJournalButton();
	bool IsNeedNotifyCraftButton();
	bool IsNeedNoteNotifyShow(int32 NoteCategoryID, int32 NoteId);
	bool IsNeedMonstrumNotifyShow(int32 MonstrumID);
	bool IsNeedCraftNotifyShow(int32 RecipeID);
};

// 0x58 (0x80 - 0x28)
// Class SH.SHOnlinePlayerInfo
class USHOnlinePlayerInfo : public UObject
{
public:
	class FString                                _PlayerName;                                       // 0x28(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      _PlayerUniqueID;                                   // 0x38(0x28)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        _Level;                                            // 0x60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        _Score;                                            // 0x64(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        _Deaths;                                           // 0x68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        _Health;                                           // 0x6C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        _PartyID;                                          // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_25CE[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHOnlinePlayerInfo* GetDefaultObj();

	void OnPromoteLeader();
	void OnPress();
	bool IsValid();
	bool IsOnline();
	bool IsLocalPlayer();
	bool IsInviteSent();
	bool IsInvitesBlocked();
	bool IsInviteReceived();
	bool IsInParty();
	int32 GetScore();
	struct FUniqueNetIdRepl GetPlayerUniqueID();
	class FString GetPlayerName();
	float GetPing();
	int32 GetPartyID();
	class USHParty* GetParty();
	int32 GetLevel();
	bool GetIsPartyLeader();
	float GetHealth();
	int32 GetDeaths();
};

// 0x0 (0xC8 - 0xC8)
// Class SH.SHParryAction
class USHParryAction : public USHCombatAction
{
public:

	static class UClass* StaticClass();
	static class USHParryAction* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class SH.SHParty
class USHParty : public UObject
{
public:
	int32                                        PartyId;                                           // 0x28(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_25CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUniqueNetIdRepl>              PartyMembers;                                      // 0x30(0x10)(Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      PartyLeader;                                       // 0x40(0x28)(Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      PartyOwner;                                        // 0x68(0x28)(Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USHParty* GetDefaultObj();

	void RemoveMember(struct FUniqueNetIdRepl& MemberToRemove);
	void PromoteLeader(struct FUniqueNetIdRepl& NewMember);
	struct FUniqueNetIdRepl GetPartyLeader();
	int32 GetPartyID();
	TArray<struct FUniqueNetIdRepl> GetMembers();
	void AddMember(struct FUniqueNetIdRepl& NewMember);
};

// 0x0 (0xF8 - 0xF8)
// Class SH.SHPawnSensingComponent
class USHPawnSensingComponent : public UPawnSensingComponent
{
public:

	static class UClass* StaticClass();
	static class USHPawnSensingComponent* GetDefaultObj();

	bool CouldSeePawn_K2(class APawn* Other, bool bMaySkipChecks);
	void CallUpdateAISensing();
};

// 0x0 (0x28 - 0x28)
// Class SH.SHPerksListener
class ISHPerksListener : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISHPerksListener* GetDefaultObj();

};

// 0x160 (0x210 - 0xB0)
// Class SH.SHPerksTreeComponent
class USHPerksTreeComponent : public UActorComponent
{
public:
	bool                                         bPerksInitialized;                                 // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPerkData>                     PerksData;                                         // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RespeckPointsAmount;                               // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalSkillPointsAmount;                            // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalAbilityPointsAmount;                          // 0xD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalKnowledgePointsAmount;                        // 0xD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FreeSkillPointsAmount;                             // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FreeAbilityPointsAmount;                           // 0xDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FreeKnowledgePointsAmount;                         // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHPlayerCharacter*                    OwnerPlayer;                                       // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EPerkType>                 LearnedPerks;                                      // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EPerkType>                 LearnedSkills;                                     // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EPerkType>                 LearnedAbilities;                                  // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EPerkType>                 LearnedKnowledge;                                  // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPerkData>                     RolledSkills;                                      // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPerkData>                     RolledAbilities;                                   // 0x140(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPerkData>                     RolledKnowledge;                                   // 0x150(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<enum class EPerkType, struct FPerkData> ParsedPerkData;                                    // 0x160(0x50)(Protected, NativeAccessSpecifierProtected)
	class UDataTable*                            PerksDataTable;                                    // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_25D5[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bForceSkillsReroll;                                // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bForceAbilitiesReroll;                             // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bForceKnowledgeReroll;                             // 0x20A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_25D6[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPerksTreeComponent* GetDefaultObj();

	void Unlearn(const TArray<enum class EPerkType>& UnlearnPerks);
	void ServerUnlearn(TArray<enum class EPerkType>& UnlearnPerks);
	void ServerLearn(enum class EPerkType PerkType);
	void ResetPerksTree();
	void OnRep_SkillTreeUpdated();
	void LoadSaveData(const struct FPerksSaveData& PerksSaveData);
	void Learn(enum class EPerkType PerkType);
	bool IsLearned(enum class EPerkType PerkType);
	struct FPerksSaveData GetSaveData();
	struct FPerkData GetPerkData(enum class EPerkType PerkType, bool* bDataFound);
	class ASHPlayerCharacter* GetOwnerPlayer();
	bool CanLearn(enum class EPerkType PerkType);
	void AddRespekPoint();
};

// 0xE0 (0x300 - 0x220)
// Class SH.SHPersonalRoom
class ASHPersonalRoom : public AActor
{
public:
	int32                                        SafezoneId;                                        // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RoomId;                                            // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPersonalRoomPlayerStart*            PlayerStart;                                       // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPersonalRoomPlayerStart*            SofaPlayerStart;                                   // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPersonalRoomTrophyInfo>       TrophiesInfo;                                      // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPersonalRoomPosterInfo>       PostersInfo;                                       // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPersonalRoomRelicInfo>        RelicsInfo;                                        // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPersonalTokenStorage*               PersonalTokenStorage;                              // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InnerStyleId;                                      // 0x270(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OuterStyleId;                                      // 0x274(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SofaId;                                            // 0x278(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CarpetId;                                          // 0x27C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastInnerStyleId;                                  // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastOuterStyleId;                                  // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSofaId;                                        // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastCarpetId;                                      // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPersonalRoomSaveInfo                 ConfigSaveInfo;                                    // 0x290(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x2F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHPersonalRoom* GetDefaultObj();

	void RedrawSofa();
	void RedrawPlayerName();
	void RedrawOuterStyle();
	void RedrawInnerStyle();
	void RedrawCarpet();
	void OnRep_PlayerName();
	void OnRep_ConfigSaveInfo();
	bool IsValidRoom();
	struct FTransform GetSpawnTransform();
	struct FTransform GetSofaSpawnTransform();
};

// 0x0 (0x230 - 0x230)
// Class SH.SHPersonalRoomPlayerStart
class ASHPersonalRoomPlayerStart : public ASHCustomPlayerStart
{
public:

	static class UClass* StaticClass();
	static class ASHPersonalRoomPlayerStart* GetDefaultObj();

};

// 0x228 (0x448 - 0x220)
// Class SH.SHPersonalRoomsManager
class ASHPersonalRoomsManager : public AActor
{
public:
	struct FPersonalRoomInfo                     FirstRoomInfo;                                     // 0x220(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPersonalRoomInfo                     SecondRoomInfo;                                    // 0x2A8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPersonalRoomInfo                     ThirdRoomInfo;                                     // 0x330(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPersonalRoomInfo                     FourthRoomInfo;                                    // 0x3B8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25DE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHPersonalRoomsManager* GetDefaultObj();

	struct FPersonalRoomInfo GetPlayerPersonalRoomInfo(class ASHPlayerController* PlayerController, bool* Result);
};

// 0x8 (0x410 - 0x408)
// Class SH.SHPersonalToken
class ASHPersonalToken : public ASHItem
{
public:
	int32                                        PersonalTokenId;                                   // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25DF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHPersonalToken* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class SH.SHPersonalTokenStorage
class ASHPersonalTokenStorage : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASHPersonalTokenStorage* GetDefaultObj();

	void UpdateTokensEvent(int32 PersonalTokens);
	void UpdateTokens(int32 PersonalTokens);
};

// 0x40 (0x2780 - 0x2740)
// Class SH.SHPlayerCameraManager
class ASHPlayerCameraManager : public APlayerCameraManager
{
public:
	uint8                                        Pad_25E1[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              DefaultCameraRotation;                             // 0x2760(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_25E2[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHPlayerCameraManager* GetDefaultObj();

};

// 0xA68 (0x13F0 - 0x988)
// Class SH.SHPlayerCharacter
class ASHPlayerCharacter : public ASHCharacter
{
public:
	bool                                         bInitialized;                                      // 0x988(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_262C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCameraShake>              MissCamShakeRL;                                    // 0x990(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              MissCamShakeLR;                                    // 0x998(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              MissCamShakeKick;                                  // 0x9A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              HitCamShakeLight;                                  // 0x9A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              HitCamShakeMedium;                                 // 0x9B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              HitCamShakeHeavy;                                  // 0x9B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              HitCamShakeKick;                                   // 0x9C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              HitBlockCamShakeLight;                             // 0x9C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              HitBlockCamShakeMedium;                            // 0x9D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              HitBlockCamShakeHeavy;                             // 0x9D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              ParryCamShake;                                     // 0x9E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              TakeHitCamShake;                                   // 0x9E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              TakeHitBlockCamShake;                              // 0x9F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              TakeHitBrokenBlockCamShake;                        // 0x9F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FPMesh;                                            // 0xA00(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalAnimationComponent*           FP_PhysicalAnimation;                              // 0xA08(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FP_ApplyPhysAnimationBelowBone;                    // 0xA10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FP_RightHandBelowBone;                             // 0xA18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FP_LeftHandBelowBone;                              // 0xA20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FP_DefaultPhysicsBlendWeight;                      // 0xA28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_262E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  FPCageMesh;                                        // 0xA30(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  TPCageMesh;                                        // 0xA38(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_262F[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USHEffectsManager*                     EffectsManager;                                    // 0xA50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHCharacterReactionsComponent*        CharacterReactionsComponent;                       // 0xA58(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat*                         Accuracy;                                          // 0xA60(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Bleeding*                Bleeding;                                          // 0xA68(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_CarryingCapacity*        CarryingCapacity;                                  // 0xA70(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Defence*                 Defence;                                           // 0xA78(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Hunger*                  Hunger;                                            // 0xA80(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Level*                   Level;                                             // 0xA88(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Money*                   Money;                                             // 0xA90(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Noise*                   Noise;                                             // 0xA98(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Oxygen*                  Oxygen;                                            // 0xAA0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Stamina*                 Stamina;                                           // 0xAA8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Stress*                  Stress;                                            // 0xAB0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Speed*                   Speed;                                             // 0xAB8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Thirsty*                 Thirsty;                                           // 0xAC0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Temperature*             Temperature;                                       // 0xAC8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Trauma*                  Trauma;                                            // 0xAD0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Poisoning*               Poisoning;                                         // 0xAD8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Fighting*                Fighting;                                          // 0xAE0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_Skills*                  Skills;                                            // 0xAE8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerStat_NeutralFraction*         NeutralFraction;                                   // 0xAF0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHJournalComponent*                   Journal;                                           // 0xAF8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHCraftComponent*                     Craft;                                             // 0xB00(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHMonstrumComponent*                  Monstrum;                                          // 0xB08(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHWeatherComponent*                   Weather;                                           // 0xB10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHCustomizationComponent*             Customization;                                     // 0xB18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHSkillTreeComponent*                 SkillTree;                                         // 0xB20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPerksTreeComponent*                 PerksTree;                                         // 0xB28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHTutorialComponent*                  Tutorial;                                          // 0xB30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHAchievementsComponent*              AchievementsComponent;                             // 0xB38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHNotifyManagerComponent*             NotifyManagerComponent;                            // 0xB40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHAnomalyFishingComponent*            AnomalyFishingComponent;                           // 0xB48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHReputationComponent*                Reputation;                                        // 0xB50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHWeatherEffectsActor*                WeatherEffectsActor;                               // 0xB58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHWeatherEffectsActor>    WeatherEffectsActorClass;                          // 0xB60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrowForce;                                        // 0xB68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2632[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   HeldActorComponent;                                // 0xB70(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsHoldingActor;                                    // 0xB78(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2633[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HotSlotCooldown;                                   // 0xB88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHotSlotOnCooldown;                                // 0xB8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2634[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHoldActor;                                       // 0xB90(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerThrowActor;                                // 0xBA0(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bOnRecipeLearned;                                  // 0xBB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnRecipeLearnedNotify;                            // 0xBB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnNoteLearnedNotify;                              // 0xBB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnSkillTreeUpdated;                               // 0xBB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2635[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnGotAggro;                                        // 0xBB8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnThrowHitAnomaly;                                 // 0xBC8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBleedingApplied;                                 // 0xBD8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTraumaApplied;                                   // 0xBE8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNoteLearned;                                     // 0xBF8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNoteLearnedNotify;                               // 0xC08(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRecipeLearned;                                   // 0xC18(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRecipeLearnedNotify;                             // 0xC28(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPoisoningApplied;                                // 0xC38(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSkillTreeUpdated;                                // 0xC48(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSkillLearnedNotify;                              // 0xC58(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemUnlocked;                                    // 0xC68(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnterDyingState;                                 // 0xC78(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLeaveDyingState;                                 // 0xC88(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNeutralsReputationChanged;                       // 0xC98(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRecipeCrafted;                                   // 0xCA8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMonstrumUpdate;                                  // 0xCB8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemPickedUp;                                    // 0xCC8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorUsed;                                       // 0xCD8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShowFirstArtefactSlot;                           // 0xCE8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHideFirstArtefactSlot;                           // 0xCF8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShowSecondArtefactSlot;                          // 0xD08(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHideSecondArtefactSlot;                          // 0xD18(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRangedWeaponNoAmmo;                              // 0xD28(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTradeComplete;                                   // 0xD38(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFlashlightSwitched;                              // 0xD48(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCharacterScreenOpened;                           // 0xD58(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCurrentInventorySlotChanged;                     // 0xD68(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCurrentWeaponSlotChanged;                        // 0xD78(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeginHoldUse;                                    // 0xD88(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEndHoldUse;                                      // 0xD98(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemExplored;                                    // 0xDA8(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class ASHFlashLight*                         Flashlight;                                        // 0xDB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHFlashLight>             FlashLightClass;                                   // 0xDC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FlashLightFPSocketName;                            // 0xDC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FlashLightTPSocketName;                            // 0xDD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2636[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHInventory*                          EquipmentInventory;                                // 0xDE0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEquipmentSlot                    CurrentWeaponSlot;                                 // 0xDE8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEquipmentSlot                    CurrentInventorySlot;                              // 0xDE9(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2637[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHInventory*                          QuestRewardsInventory;                             // 0xDF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHInventory*                          HatsInventory;                                     // 0xDF8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHInventory>              HatsInventoryClass;                                // 0xE00(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHProjectileItem>         DefaultThrownItemClass;                            // 0xE08(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInQuickItemSelectState;                          // 0xE10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCharacterUIOpen;                                 // 0xE11(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2639[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USHQuestDiaryComponent*                QuestDiaryComponent;                               // 0xE18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPostProcessComponent*                 PostProcessComponent;                              // 0xE20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       LowHealthWarningPlayer;                            // 0xE30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       AudioNoteComponent;                                // 0xE38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             LowHealthSound;                                    // 0xE40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             OnThrowSound;                                      // 0xE48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             OnPickedUpSound;                                   // 0xE50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             OnItemDropSound;                                   // 0xE58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             OnEnterLocationSound;                              // 0xE60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             OnTradeCompleteSound;                              // 0xE68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInStealth;                                       // 0xE70(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHLightVolume_Base*>           StealthVolumes;                                    // 0xE78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHGrassVolume*>                GrassVolumes;                                      // 0xE88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStealthState                     StealthState;                                      // 0xE98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         _isSilent;                                         // 0xE99(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHPlayerCharacter*>            RevivingPlayers;                                   // 0xEA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInDyingState;                                     // 0xEB0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReviveInProgress;                                 // 0xEB1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             DeathAmbientSound;                                 // 0xEB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             DeathHowlSound;                                    // 0xEC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USphereComponent*                      StressComponent;                                   // 0xEC8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIncomingChatMessage;                             // 0xED0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class ASHAICharacter*>                AttackEnemies;                                     // 0xEE0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHAICharacter*>                AggroEnemies;                                      // 0xEF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerState                      PlayerGameState;                                   // 0xF00(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerState                      LastPlayerGameState;                               // 0xF01(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerInFightWithPlayer;                          // 0xF02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StatePvpTimer;                                     // 0xF04(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263F[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEnterLocation;                                   // 0xF18(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLeaveLocation;                                   // 0xF28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TArray<class ASHLevelLocation*>              RegisteredLocations;                               // 0xF38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       SmoothPostProcess;                                 // 0xF48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2641[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFootstepsNoiseProperties             FootstepsNoiseProperties;                          // 0xFA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFootstepsNoiseProperties             FootstepsNoisePropertiesCache;                     // 0xFC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BonusAiDamageMultiplier;                           // 0xFD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2643[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHWeapon_Fist>            FistWeaponClass;                                   // 0xFE0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHWeapon*                             FistWeapon;                                        // 0xFE8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FlashlightMaterial;                                // 0xFF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FlashlightMaterialIndex;                           // 0xFF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2647[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicFlashlightMaterial;                         // 0x1000(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHItem>                   DefaultMoneyItemClass;                             // 0x1008(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                HatSkeletalMesh;                                   // 0x1010(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                HairSkeletalMesh;                                  // 0x1018(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                MustacheSkeletalMesh;                              // 0x1020(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_HeadMesh;                                       // 0x1028(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_EyesMesh;                                       // 0x1030(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_HandsMesh;                                      // 0x1038(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_JacketMesh;                                     // 0x1040(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_DecorMesh;                                      // 0x1048(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_PantsMesh;                                      // 0x1050(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_HandsMesh;                                      // 0x1058(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_JacketMesh;                                     // 0x1060(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_DecorMesh;                                      // 0x1068(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_PantsMesh;                                      // 0x1070(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                BackpackSkeletalMesh;                              // 0x1078(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_StuffMesh1;                                     // 0x1080(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_StuffMesh1;                                     // 0x1088(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_StuffMesh2;                                     // 0x1090(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_StuffMesh2;                                     // 0x1098(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_StuffMesh3;                                     // 0x10A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_StuffMesh3;                                     // 0x10A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_StuffMesh4;                                     // 0x10B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_StuffMesh4;                                     // 0x10B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_StuffMesh5;                                     // 0x10C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_StuffMesh5;                                     // 0x10C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_StuffMesh6;                                     // 0x10D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_StuffMesh6;                                     // 0x10D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FP_StuffMesh7;                                     // 0x10E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TP_StuffMesh7;                                     // 0x10E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterNoiseVolume;                              // 0x10F0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2649[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHInventory*                          SafezoneInventory;                                 // 0x1100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHInventory*                          SecretSponsorSafezoneInventory;                    // 0x1108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecretSponsorSafezoneInventoryRollTime;            // 0x1110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GirlScreamerCurrentIteration;                      // 0x1114(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GirlScreamerTimeToRespawn;                         // 0x1118(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGirlReadyToSpawn;                                 // 0x111C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_264B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GirlScreamerRechargeTime;                          // 0x1120(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeathMoneyDropRate;                                // 0x1124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bColdBreathActive;                                 // 0x1128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_264C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            HeavyAttackStart;                                  // 0x1130(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HeavyAttackStop;                                   // 0x1140(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FChestArmorMeshesList                 ChestArmorCache;                                   // 0x1150(0xB0)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ASHChestArmor*                         CurrentChestArmor;                                 // 0x1200(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrokenArmorPenaulty;                               // 0x1208(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_264D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class USHDamageType>>     ArmorReductionDamageTypes;                         // 0x1210(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CheatsGiveItemsEvent;                              // 0x1220(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CheatsGiveItemsQuestEvent;                         // 0x1230(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bPveMode;                                          // 0x1240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFullDropEnabled;                                  // 0x1241(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_264F[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsExploring;                                      // 0x1250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2650[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTeleportFromStartingRoom;                        // 0x1258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class ASHHeavyItem*                          CarryingHeavyItem;                                 // 0x1268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCarryingHeavyItem : 1;                          // Mask: 0x1, PropSize: 0x10x1270(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BF : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2651[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHHeavyItem*                          AttachedCarryingHeavyItem;                         // 0x1278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReviveTime;                                        // 0x1280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeInDyingState;                                  // 0x1284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReviveHealth;                                      // 0x1288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeInDyingStateLeft;                              // 0x128C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimeInDyingStateLeft_Int;                          // 0x1290(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInLoadingState;                                 // 0x1294(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingCinematic;                               // 0x1295(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2653[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUVFlashlightEnabled;                             // 0x12A0(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bUseGlobalDamageModifier;                          // 0x12B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2654[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GlobalDamageModifier;                              // 0x12B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TempAiController1;                                 // 0x12B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TempAiController2;                                 // 0x12C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TempAiController3;                                 // 0x12C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TempAiController4;                                 // 0x12D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TempAiController5;                                 // 0x12D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TempAiController6;                                 // 0x12E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TempAiController7;                                 // 0x12E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TempAiController8;                                 // 0x12F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class ASHLostControlEffect>, float> LastControlEffectAppliedTime;                      // 0x12F8(0x50)(NativeAccessSpecifierPublic)
	class ASHLostControlEffect*                  CurrentLostControlEffect;                          // 0x1348(0x8)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              QTERotationCorrection;                             // 0x1350(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2657[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHAICharacter*                        BossCharacter;                                     // 0x1360(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBossCharacterSet;                                 // 0x1368(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2658[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StaticScreamerCooldown;                            // 0x136C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2659[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnReputationLevelChangedEvent;                     // 0x1380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReputationExperienceChangedEvent;                // 0x1390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNeutralsLevelChangedEvent;                       // 0x13A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNeutralsExperienceChangedEvent;                  // 0x13B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        VampireChance;                                     // 0x13C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VampireHealPercent;                                // 0x13C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWolfEyesActive;                                   // 0x13C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPredatorActive;                                   // 0x13C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInFromStealthAttackDistance;                    // 0x13CA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_265A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RealTimeSurvived;                                  // 0x13CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSurviveAchievementComplete;                       // 0x13D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGlobalScreamerOnCooldown;                         // 0x13D1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_265B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GlobalScreamerCooldown;                            // 0x13D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerStateInitialized;                           // 0x13D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_265C[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHPlayerCharacter* GetDefaultObj();

	void ValidateSublevels();
	void ValidateEquipmentSlots();
	void UpdateWolfEyes();
	void UpdateWeatherFromLocation();
	void UpdatePredator();
	void UpdatePlayerGameState();
	void UpdateGirlFinalIteration();
	void Unstuck();
	void UnregisterLocation(class ASHLevelLocation* Location);
	void StopSkyStressEvent();
	void StopReviving(class ASHPlayerCharacter* Player);
	void StopEffectsStressEvent();
	void StopCarryingHeavyItem();
	void StopActivity();
	void StaticScreamerSpawned();
	void StatGameClient();
	void StartSkyStressEvent();
	void StartReviving(class ASHPlayerCharacter* Player);
	void StartGlobalScreamerCooldown();
	void StartEffectsStressEvent();
	bool StartCarryingHeavyItem(class ASHHeavyItem* HeavyItem, class ASHHeavyItem* Spawner, const struct FItemLifetimeData& NewItemLifetimeData);
	void SpawnGirlScreamer();
	void SpawnBlankItem();
	void ShowWeaponCage();
	void ShowSubtitleLines(TArray<struct FSubtitlePhrase>& SubtitlePhrases);
	void ShowSubtitleLine(class FText& Actor, class FText& Subtitle);
	void SetIsInLoadingState(bool bNewValue);
	void SetIsExploring(bool bNewValue);
	void SetCurrentWeapon(class ASHWeapon* NewWeapon, class ASHWeapon* LastWeapon, bool bFromReplication);
	void SetChestArmor(class ASHChestArmor* Armor);
	void SetCharacterNoiseVolume(float Value);
	void SetCageMesh(class UStaticMesh* NewMesh);
	void ServerTryUnlockItem(class USHInventoryPlaceholder* Placeholder, class FName Password);
	void ServerThrowItem(class ASHItem* Item);
	void ServerThrowHeldActor();
	void ServerSetEquipmentSlot(enum class EEquipmentSlot SlotType, class USHInventorySlot* SourceSlot);
	void ServerOnUseHotSlot();
	void ServerOnObservedItemInUI(class USHInventoryPlaceholder* Placeholder);
	void ServerHoldActor(class UPrimitiveComponent* ActorComponent);
	void ServerDropActor();
	void SendChatMessageRPC(struct FSHChatMessage& ChatMessage);
	void SelectWeaponItem(enum class EEquipmentSlot Slot);
	void SelectPreviousWeaponItem();
	void SelectPreviousInventorySlot();
	void SelectNextWeaponItem();
	void SelectNextInventorySlot();
	void SelectInventoryItem(enum class EEquipmentSlot Slot);
	void RespawnDyingPlayer();
	void ResetArmor();
	void RemoveEnemy(class ASHAICharacter* Character);
	void RemoveBlendableMaterial(class UObject* Obj);
	bool RemoveBlendable(class UObject* Obj);
	void RemoveBlankItem();
	void RegisterLocation(class ASHLevelLocation* Location);
	void OpenMenu();
	bool OnTeleportation();
	void OnStressEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnStressBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnStealthStopClient();
	bool OnStealthStop();
	void OnStealthStartClient();
	bool OnStealthStart();
	void OnShowLoadingScreen();
	void OnRepairItem(TSubclassOf<class ASHItem> ItemClass);
	void OnRep_WeatherEffectsActor();
	void OnRep_SelectedWeaponSlot();
	void OnRep_SelectedInventorySlot();
	void OnRep_PlayerGameState();
	void OnRep_IsInLoadingState();
	void OnRep_HoldActor();
	void OnRep_FlashLight();
	void OnRep_CurrentLostControlEffect();
	void OnRep_ColdBreathActive();
	void OnRep_CarryingHeavyItem();
	void OnRep_bInDyingState();
	bool OnPlayerGameStateChanged();
	void OnLoudSound(const struct FVector& NoiseLocation, float Volume);
	void OnLeaveStealthLightingVolume(class ASHLightVolume_Base* Volume);
	void OnLeaveGrassVolume(class ASHGrassVolume* Volume);
	bool OnKillSomebodyEvent(class ASHCharacter* Somebody);
	void OnHotSlotCooldown();
	void OnHideLoadingScreen();
	void OnGlobalScreamerCooldown();
	void OnEnterStealthLightingVolume(class ASHLightVolume_Base* Volume);
	void OnEnterGrassVolume(class ASHGrassVolume* Volume);
	void OnDisassembleItem(TSubclassOf<class ASHItem> ItemClass);
	void OnContainerOpen(class USoundCue* SoundCue);
	bool OnColdBreathStop();
	bool OnColdBreathStart();
	void MulticastDropActor();
	void LeaveLocation(class ASHLevelLocation* Location);
	bool IsUnderControlEffect();
	bool IsStealthVisible(const struct FVector& Location, float SightRadius);
	bool IsSilent();
	bool IsReadyForStaticScreamer();
	bool IsInTheSameParty(class ASHPlayerCharacter* Character);
	bool IsInQTE();
	bool IsInLoadingState();
	bool IsInFirstPerson();
	bool IsGlobalScreamerReady();
	bool IsCarryingHeavyItem();
	bool InDyingState();
	void HideWeaponCage();
	void HideSubtitleWidget();
	bool GirlReadyToSpawn();
	class ASHLevelLocation* GetWeatherLocation();
	struct FTransform GetSaveTransform();
	class USkeletalMeshComponent* GetPawnMesh();
	class UMaterialInstanceDynamic* GetOrAddBlendableMaterialInstance(class UObject* Obj);
	class FText GetMainQuestProgress();
	struct FVector GetLastDeathLocation(bool* Result);
	bool GetIsExploring();
	class USHInventorySlot* GetEquipmentSlot(enum class EEquipmentSlot SlotType);
	enum class EEquipmentSlot GetEmptyWeaponEquipmentSlot();
	void EnterLocation(class ASHLevelLocation* Location);
	void EnableWolfEyes();
	void EnablePredator();
	void EnableNightTravelerEvent();
	void EnableNightTraveler();
	void DisableWolfEyes();
	void DisablePredator();
	void DisableNightTravelerEvent();
	void DisableNightTraveler();
	void DamageToPlayer();
	void ClientUVFlashlightEnabled();
	void ClientUpdateWolfEyes();
	void ClientUpdatePredator();
	void ClientSublevelsLoadingComplete();
	void ClientShowSecondArtefactSlot();
	void ClientShowFirstArtefactSlot();
	void ClientOnTradeComplete(bool Success);
	void ClientOnThrowItem();
	void ClientOnSkillLearnedNotify();
	void ClientOnReputationLevelChanged(TSubclassOf<class ASHAICharacter> NPC, int32 ReputationLevel);
	void ClientOnReputationExperienceChanged(TSubclassOf<class ASHAICharacter> NPC, float ReputationCurrentExperience, float ReputationExperienceToLevel, float ReputationExperienceReceived, int32 ReputationLevel);
	void ClientOnRecipeLearnedNotify(int32 RecipeID);
	void ClientOnRecipeLearned(int32 RecipeID);
	void ClientOnPickedUpItem();
	void ClientOnNoteLearned(int32 NoteCategory, int32 NoteId, bool bNotify);
	void ClientOnNeutralsLevelChanged(int32 NeutralsLevel);
	void ClientOnNeutralsExperienceChanged(float NeutralsCurrentExperience, float NeutralsExperienceToLevel, float NeutralsExperienceReceived, int32 NeutralsLevel);
	void ClientOnMonstrumUpdate(int32 MonstrumID);
	void ClientOnItemUsed(TSubclassOf<class ASHItem> ItemClass);
	void ClientOnItemUnlocked(class USHInventoryPlaceholder* Placeholder);
	void ClientOnGotTrauma();
	void ClientOnGotPoisoning();
	void ClientOnGotBleeding();
	void ClientOnDropItem();
	void ClientHideSecondArtefactSlot();
	void ClientHideFirstArtefactSlot();
	void ClienOnSkillTreeUpdated();
	void ChatMessageFromServer(struct FSHChatMessage& ChatMessage);
	void CharacterNoiseVolumeCallback();
	bool CanShowTutorial();
	bool CanRun();
	void CalculateStealthState();
	void CalculateStealth();
	void CalculateSilent();
	void CacheDefaultArmor();
	bool ApplyLostControlEffect(TSubclassOf<class ASHLostControlEffect> ControlEffectClass);
	void ApplyChestArmorMeshes(const struct FChestArmorMeshesList& ChestArmorMeshesList);
	void AddEnemy(class ASHAICharacter* Character);
	bool AddBlendable(class UObject* Obj);
};

// 0xC8 (0xF0 - 0x28)
// Class SH.SHPlayerCharacterSaveData
class USHPlayerCharacterSaveData : public USaveGame
{
public:
	uint8                                        Pad_2660[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerCharacterSaveData              PlayerCharacterSaveData;                           // 0x30(0xC0)(Edit, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHPlayerCharacterSaveData* GetDefaultObj();

};

// 0x1D0 (0x740 - 0x570)
// Class SH.SHPlayerController
class ASHPlayerController : public APlayerController
{
public:
	uint8                                        Pad_2690[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseTurnRate;                                      // 0x574(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseLookUpRate;                                    // 0x578(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsSprintToggle : 1;                               // Mask: 0x1, PropSize: 0x10x57C(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C7 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2691[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RespawnDelay;                                      // 0x580(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2692[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RespawnTime;                                       // 0x590(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadyToSpawn;                                     // 0x594(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheatsActivated;                                  // 0x595(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2693[0x1A];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EBaseRespawnType                  BaseRespawnType;                                   // 0x5B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvitesBlocked;                                   // 0x5B1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2694[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUpdateOnlineUI;                                  // 0x5B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIncomingInvite;                                  // 0x5C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              IncomingInvites;                                   // 0x5D8(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              SentInvites;                                       // 0x5E8(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPersonalRoomSaveInfo                 PersonalRoomSaveInfo;                              // 0x5F8(0x60)(NativeAccessSpecifierPublic)
	struct FStartingRoomSaveInfo                 StartingRoomSaveInfo;                              // 0x658(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShowLoadingScreen;                                // 0x65C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2696[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSendBugReportResponse;                           // 0x660(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetPatchNotesResponse;                           // 0x670(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2697[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayDialogInfo                       CurrentPlayingDialog;                              // 0x690(0x20)(NativeAccessSpecifierPublic)
	class UAudioComponent*                       CurrentPlayingDialogWave;                          // 0x6B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCurrentDialogSkipped;                            // 0x6B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<int32>                                Trophies;                                          // 0x6C8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Posters;                                           // 0x6D8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Relics;                                            // 0x6E8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PersonalTokens;                                    // 0x6F8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DoubleJumpTime;                                    // 0x708(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2699[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnGameViewportLostFocus;                           // 0x710(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGameViewportReceivedFocus;                       // 0x720(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_269A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHPlayerController* GetDefaultObj();

	void SynchronizePlatinumEvent();
	void SynchronizePlatinumClient();
	void SkipCurrentDialog();
	void SetMark(struct FVector2D& WorldLocation, struct FVector2D& MapLocation);
	void SetInvitesBlocked(bool NewInvitesBlocked);
	void ServerTeleportToPersonalRoomSofa();
	void ServerRespawnByType(enum class ERespawnType RespawnType);
	void ServerOnJump();
	void SendBugReport(const class FString& Nickname, const class FString& SenderEmail, const class FString& Report);
	void SelectWeaponItem(enum class EEquipmentSlot Slot);
	void SelectPreviousWeaponItem();
	void SelectPreviousInventorySlot();
	void SelectNextWeaponItem();
	void SelectNextInventorySlot();
	void SelectInventorySlot(enum class EEquipmentSlot Slot);
	void SaveDataLoaded();
	void Save();
	void RespawnByType(enum class ERespawnType RespawnType);
	void Respawn();
	void ResetMark();
	void Promote(struct FUniqueNetIdRepl& PlayerID);
	void OnStopKick();
	void OnSofaReceived(int32 SofaId);
	void OnSessionInviteReceived(int32 LocalPlayerNum, const struct FSHUniqueNetId& PersonInviting, const class FString& AppId, struct FBlueprintSessionResult& SessionToJoin);
	void OnSessionInviteAccepted(const struct FSHUniqueNetId& PersonInviting, struct FBlueprintSessionResult& SearchResult);
	void OnRep_SentInvites();
	void OnRep_IncomingInvites();
	void OnOuterStyleReceived(int32 OuterStyleId);
	void OnNeedRefreshOnlineUI();
	void OnInviteResponse(struct FUniqueNetIdRepl& PlayerID, enum class EInviteResponse Response);
	void OnInviteRequest(struct FUniqueNetIdRepl& FromPlayerID);
	void OnInnerStyleReceived(int32 InnerStyleId);
	void OnCarpetReceived(int32 CarpetId);
	void OnBanned(class FText& BanReason);
	void LeaveParty();
	void Kick(struct FUniqueNetIdRepl& PlayerID);
	bool IsTrophyReceived(int32 TrophyId);
	bool IsSingleplayer();
	bool IsRelicReceived(int32 RelicId);
	bool IsReadyToSpawn();
	bool IsPosterReceived(int32 PosterId);
	bool IsPlayingDialog();
	bool IsPersonalTokenReceived(int32 PersonalTokenId);
	bool IsInvitesBlocked();
	bool IsGameInputAllowed();
	void Invite(struct FUniqueNetIdRepl& PlayerID);
	void GiveSedativeAchievement();
	void GiveSafeZoneAchievement();
	void GiveMadmanLoveStoryAchievement();
	void GiveLuckyIkarAchievement();
	void GiveJournalAchievement();
	void GiveGoliathFallAchievement();
	void GiveBriefingAchievement();
	void GiveAchievementEvent(enum class EAchievement Achievement);
	void GiveAchievementClient(enum class EAchievement Achievement);
	void GiveAchievement(class FName AchievementsName);
	struct FTransform GetSafeRespawnTransform();
	void GetPatchNotesRequest();
	TArray<class ASHPlayerState*> GetPartyStates();
	int32 GetPartySize();
	void FailedToSpawnPawnDelayCallback();
	void EnableMovement(bool NewSetting);
	void CreateParty();
	void ClientPlayDialogFromOverlays(class USoundWave* DialogWave, class ULocalizedOverlays* Overlays);
	void ClientBanned(class FText& BanReason);
	void ClearDialogQueue();
	bool CanShowTutorial();
	void AcceptInvite(struct FUniqueNetIdRepl& FromPlayerID);
};

// 0x58 (0x108 - 0xB0)
// Class SH.SHPlayerOnlineComponent
class USHPlayerOnlineComponent : public UActorComponent
{
public:
	float                                        InviteLifetime;                                    // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPartySize;                                      // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PartyLeaderOfflineMaxSeconds;                      // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUpdateSession;                                   // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class USHOnlinePlayerInfo*>           OnlinePlayerInfos;                                 // 0xD0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSHInviteInfo>                 ActiveInvites;                                     // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USHParty*>                      Parties;                                           // 0xF8(0x10)(Net, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USHPlayerOnlineComponent* GetDefaultObj();

	void PromoteLeader(class USHParty* Party, struct FUniqueNetIdRepl& SenderID, struct FUniqueNetIdRepl& TargetID);
	void LeaveParty(struct FUniqueNetIdRepl& SenderID);
	void KickPlayer(class USHParty* Party, struct FUniqueNetIdRepl& SenderID, struct FUniqueNetIdRepl& TargetID);
	void InvitePlayer(struct FUniqueNetIdRepl& InviterID, struct FUniqueNetIdRepl& TargetID);
	class USHOnlinePlayerInfo* GetOnlinePlayerInfo(struct FUniqueNetIdRepl& PlayerID);
	void AcceptInvite(struct FUniqueNetIdRepl& AccepterID, struct FUniqueNetIdRepl& InviteFromPlayerID);
};

// 0x230 (0x258 - 0x28)
// Class SH.SHPlayerProfileSaveData
class USHPlayerProfileSaveData : public USaveGame
{
public:
	struct FPlayerProfileSaveData                PlayerProfileSaveData;                             // 0x28(0x230)(Edit, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHPlayerProfileSaveData* GetDefaultObj();

};

// 0x0 (0x248 - 0x248)
// Class SH.SHPlayerStart
class ASHPlayerStart : public ANavigationObjectBase
{
public:

	static class UClass* StaticClass();
	static class ASHPlayerStart* GetDefaultObj();

};

// 0x68 (0x118 - 0xB0)
// Class SH.SHPlayerStat
class USHPlayerStat : public UActorComponent
{
public:
	uint8                                        Pad_26B3[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Default;                                           // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xCC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xD0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultMax;                                        // 0xD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHDebuff*>                     Debuffs;                                           // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInSafeZone;                                     // 0xE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EffectsReady;                                      // 0xE9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26B5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        _value;                                            // 0xEC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        _valueRounded;                                     // 0xF0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LastReplicatedValue;                               // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        _percentageValue;                                  // 0xF8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bMaxInitialized;                                   // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHCharacter*                          OwnerCharacter;                                    // 0x100(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHPlayerCharacter*                    OwnerPlayerCharacter;                              // 0x108(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDontClampMax;                                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRoundReplicationValueToTenths;                    // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26B9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat* GetDefaultObj();

	void Substract(float Value);
	void SetValue(float Value);
	void SetPercent(float Value);
	void SetMin(float Value);
	void SetMax(float Value);
	void Reset();
	void On_RepValue();
	float GetValue();
	float GetUIValue();
	float GetUIPercentageValue();
	float GetUIMinValue();
	float GetUIMaxValue();
	float GetPercentageValue();
	float GetMinValue();
	float GetMaxValue();
	float GetDefaultValue();
	float GetDefaultMaxValue();
	void AddPercent(float Value);
	void Add(float Value);
};

// 0x8 (0x120 - 0x118)
// Class SH.SHPlayerStat_Armor
class USHPlayerStat_Armor : public USHPlayerStat
{
public:
	float                                        ConstantArmorFreezingModifier;                     // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentArmorFreezingModifier;                      // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHPlayerStat_Armor* GetDefaultObj();

};

// 0x38 (0x150 - 0x118)
// Class SH.SHPlayerStat_Bleeding
class USHPlayerStat_Bleeding : public USHPlayerStat
{
public:
	float                                        BleedingChanceEffectsMod;                          // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BleedingChanceMaxEffectsMod;                       // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBleedingApplied;                                 // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        BleedingMaxEffectsMod;                             // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26BD[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StatusEffectsDamageModifier;                       // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BleedingUpdateTime;                                // 0x144(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BleedingTotalDuration;                             // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BleedingCurrentDuration;                           // 0x14C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHPlayerStat_Bleeding* GetDefaultObj();

	void UpdateBleeding();
	void TryAddBleeding(float Value);
	void SetBleedingMaxEffectsMod(float NewValue);
	void SetBleedingChanceEffectsMod(float NewValue);
	bool IsBleeding();
};

// 0x60 (0x178 - 0x118)
// Class SH.SHPlayerStat_CarryingCapacity
class USHPlayerStat_CarryingCapacity : public USHPlayerStat
{
public:
	float                                        CarryingCapacityEffectsMod;                        // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CarryingCapacityMaxEffectsMod;                     // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             LowWeight;                                         // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 LowWeightClass;                                    // 0x128(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             MediumWeight;                                      // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 MediumWeightClass;                                 // 0x138(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             HighWeight;                                        // 0x140(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 HigWeightClass;                                    // 0x148(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HighWeightStateValue;                              // 0x150(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MediumWeightStateValue;                            // 0x154(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowWeightStateValue;                               // 0x158(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BonusCarryingCapacityValue;                        // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECarryingCapacityStage            CarryingCapacityStage;                             // 0x160(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26BE[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAbnormalTechnologyOneLearned;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbnormalTechnologyTwoLearned;                     // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHeavyTruckOneLearned;                             // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHeavyTruckTwoLearned;                             // 0x173(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_CarryingCapacity* GetDefaultObj();

	void SetCarryingCapacityEffectsMod(float NewValue);
	void OnUnlearnAllSkills();
	void OnInventoryWeightChanged(class AActor* Sender);
	void OnATTSkillLearned();
	void OnATOSkillLearned();
	bool IsOverloaded();
	enum class ECarryingCapacityStage GetCarryingCapacityStage();
	bool CanSprint();
};

// 0x78 (0x190 - 0x118)
// Class SH.SHPlayerStat_Defence
class USHPlayerStat_Defence : public USHPlayerStat
{
public:
	float                                        ArmorConstant;                                     // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmorFlat;                                         // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmorLessModifier;                                 // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmorDamageReduction;                              // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmorDamageReductionMax;                           // 0x128(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PsyDefenceConstant;                                // 0x12C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PsyDefenceFlat;                                    // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PsyDefenceLessModifier;                            // 0x134(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PsyDamageReduction;                                // 0x138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PsyDamageReductionMax;                             // 0x13C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnomalyDefenceConstant;                            // 0x140(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnomalyDefenceFlat;                                // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnomalyDefenceLessModifier;                        // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnomalyDamageReduction;                            // 0x14C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnomalyDamageReductionMax;                         // 0x150(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TemperatureDefenceConstant;                        // 0x154(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TemperatureDefenceFlat;                            // 0x158(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TemperatureDefenceLessModifier;                    // 0x15C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TemperatureDamageReduction;                        // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TemperatureDamageReductionMax;                     // 0x164(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillAnomalyResistanceCurrentValue;                // 0x168(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillAnomalyResistanceModifiedValue;               // 0x16C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillPsiResistanceCurrentValue;                    // 0x170(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillPsiResistanceModifiedValue;                   // 0x174(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnorerLearned;                                   // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkepticLearned;                                   // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26DA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModQTEBleedingModifier;                            // 0x17C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModQTEPoisoningModifier;                           // 0x180(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModQTEShockModifier;                               // 0x184(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModQTEBurningModifier;                             // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModQTESpecialMobModifier;                          // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHPlayerStat_Defence* GetDefaultObj();

	void SetModTemperatureDefenceLessModifier(float NewValue);
	void SetModTemperatureDefenceFlat(float NewValue);
	void SetModQTESpecialMobModifier(float NewValue);
	void SetModQTEShockModifier(float NewValue);
	void SetModQTEPoisoningModifier(float NewValue);
	void SetModQTEBurningModifier(float NewValue);
	void SetModQTEBleedingModifier(float NewValue);
	void SetModPsyDefenceLessModifier(float NewValue);
	void SetModPsyDefenceFlat(float NewValue);
	void SetModArmorLessModifier(float NewValue);
	void SetModArmorFlat(float NewValue);
	void SetModAnomalyDefenceLessModifier(float NewValue);
	void SetModAnomalyDefenceFlat(float NewValue);
	void OnUnlearnAllSkills();
	void OnPsiResistanceSkillLearned();
	void OnAnomalyResistanceSkillLearned();
	float GetTemperatureDamageReduction();
	float GetPsyDamageReduction();
	float GetModQTESpecialMobModifier();
	float GetModQTEShockModifier();
	float GetModQTEPoisoningModifier();
	float GetModQTEBurningModifier();
	float GetModQTEBleedingModifier();
	float GetArmorDamageReduction();
	float GetAnomalyDamageReduction();
	void CalculateTemperatureDamageReduction();
	void CalculatePsyDamageReduction();
	void CalculateArmorDamageReduction();
	void CalculateAnomalyDamageReduction();
};

// 0x28 (0x140 - 0x118)
// Class SH.SHPlayerStat_Fighting
class USHPlayerStat_Fighting : public USHPlayerStat
{
public:
	float                                        SkillAdvancedMeleeCurrentValue;                    // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillAdvancedMeleeModifiedValue;                   // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillMasterMeleeCurrentValue;                      // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillMasterMeleeModifiedValue;                     // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillKeenEyeCurrentValue;                          // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillKeenEyeModifiedValue;                         // 0x12C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSuperKeenEyeCurrentValue;                     // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSuperKeenEyeModifiedValue;                    // 0x134(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BonusDamageModifier;                               // 0x138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26DE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Fighting* GetDefaultObj();

	void SetBonusDamageModifier(float NewValue);
	void OnUnlearnAllSkills();
	void OnSuperKeenEyeSkillLearned();
	void OnMasterMeleeSkillLearned();
	void OnKeenEyeSkillLearned();
	void OnAdvancedMeleeSkillLearned();
	float GetRangeWeaponAccuracyModifier();
	float GetFistDamageModifier();
	float GetDamageModifier();
};

// 0x10 (0x128 - 0x118)
// Class SH.SHPlayerStat_Health
class USHPlayerStat_Health : public USHPlayerStat
{
public:
	int32                                        CardioHealthBonusLevel;                            // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillCardioBonusHealthPerLevel;                    // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHealthIncreaseOneLearned;                         // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHealthIncreaseTwoLearned;                         // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHealthIncreaseThreeLearned;                       // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E2[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Health* GetDefaultObj();

	void OnUnlearnAllSkills();
};

// 0x80 (0x198 - 0x118)
// Class SH.SHPlayerStat_Hunger
class USHPlayerStat_Hunger : public USHPlayerStat
{
public:
	float                                        DefaultHungerLossModifier;                         // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchingHungerLossModifier;                       // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkingHungerLossModifier;                         // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunningHungerLossModifier;                         // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstantHungerLossModifier;                        // 0x128(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentHungerLossModifier;                         // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HungerEffectsMod;                                  // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HungerMaxEffectsMod;                               // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             Exhaustion;                                        // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 ExhaustionClass;                                   // 0x140(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExhaustionStateValue;                              // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseRequirementsSpendingModifier;                  // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThriftyHungerBonusLevel;                           // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillThriftyBonusHungerPerLevel;                   // 0x154(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HealingEffectsReady;                               // 0x158(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHEffect*                             Selfhealing;                                       // 0x160(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 LowSelfHealingClass;                               // 0x168(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 NormalSelfHealingClass;                            // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             StopHealing;                                       // 0x178(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 StopHealingClass;                                  // 0x180(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfHealingStateValue;                             // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExhaustionActive;                                 // 0x18C(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHealingActive;                                    // 0x18D(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHungerActive;                                     // 0x18E(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHungerIncreaseOneLearned;                         // 0x18F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHungerIncreaseTwoLearned;                         // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHungerIncreaseThreeLearned;                       // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26ED[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Hunger* GetDefaultObj();

	void SetHungerEffectsMod(float NewValue);
	void OnUnlearnAllSkills();
	void MakeHungerDamage(float Value);
	bool IsSelfHealing();
	bool IsHunger();
	bool IsExhaustion();
};

// 0x68 (0x180 - 0x118)
// Class SH.SHPlayerStat_Level
class USHPlayerStat_Level : public USHPlayerStat
{
public:
	float                                        ExperienceToLevel;                                 // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentExperience;                                 // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelAdded;                                      // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnExperienceChanged;                               // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnExperienceAdded;                                 // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        QuestRewardExperienceModifier;                     // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            LevelRewardData;                                   // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            PlayerCharacterLevelUpData;                        // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            LocationUnlockRewardData;                          // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ContextString;                                     // 0x170(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USHPlayerStat_Level* GetDefaultObj();

	void SetExperienceToLevel(float Value);
	void SetCurrentExperience(float Value);
	void OnRep_ExperienceChanged();
	void OnLocationReached(class FText LocationName);
	class FString GetLevelAsString();
	float GetExperiencePercentage();
	float GetExperienceFromDatatable(class UDataTable* DataTable);
	void ClientOnLevelAdded();
	void ClientOnExperienceAdded(float Amount);
	void CalculateExperienceToLevel();
	void AddQuestRewardExperienceFromDatatable(class UDataTable* DataTable);
	void AddLevel();
	void AddExperienceFromDatatable(class UDataTable* DataTable, float Portion);
	void AddExperience(float Experience);
};

// 0x0 (0x118 - 0x118)
// Class SH.SHPlayerStat_Money
class USHPlayerStat_Money : public USHPlayerStat
{
public:

	static class UClass* StaticClass();
	static class USHPlayerStat_Money* GetDefaultObj();

	void RemoveMoney(float Amount);
	void AddQuestReward(float RewardMoney);
	void AddItemDisassemble(float DisassembleMoney);
	void AddDisassembleMoney(float Amount);
};

// 0x38 (0x150 - 0x118)
// Class SH.SHPlayerStat_NeutralFraction
class USHPlayerStat_NeutralFraction : public USHPlayerStat
{
public:
	float                                        UnlockedLevel;                                     // 0x118(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExperienceToLevel;                                 // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentExperience;                                 // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        QuestRewardExperienceModifier;                     // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHItem>                   FirstLevelUniqueRewardItemClass;                   // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            RewardData;                                        // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            PlayerCharacterLevelUpData;                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ContextString;                                     // 0x140(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USHPlayerStat_NeutralFraction* GetDefaultObj();

	void SetExperienceToLevel(float Value);
	void SetCurrentExperience(float Value);
	TArray<struct FQuestUniqueRewardItemInfo> GetUniqueRewardsToLevel(float RewardLevel);
	TArray<struct FQuestUniqueRewardItemInfo> GetNextUniqueReward(int32* RewardLevel);
	class FString GetMyLevelAsString(float FloatLevel);
	class FString GetLevelAsString();
	float GetExperiencePercentage();
	float GetExperienceFromDatatable(class UDataTable* DataTable);
	int32 GetActualLevel();
	void CalculateExperienceToLevel();
	void AddQuestRewardExperienceFromDatatable(class UDataTable* DataTable);
	void AddLevel();
	void AddExperienceFromDatatable(class UDataTable* DataTable, float Portion);
	void AddExperience(float Experience);
};

// 0x30 (0x148 - 0x118)
// Class SH.SHPlayerStat_Noise
class USHPlayerStat_Noise : public USHPlayerStat
{
public:
	float                                        NoiseChanceEffectsMod;                             // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseChanceMaxEffectsMod;                          // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseUpdateTime;                                   // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2715[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USoundCue*>                     Sounds;                                            // 0x128(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillQuietKittenCurrentValue;                      // 0x138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillQuietKittenModifiedValue;                     // 0x13C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2716[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Noise* GetDefaultObj();

	void SetNoiseChanceEffectsMod(float NewValue);
	void RemoveSound(class USoundCue* Sound);
	void OnUnlearnAllSkills();
	void OnQuietKittenSkillLearned();
	void AddSound(class USoundCue* Sound);
};

// 0x68 (0x180 - 0x118)
// Class SH.SHPlayerStat_Oxygen
class USHPlayerStat_Oxygen : public USHPlayerStat
{
public:
	float                                        SkillBigLungsCurrentValue;                         // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillBigLungsModifiedValue;                        // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             BreathHoldingStart;                                // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASHEffect>                 BreathHoldingStartClass;                           // 0x128(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHEffect*                             OxygenRegenerationStart;                           // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASHEffect>                 OxygenRegenerationStartClass;                      // 0x138(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHEffect*                             LowOxygen;                                         // 0x140(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASHEffect>                 LowOxygenClass;                                    // 0x148(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHEffect*                             ZeroOxygen;                                        // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASHEffect>                 ZeroOxygenClass;                                   // 0x158(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RegeneratePerSecond;                               // 0x160(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LosePerSecond;                                     // 0x164(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ZeroOxygenDamage;                                  // 0x168(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ZeroOxygenDamageTime;                              // 0x16C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2718[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRegenerate;                                       // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSubtract;                                         // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDealDamage;                                       // 0x17A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bBigLungsLearned;                                  // 0x17B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2719[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Oxygen* GetDefaultObj();

	void OnUnlearnAllSkills();
	void OnBigLungsSkillLearned();
	void LeaveOxygenlessArea();
	void EnterOxygenlessArea(float LosePerSecond);
};

// 0x18 (0x130 - 0x118)
// Class SH.SHPlayerStat_Poisoning
class USHPlayerStat_Poisoning : public USHPlayerStat
{
public:
	uint8                                        Pad_271B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PoisoningUpdateTime;                               // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoisoningTotalDuration;                            // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoisoningCurrentDuration;                          // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StatusEffectsDamageModifier;                       // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHPlayerStat_Poisoning* GetDefaultObj();

	void UpdatePoisoning();
	void StopPoisoning();
};

// 0x18 (0x130 - 0x118)
// Class SH.SHPlayerStat_Shield
class USHPlayerStat_Shield : public USHPlayerStat
{
public:
	float                                        ConstantShieldFreezingModifier;                    // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentShieldFreezingModifier;                     // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegenStartTime;                                    // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegenerationValue;                                 // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastUseTime;                                       // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRegenerate;                                       // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisableRegeneration;                              // 0x12D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_271C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Shield* GetDefaultObj();

};

// 0x108 (0x220 - 0x118)
// Class SH.SHPlayerStat_Skills
class USHPlayerStat_Skills : public USHPlayerStat
{
public:
	float                                        SkillNeatCurrentValue;                             // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillNeatModifiedValue;                            // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSuperNeatCurrentValue;                        // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSuperNeatModifiedValue;                       // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillLuckyBoyCurrentValue;                         // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillLuckyBoyModifiedValue;                        // 0x12C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRecipeLearnKey>               ChemistRecipeLearnKeys;                            // 0x130(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRecipeLearnKey>               MasterChemistRecipeLearnKeys;                      // 0x140(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTradeCharmingCurrentValue;                    // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTradeCharmingModifiedValue;                   // 0x154(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTradePrettyCurrentValue;                      // 0x158(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTradePrettyModifiedValue;                     // 0x15C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillPhysicalSuperSoldierCurrentValue;             // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillPhysicalSuperSoldierModifiedValue;            // 0x164(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkillSurvivalSleekHandsLearned;                    // 0x168(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkillSurvivalHackerLearned;                        // 0x169(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkillSurvivalCollectorLearned;                     // 0x16A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkillSurvivalWaterCarrierLearned;                  // 0x16B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkillSurvivalAnatomistLearned;                     // 0x16C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkillSurvivalSoulflayerLearned;                    // 0x16D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2734[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkillSurgeryCurrentValue;                          // 0x170(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSurgeryModifiedValue;                         // 0x174(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillImpudenceCurrentValue;                        // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillImpudenceModifiedValue;                       // 0x17C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSuperImpudenceCurrentValue;                   // 0x180(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSuperImpudenceModifiedValue;                  // 0x184(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SkillCraftEconomicalBonusLevel;                    // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillCraftEconomicalModifier;                      // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SkillCraftEconomicalRepairCostPerLevel;            // 0x190(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SkillCraftExpertBonusLevel;                        // 0x194(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillCraftExpertModifier;                          // 0x198(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SkillCraftExpertDurabilityPerLevel;                // 0x19C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCraftEconomicalOneLearned;                        // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCraftEconomicalTwoLearned;                        // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCraftEconomicalThreeLearned;                      // 0x1A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCraftChemistLearned;                              // 0x1A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCraftMasterChemistLearned;                        // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIcarusLearned;                                    // 0x1A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeaponThrowerLearned;                             // 0x1A6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeaponCarefulLearned;                             // 0x1A7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeaponLuckyLearned;                               // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCarBreakerLearned;                                // 0x1A9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraderOneLearned;                                 // 0x1AA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraderTwoLearned;                                 // 0x1AB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeaponMasterLearned;                              // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArmorMasterLearned;                               // 0x1AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVampireLearned;                                   // 0x1AE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2736[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GrenadeDamageOneModifier;                          // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrenadeDamageTwoModifier;                          // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KunaiDamageOneModifier;                            // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KunaiDamageTwoModifier;                            // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModificationElementalistOneModifier;               // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModificationElementalistTwoModifier;               // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModificationWizardOneModifier;                     // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModificationWizardTwoModifier;                     // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModificationEffectiveOneModifier;                  // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModificationEffectiveTwoModifier;                  // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SilentMovementModifier;                            // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LuckyShooterModifier;                              // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PersistentModifier;                                // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GourmetModifier;                                   // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SommelierModifier;                                 // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStorekeeperLearned;                               // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKannibaleLearned;                                 // 0x1ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2737[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeavyweightModifier;                               // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeaponRepairMasterOneLearned;                     // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeaponRepairMasterTwoLearned;                     // 0x1F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNightTravelerLearned;                             // 0x1F6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2738[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DeconstructorChance;                               // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQuestPartnerLearned;                              // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTallymanLearned;                                  // 0x1FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWolfEyesLearned;                                  // 0x1FE(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNinjaLearned;                                     // 0x1FF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPredatorLearned;                                  // 0x200(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSecretSponsorLearned;                             // 0x201(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRippedLearned;                                    // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReaperLearned;                                    // 0x203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKillerLearned;                                    // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDodgerLearned;                                    // 0x205(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVikingLearned;                                    // 0x206(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpartanLearned;                                   // 0x207(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkullCrusherLearned;                              // 0x208(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCombinerLearned;                                  // 0x209(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGliderLearned;                                    // 0x20A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShadowLearned;                                    // 0x20B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSenseiOneLearned;                                 // 0x20C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSenseiTwoLearned;                                 // 0x20D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_273C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SenseiModifier;                                    // 0x210(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSteadyHandLearned;                                // 0x214(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFishermanLearned;                                 // 0x215(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpecificsLearned;                                 // 0x216(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaterialCompressorOneLearned;                     // 0x217(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaterialCompressorTwoLearned;                     // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_273D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaterialCompressorModifier;                        // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHPlayerStat_Skills* GetDefaultObj();

	void UpdateCraftChemist();
	bool RollSecondWaterDrop();
	bool RollSecondSkinDrop();
	bool RollSecondPlantDrop();
	bool RollSecondMeatDrop();
	void OnUnlearnAllSkills();
	void OnTradePrettySkillLearned();
	void OnTradeCharmingSkillLearned();
	void OnSurvivalWaterCarrierSkillUnLearned();
	void OnSurvivalWaterCarrierSkillLearned();
	void OnSurvivalSoulflayerSkillUnLearned();
	void OnSurvivalSoulflayerSkillLearned();
	void OnSurvivalSleekHandsSkillUnLearned();
	void OnSurvivalSleekHandsSkillLearned();
	void OnSurvivalHackerSkillUnLearned();
	void OnSurvivalHackerSkillLearned();
	void OnSurvivalCollectorSkillUnLearned();
	void OnSurvivalCollectorSkillLearned();
	void OnSurvivalAnatomistSkillUnLearned();
	void OnSurvivalAnatomistSkillLearned();
	void OnSurgerySkillLearned();
	void OnSuperNeatSkillLearned();
	void OnSuperImpudenceSkillLearned();
	void OnRep_WolfEyesLearned();
	void OnRep_SecretSponsorLearned();
	void OnRep_PredatorLearned();
	void OnPhysicalSuperSoldierSkillLearned();
	void OnNeatSkillLearned();
	void OnMasterChemistSkillUnLearned();
	void OnMasterChemistSkillLearned();
	void OnLuckyBoySkillLearned();
	void OnImpudenceSkillLearned();
	void OnChemistSkillUnLearned();
	void OnChemistSkillLearned();
	bool IsWolfEyesLearnedLearned();
	bool IsWeaponThrowerLearned();
	bool IsWeaponMasterLearned();
	bool IsVikingLearned();
	bool IsVampire();
	bool IsTallymanLearned();
	bool IsStorekeeperLearned();
	bool IsSpecificsLearned();
	bool IsSpartanLearned();
	bool IsSkullCrusherLearned();
	bool IsShadowLearned();
	bool IsSecretSponsorLearnedLearned();
	bool IsQuestPartnerLearned();
	bool IsPredatorLearned();
	bool IsNinja();
	bool IsKillerLearned();
	bool IsKannibale();
	bool IsGliderLearned();
	bool IsFishermanLearned();
	bool IsDodgerLearned();
	bool IsCombinerLearned();
	bool IsCarBreakerLearned();
	bool IsArmorMasterLearned();
	float GetWeaponThrowModifier();
	float GetWeaponLuckyChance();
	int32 GetWeaponCraftBonusRepairChance();
	float GetWeaponCarefulChance();
	float GetSteadyHandModifier();
	float GetSommelierModifier();
	float GetSilentMovementModifier();
	float GetSenseiModifier();
	float GetPhysicalSuperSoldierMultiplier();
	float GetMaterialCompressorModifier();
	float GetLootListChanceModifier();
	float GetKunaiDamageModifier();
	float GetItemTradePriceModifier();
	float GetItemSellPriceModifier();
	float GetItemRepairCostSkillMultiplier();
	float GetItemDurabilityLostModifier();
	float GetIcarusModifier();
	float GetHeavyAttackDamageMultiplier();
	float GetGrenadeDamageModifier();
	float GetGourmetModifier();
	float GetDiseaseDurationModifier();
	int32 GetDeconstructorChance();
	float GetCriticalStrikeMultiplierModifier();
	float GetCriticalStrikeChanceModifier();
	float GetCraftItemSkillBonusDurability();
	float GetChanceToSaveAmmo();
	float GetChanceSaveDeathMoney();
	float GetAiTrophyLootChance();
	float GetAiModificationDurationModifier();
	float GetAiModificationDamageModifier();
	float GetAiModificationChanceModifier();
	float GetAiBonusLootChance();
	bool CanPickThirdLevelLock();
	bool CanPickSecondLevelLock();
};

// 0x48 (0x160 - 0x118)
// Class SH.SHPlayerStat_Speed
class USHPlayerStat_Speed : public USHPlayerStat
{
public:
	float                                        BasicSpeed;                                        // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchingSpeedModifier;                            // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchingSpeedModifierTotal;                       // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunningSpeedModifier;                              // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackwardsSpeedModifier;                            // 0x128(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SideWalkSpeedModifier;                             // 0x12C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PowerAttackSpeedModifier;                          // 0x130(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstantSpeedModifier;                             // 0x134(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedEffectsMod;                                   // 0x138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedMaxEffectsMod;                                // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunningSpeedEffectsMod;                            // 0x140(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunningSpeedMaxEffectsMod;                         // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentSpeed;                                      // 0x148(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillStealthExpertCurrentValue;                    // 0x14C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillStealthExpertModifiedValue;                   // 0x150(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillStealthMasterCurrentValue;                    // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillStealthMasterModifiedValue;                   // 0x158(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStealthExpertLearned;                             // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStealthMasterLearned;                             // 0x15D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2746[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Speed* GetDefaultObj();

	void SetSpeedEffectsMod(float NewValue);
	void SetRunningSpeedEffectsMod(float NewValue);
	void OnUnlearnAllSkills();
	void OnStealthMasterSkillLearned();
	void OnStealthExpertSkillLearned();
};

// 0x88 (0x1A0 - 0x118)
// Class SH.SHPlayerStat_Stamina
class USHPlayerStat_Stamina : public USHPlayerStat
{
public:
	float                                        JumpDecreaseAmount;                                // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunTickDecreaseAmount;                             // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegenStartTime;                                    // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstantStaminaRegenModifier;                      // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRunning;                                         // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasOutOfStamina;                                  // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2748[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StaminaRegenEffectsMod;                            // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaRegenMaxEffectsMod;                         // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaJumpCostEffectsMod;                         // 0x134(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaJumpCostMaxEffectsMod;                      // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaSprintCostEffectsMod;                       // 0x13C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaSprintCostMaxEffectsMod;                    // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHEffect*                             LowStamina;                                        // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 LowStaminaClass;                                   // 0x150(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             ZeroStamina;                                       // 0x158(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 ZeroStaminaClass;                                  // 0x160(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSprinterCurrentValue;                         // 0x168(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSprinterModifiedValue;                        // 0x16C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillAthleteCurrentValue;                          // 0x170(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillAthleteModifiedValue;                         // 0x174(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnduranceStaminaBonusLevel;                        // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillEnduranceBonusStaminaPerLevel;                // 0x17C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageTakenRecently;                              // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274B[0x15];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bStaminaIncreaseOneLearned;                        // 0x196(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStaminaIncreaseTwoLearned;                        // 0x197(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStaminaIncreaseThreeLearned;                      // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStaminaTimeSaverLearned;                          // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Stamina* GetDefaultObj();

	void SetStaminaSprintCostEffectsMod(float NewValue);
	void SetStaminaRegenEffectsMod(float NewValue);
	void SetStaminaJumpCostEffectsMod(float NewValue);
	void OnUnlearnAllSkills();
	void OnSprinterSkillLearned();
	void OnJumpPressed();
	void OnDamageTakenRecentlyCooldown();
	void OnAthleteSkillLearned();
	bool CanSprint();
	bool CanJump();
};

// 0xC8 (0x1E0 - 0x118)
// Class SH.SHPlayerStat_Stress
class USHPlayerStat_Stress : public USHPlayerStat
{
public:
	float                                        FirstPercentageStage;                              // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondPercentageStage;                             // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThirdPercentageStage;                              // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FourthPercentageStage;                             // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             FirstEffect;                                       // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 FirstEffectClass;                                  // 0x130(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             SecondEffect;                                      // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 SecondEffectClass;                                 // 0x140(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             ThirdEffect;                                       // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 ThirdEffectClass;                                  // 0x150(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             FourthEffect;                                      // 0x158(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 FourthEffectClass;                                 // 0x160(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             PsychosisEffect;                                   // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 PsychosisEffectClass;                              // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StressGainEffectsMod;                              // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StressGainEffectsModMax;                           // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StressLossEffectsMod;                              // 0x180(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StressLossEffectsModMax;                           // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalStressModifier;                              // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalStressModifierMax;                           // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2750[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RegenerationTimer;                                 // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalMonstersStressModifier;                       // 0x19C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalMonstersStressModifierMax;                    // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2751[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                StressSources;                                     // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHAICharacter*>                StressSourceCharacters;                            // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSettledCurrentValue;                          // 0x1C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillSettledModifiedValue;                         // 0x1CC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncomingStressModifier;                            // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStressStage                      StressStage;                                       // 0x1D4(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2752[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPhlegmaticOneLearned;                             // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPhlegmaticTwoLearned;                             // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPhlegmaticThreeLearned;                           // 0x1DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2753[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Stress* GetDefaultObj();

	void UpdateMonstersStressSource();
	void SetStressLossEffectsMod(float NewValue);
	void SetStressGainEffectsMod(float NewValue);
	void SetGlobalStressModifier(float NewValue);
	void RemoveMonstersStressSource(class ASHAICharacter* AICharacter);
	void RecoverStress(float Value);
	void OnUnlearnAllSkills();
	void OnSettledSkillLearned();
	void On_RepStressStage();
	void MakePsyDamage(float Value);
	bool IsInStress();
	enum class EStressStage GetStressStage();
	void AddMonstersStressSource(class ASHAICharacter* AICharacter);
};

// 0x98 (0x1B0 - 0x118)
// Class SH.SHPlayerStat_Temperature
class USHPlayerStat_Temperature : public USHPlayerStat
{
public:
	float                                        SkillHotBloodCurrentValue;                         // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillHotBloodModifiedValue;                        // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillsModifier;                                    // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrostbiteStateTempMax;                             // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChillsStateTempMax;                                // 0x128(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MiliariaStateTempMin;                              // 0x12C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeatStateTempMin;                                  // 0x130(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2754[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHEffect*                             ChillsEffect;                                      // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASHEffect>                 ChillsEffectClass;                                 // 0x140(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHEffect*                             FrostbiteEffect;                                   // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASHEffect>                 FrostbiteEffectClass;                              // 0x150(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHEffect*                             MiliariaEffect;                                    // 0x158(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASHEffect>                 MiliariaEffectClass;                               // 0x160(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHEffect*                             HeatEffect;                                        // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASHEffect>                 HeatEffectClass;                                   // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TemperatureConstant;                               // 0x178(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IdealTemperature;                                  // 0x17C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentIdealTemperature;                           // 0x180(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VolumeModifier;                                    // 0x184(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultMin;                                        // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultIdealTemperature;                           // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ArmorTempResistance;                               // 0x190(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2755[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHTemperatureVolume*>          TemperatureVolumes;                                // 0x198(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHotBloodLearned;                                  // 0x1A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2756[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Temperature* GetDefaultObj();

	void OnUnlearnAllSkills();
	void OnLeaveTemperatureVolume(class ASHTemperatureVolume* Volume);
	void OnHotBloodSkillLearned();
	void OnEnterTemperatureVolume(class ASHTemperatureVolume* Volume);
	bool IsHotBloodLearned();
	void CalculateIdealTemperature();
};

// 0x48 (0x160 - 0x118)
// Class SH.SHPlayerStat_Thirsty
class USHPlayerStat_Thirsty : public USHPlayerStat
{
public:
	float                                        DefaultThirstyLossModifier;                        // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchingThirstyLossModifier;                      // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkingThirstyLossModifier;                        // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunningThirstyLossModifier;                        // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstantThirstyLossModifier;                       // 0x128(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentThirstyLossModifier;                        // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThirstyEffectsMod;                                 // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThirstyMaxEffectsMod;                              // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             Dehydration;                                       // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 DehydrationClass;                                  // 0x140(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DehydrationStateValue;                             // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseRequirementsSpendingModifier;                  // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AquaticThirstyBonusLevel;                          // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillAquaticBonusThirstyPerLevel;                  // 0x154(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDehydrationActive;                                // 0x158(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bThirstyIncreaseOneLearned;                        // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bThirstyIncreaseTwoLearned;                        // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bThirstyIncreaseThreeLearned;                      // 0x15B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2757[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Thirsty* GetDefaultObj();

	void SetThirstyEffectsMod(float NewValue);
	void OnUnlearnAllSkills();
	bool IsDehydration();
};

// 0x130 (0x248 - 0x118)
// Class SH.SHPlayerStat_Trauma
class USHPlayerStat_Trauma : public USHPlayerStat
{
public:
	float                                        TraumaEffectsMod;                                  // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraumaMaxEffectsMod;                               // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             HeadLightTrauma;                                   // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 HeadLightTraumaClass;                              // 0x128(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             HeadHeavyTrauma;                                   // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 HeadHeavyTraumaClass;                              // 0x138(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               HeadTraumaComplication;                            // 0x140(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2759[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeadHeavyTraumaConst;                              // 0x144(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeadLightToHeavyTime;                              // 0x150(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHEffect*                             TorsoLightTrauma;                                  // 0x158(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 TorsoLightTraumaClass;                             // 0x160(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             TorsoHeavyTrauma;                                  // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 TorsoHeavyTraumaClass;                             // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               TorsoTraumaComplication;                           // 0x178(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TorsoHeavyTraumaConst;                             // 0x17C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TorsoLightToHeavyTime;                             // 0x188(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHEffect*                             ArmLightTrauma;                                    // 0x190(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 ArmLightTraumaClass;                               // 0x198(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             ArmHeavyTrauma;                                    // 0x1A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 ArmHeavyTraumaClass;                               // 0x1A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               ArmTraumaComplication;                             // 0x1B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArmHeavyTraumaConst;                               // 0x1B4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2760[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArmLightToHeavyTime;                               // 0x1C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2761[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHEffect*                             LegLightTrauma;                                    // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 LegLightTraumaClass;                               // 0x1D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHEffect*                             LegHeavyTrauma;                                    // 0x1D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHEffect>                 LegHeavyTraumaClass;                               // 0x1E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaComplication               LegTraumaComplication;                             // 0x1E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2762[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LegHeavyTraumaConst;                               // 0x1EC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2763[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LegLightToHeavyTime;                               // 0x1F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRegenerationLearned;                              // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2764[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HeadLightTraumaHealTimeStart;                      // 0x200(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeadLightTraumaHealTimeEnd;                        // 0x204(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TorsoLightTraumaHealTimeStart;                     // 0x208(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TorsoLightTraumaHealTimeEnd;                       // 0x20C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmLightTraumaHealTimeStart;                       // 0x210(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmLightTraumaHealTimeEnd;                         // 0x214(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LegLightTraumaHealTimeStart;                       // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LegLightTraumaHealTimeEnd;                         // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTraumaSaveInfo                       LoadedSave;                                        // 0x220(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2765[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStat_Trauma* GetDefaultObj();

	void UpdateTraumaHealTime(enum class ETraumaType TraumaType, float Duration);
	void SetTraumaEffectsMod(float NewValue);
	bool HaveTrauma();
	int32 GetServerTimeStamp();
};

// 0x570 (0x890 - 0x320)
// Class SH.SHPlayerState
class ASHPlayerState : public APlayerState
{
public:
	bool                                         bAutoSaveEnabled;                                  // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2770[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerStatsCalculation               PlayerStatsCalculation;                            // 0x328(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        SessionPlayersKilled;                              // 0x378(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionDaysSurvived;                               // 0x37C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastDeathLocation;                                 // 0x380(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLastDeathLocationSaved;                           // 0x38C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2771[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          UniqueItemUsedClassNames;                          // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          QuestGraphsCompleteNames;                          // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHPlayerCharacterSaveData*            PlayerCharacterSaveDataInstance;                   // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USHPlayerProfileSaveData*              PlayerProfileSaveDataInstance;                     // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USHPlayerStatsSaveData*                PlayerStatsSaveDataInstance;                       // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2772[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerCharacterSaveData              ServerPlayerCharacterSaveData;                     // 0x3D0(0xC0)(Protected, NativeAccessSpecifierProtected)
	struct FPlayerProfileSaveData                ServerPlayerProfileSaveData;                       // 0x490(0x230)(Protected, NativeAccessSpecifierProtected)
	struct FPlayerStatsSaveData                  ServerPlayerStatsSaveData;                         // 0x6C0(0x54)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPlayerStatsSaveData                  ClientPlayerStatsSaveData;                         // 0x714(0x54)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2774[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                QuestManagerData;                                  // 0x770(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2775[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                WorldStateManagerData;                             // 0x788(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ClientOnlyData;                                    // 0x798(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                MapManagerData;                                    // 0x7A8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPlayerCharacter*                    ActiveCharacter;                                   // 0x7B8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2776[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bFirstStart;                                       // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2777[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHPlayerCharacter*                    StatCharacter;                                     // 0x7E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USHGameInstance*                       SHGameInstance;                                    // 0x7E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASHGameState*                          SHGameState;                                       // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASHPlayerController*                   PlayerController;                                  // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FItemPlaceholderSave>          LastSavedBackpack;                                 // 0x800(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USHParty*                              JoinedParty;                                       // 0x810(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerUIColor                    UIColor;                                           // 0x818(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHost;                                           // 0x819(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInDyingState;                                   // 0x81A(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvitesBlocked;                                   // 0x81B(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTutorialComplete;                                 // 0x81C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTutorialTeleportationComplete;                    // 0x81D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartingRoomComplete;                             // 0x81E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2779[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemPlaceholderSave>          DefaultBackbackItems;                              // 0x820(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultMoney;                                      // 0x830(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultLevel;                                      // 0x834(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUVFlashlightUnlocked;                             // 0x838(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSittingOnSofa;                                  // 0x839(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFirstAppearanceComplete;                          // 0x83A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMainStoryComplete;                                // 0x83B(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_277B[0x54];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHPlayerState* GetDefaultObj();

	void TutorialReset();
	void TutorialComplete();
	void SetUVFlashlightUnlocked(bool bNewValue);
	void SetNeutralsUnlockedLevel(float NewUnlockedLevel);
	void ServerSaveGame(enum class ESaveSlot SaveSlot, const class FString& SaveName);
	void SendSaveDataToServer(const struct FPlayerCharacterSaveData& PlayerCharacterSaveData, const struct FPlayerProfileSaveData& PlayerProfileSaveData, const struct FPlayerStatsSaveData& PlayerStatsSaveData);
	void SendSaveDataToClient(const struct FPlayerCharacterSaveData& PlayerCharacterSaveData, const struct FPlayerProfileSaveData& PlayerProfileSaveData, const struct FPlayerStatsSaveData& PlayerStatsSaveData, enum class ESaveSlot SaveSlot, const class FString& SaveName);
	void SendProfileSaveDataToClient(const struct FPlayerProfileSaveData& PlayerProfileSaveData, enum class ESaveSlot SaveSlot);
	void SaveGame(enum class ESaveSlot SaveSlot, const class FString& SaveName);
	void PlayerStatsCalculateDistanceTravelled();
	void MakeBackup();
	bool IsInParty();
	bool IsFirstAppearanceComplete();
	bool IsEqual(struct FUniqueNetIdRepl& Id1, struct FUniqueNetIdRepl& Id2);
	bool InventoryLoadedFromSave();
	struct FUniqueNetIdRepl GetUniqueId();
	int32 GetSessionPlayersKilled();
	int32 GetSessionDaysSurvived();
	float GetLongestRealTimeSurvived();
	int32 GetActualNeutralsLevel();
	class ASHPlayerCharacter* GetActiveCharacter();
	void FixWallSpawnTransform(class AController* Player);
	void DeleteGame(enum class ESaveSlot SaveSlot);
	void DeleteAllSaves();
	void CompleteFirstAppearance();
	void AutoSavePlayerProfile(class ASHPlayerCharacter* Character, bool bSendToClient);
};

// 0x58 (0x80 - 0x28)
// Class SH.SHPlayerStatsSaveData
class USHPlayerStatsSaveData : public USaveGame
{
public:
	struct FPlayerStatsSaveData                  PlayerStatsSaveData;                               // 0x28(0x54)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_277C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHPlayerStatsSaveData* GetDefaultObj();

};

// 0x8 (0x410 - 0x408)
// Class SH.SHPoster
class ASHPoster : public ASHItem
{
public:
	int32                                        PosterId;                                          // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_277D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHPoster* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class SH.SHProjectile
class ASHProjectile : public AActor
{
public:
	class USphereComponent*                      CollisionComp;                                     // 0x220(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHProjectile* GetDefaultObj();

	void OnHit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
};

// 0x30 (0x438 - 0x408)
// Class SH.SHProjectileItem
class ASHProjectileItem : public ASHItem
{
public:
	struct FVector                               SocketLocation;                                    // 0x408(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SocketRotation;                                    // 0x414(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ThrowPitchAdd;                                     // 0x420(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxThrowDistance;                                  // 0x424(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2781[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHImpactEffect>           ImpactTemplate;                                    // 0x430(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHProjectileItem* GetDefaultObj();

	void SpawnImpactEffects(struct FHitResult& Impact);
	bool ShouldSpawnImpactEffects(struct FHitResult& Impact);
	void OnThrowStarted();
};

// 0xA0 (0xC8 - 0x28)
// Class SH.SHQuestBase
class USHQuestBase : public UObject
{
public:
	int32                                        ID;                                                // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2784[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2785[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestBase* GetDefaultObj();

	void RemoveFromPlayer(class ASHPlayerCharacter* Player);
	void OnRemoveFromPlayer(class ASHPlayerCharacter* Player);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	bool IsForPlayer(class ASHPlayerCharacter* Player);
	bool IsComplete();
	void GivePlayer(class ASHPlayerCharacter* Player);
	TArray<struct FQuestItemSpawnInfo> GetLootForObject(class ASHPlayerCharacter* Player, class AActor* Actor);
};

// 0x150 (0x218 - 0xC8)
// Class SH.SHQuest
class USHQuest : public USHQuestBase
{
public:
	class FText                                  Description;                                       // 0xC8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLocationDescription                  TargetLocation;                                    // 0xE0(0x60)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EQuestGiver                       QuestGiver;                                        // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestCategory                    QuestCategory;                                     // 0x141(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2787[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestRewardSpawnInfo                 Reward;                                            // 0x148(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class USHQuestTask*>                  Tasks;                                             // 0x1B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHQuestGraph*                         GraphInstance;                                     // 0x1C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHQuestGraph*                         GraphTemplate;                                     // 0x1C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class ASHItem>>        WorldSpawnedItems;                                 // 0x1D0(0x10)(ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdated;                                         // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2788[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHQuestManager*                       _manager;                                          // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USHQuest* GetDefaultObj();

	void RemoveTaskByTag(class FName TaskTag);
	class USHQuestTask* GetTaskByTag(class FName TaskTag);
	void GainReward();
	void Finish();
};

// 0x0 (0x28 - 0x28)
// Class SH.SHQuestDescription
class USHQuestDescription : public UObject
{
public:

	static class UClass* StaticClass();
	static class USHQuestDescription* GetDefaultObj();

};

// 0x128 (0x1D8 - 0xB0)
// Class SH.SHQuestDiaryComponent
class USHQuestDiaryComponent : public UActorComponent
{
public:
	TArray<class USHQuest*>                      ActiveQuests;                                      // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQuestView>                    ActiveQuestsViews;                                 // 0xC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStorylineView>                StorylineViews;                                    // 0xD0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ASHItem>>           RequiredItems;                                     // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugOn;                                          // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_278F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnActiveViewsUpdate;                               // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStorylineUpdate;                                 // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestStart;                                      // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestAdded;                                      // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestRemoved;                                    // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestUpdated;                                    // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestComplete;                                   // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTaskComplete;                                    // 0x168(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActiveQuestChanged;                              // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2790[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SelectedQuestTag;                                  // 0x18C(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2791[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHPlayerCharacter*                    OwnerCharacter;                                    // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASHQuestManager*                       QuestManager;                                      // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSubtitleLine>                 SubtitleQueue;                                     // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2792[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestDiaryComponent* GetDefaultObj();

	void SkipActiveTasks();
	void ShowNextSubtitle();
	void SetSelectedQuest(class FName QuestTag);
	void QuestUpdated(class USHQuest* Quest);
	void QuestTaskComplete(class USHQuestTask* Target);
	void QuestComplete(class USHQuest* Target);
	void OnStorylinesUpdated();
	void OnRep_SelectedQuestTag();
	void OnQuestFinished(class USHQuest* Target);
	void OnActiveViewsReplicated();
	void OnActiveStorylineViewsReplicated();
	bool HaveQuestTask(class FName QuestTaskTag);
	bool HaveQuest(class FName QuestTag);
	bool HaveCompleteQuestTask(class FName QuestTaskTag);
	bool HaveActiveQuestTask(class FName QuestTaskTag);
	struct FQuestView GetSelectedQuestView();
	class FName GetSelectedQuestTag();
	TArray<struct FQuestItemSpawnInfo> GetLootForObject(class AActor* Actor);
	void ClientPlayDialog(class USoundWave* DialogWave, TArray<struct FSubtitleLine>& Subtitles);
	void ClientOnUpdateQuest(struct FQuestView& QuestView);
	void ClientOnTaskComplete(struct FTaskView& TaskView);
	void ClientOnRemoveQuest(struct FQuestView& QuestView);
	void ClientOnQuestStart(struct FQuestView& QuestView);
	void ClientOnQuestComplete(struct FQuestView& QuestView);
	void ClientOnAddQuest(struct FQuestView& QuestView);
};

// 0x8 (0x220 - 0x218)
// Class SH.SHQuestEvent
class USHQuestEvent : public USHQuest
{
public:
	uint8                                        Pad_2793[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestEvent* GetDefaultObj();

};

// 0xD0 (0x2F0 - 0x220)
// Class SH.SHQuestEvent_Defence
class USHQuestEvent_Defence : public USHQuestEvent
{
public:
	uint8                                        Pad_2794[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ASHAICharacter>>    EnemyAIToSpawn;                                    // 0x2C0(0x10)(ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class ASHAICharacter>>    VictimAIToSpawn;                                   // 0x2D0(0x10)(ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ASHCharacter*>                  SpawnedCharacters;                                 // 0x2E0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USHQuestEvent_Defence* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class SH.SHQuestGraph
class USHQuestGraph : public UObject
{
public:
	uint8                                        Pad_2795[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestGraphRequirementInfo>    Requirements;                                      // 0x30(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHQuest*                              QuestTemplate;                                     // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHQuestGraphNode*>             AllNodes;                                          // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHQuestGraphNode*>             RootNodes;                                         // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRunning;                                        // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2796[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USHQuest*                              QuestInstance;                                     // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 PawnInstigator;                                    // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHQuestGraph*                         GraphInstance;                                     // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHQuestGraph*                         GraphTemplate;                                     // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHQuestGraphNode*>             NodesRunningQueue;                                 // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USHQuestGraphNode*>             NodesPendingRemoveRunning;                         // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USHQuestGraphNode*>             NodesPendingExecuteQueue;                          // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USHQuestGraph* GetDefaultObj();

	void Run();
};

// 0x50 (0x78 - 0x28)
// Class SH.SHQuestGraphNode
class USHQuestGraphNode : public UObject
{
public:
	uint8                                        Pad_2799[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BackgroundColor;                                   // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_279A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestContextNode>             ContextNodes;                                      // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHQuestGraphNode*>             NextNodes;                                         // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHQuestGraph*                         Owner;                                             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USHQuestGraphNode* GetDefaultObj();

	class FString GetNodeDescription();
};

// 0x10 (0x88 - 0x78)
// Class SH.SHQuestGraphNode_QuestBase
class USHQuestGraphNode_QuestBase : public USHQuestGraphNode
{
public:
	class USHQuestBase*                          Template;                                          // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USHQuestBase*                          QuestBaseInstance;                                 // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHQuestGraphNode_QuestBase* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class SH.SHQuestGraphNode_AddRandomTask
class USHQuestGraphNode_AddRandomTask : public USHQuestGraphNode_QuestBase
{
public:
	TSubclassOf<class USHQuestRandomTask>        TaskClass;                                         // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumTasksAmount;                                // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumTasksAmount;                                // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHQuestGraphNode_AddRandomTask* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class SH.SHQuestGraphNode_AddRequirement
class USHQuestGraphNode_AddRequirement : public USHQuestGraphNode_QuestBase
{
public:

	static class UClass* StaticClass();
	static class USHQuestGraphNode_AddRequirement* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class SH.SHQuestGraphNode_AddTask
class USHQuestGraphNode_AddTask : public USHQuestGraphNode_QuestBase
{
public:
	TSubclassOf<class USHQuestTask>              TaskClass;                                         // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHQuestGraphNode_AddTask* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class SH.SHQuestGraphNode_Delay
class USHQuestGraphNode_Delay : public USHQuestGraphNode
{
public:
	float                                        Time;                                              // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_279E[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_Delay* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class SH.SHQuestGraphNode_GainReward
class USHQuestGraphNode_GainReward : public USHQuestGraphNode
{
public:

	static class UClass* StaticClass();
	static class USHQuestGraphNode_GainReward* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class SH.SHQuestGraphNode_GiveItem
class USHQuestGraphNode_GiveItem : public USHQuestGraphNode
{
public:
	TSubclassOf<class ASHItem>                   ItemClass;                                         // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Count;                                             // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27A1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_GiveItem* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class SH.SHQuestGraphNode_GiveUFlashlight
class USHQuestGraphNode_GiveUFlashlight : public USHQuestGraphNode_QuestBase
{
public:

	static class UClass* StaticClass();
	static class USHQuestGraphNode_GiveUFlashlight* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class SH.SHQuestGraphNode_MakeAction
class USHQuestGraphNode_MakeAction : public USHQuestGraphNode
{
public:

	static class UClass* StaticClass();
	static class USHQuestGraphNode_MakeAction* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class SH.SHQuestGraphNode_NeutralsLevel
class USHQuestGraphNode_NeutralsLevel : public USHQuestGraphNode
{
public:
	int32                                        UnlockedLevel;                                     // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27A4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_NeutralsLevel* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class SH.SHQuestGraphNode_NeutralsTakeLoc
class USHQuestGraphNode_NeutralsTakeLoc : public USHQuestGraphNode
{
public:
	int32                                        LiberationLocationQuestID;                         // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27A5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_NeutralsTakeLoc* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class SH.SHQuestGraphNode_ParallelExecute
class USHQuestGraphNode_ParallelExecute : public USHQuestGraphNode
{
public:

	static class UClass* StaticClass();
	static class USHQuestGraphNode_ParallelExecute* GetDefaultObj();

};

// 0x20 (0x98 - 0x78)
// Class SH.SHQuestGraphNode_PlayDialog
class USHQuestGraphNode_PlayDialog : public USHQuestGraphNode
{
public:
	class USoundWave*                            DialogWave;                                        // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSubtitleLine>                 Subtitles;                                         // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_PlayDialog* GetDefaultObj();

};

// 0x18 (0x90 - 0x78)
// Class SH.SHQuestGraphNode_PlayOverlays
class USHQuestGraphNode_PlayOverlays : public USHQuestGraphNode
{
public:
	class USoundWave*                            DialogWave;                                        // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalizedOverlays*                    SubtitleOverlay;                                   // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_PlayOverlays* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class SH.SHQuestGraphNode_QuestComplete
class USHQuestGraphNode_QuestComplete : public USHQuestGraphNode
{
public:
	class USHQuestGraph*                         NextGraph;                                         // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHQuestGraphNode_QuestComplete* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class SH.SHQuestGraphNode_Root
class USHQuestGraphNode_Root : public USHQuestGraphNode
{
public:

	static class UClass* StaticClass();
	static class USHQuestGraphNode_Root* GetDefaultObj();

};

// 0x30 (0xA8 - 0x78)
// Class SH.SHQuestGraphNode_SetActorState
class USHQuestGraphNode_SetActorState : public USHQuestGraphNode
{
public:
	TSoftObjectPtr<class AActor>                 ActorReference;                                    // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  State;                                             // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHQuestGraphNode_SetActorState* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class SH.SHQuestGraphNode_SetTaskHidden
class USHQuestGraphNode_SetTaskHidden : public USHQuestGraphNode
{
public:
	class FName                                  TaskTag;                                           // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMarkIsHidden;                                     // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_SetTaskHidden* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class SH.SHQuestGraphNode_StartQuest
class USHQuestGraphNode_StartQuest : public USHQuestGraphNode
{
public:

	static class UClass* StaticClass();
	static class USHQuestGraphNode_StartQuest* GetDefaultObj();

};

// 0x38 (0xB0 - 0x78)
// Class SH.SHQuestGraphNode_WaitActorState
class USHQuestGraphNode_WaitActorState : public USHQuestGraphNode
{
public:
	TSoftObjectPtr<class AActor>                 ActorReference;                                    // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  State;                                             // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_WaitActorState* GetDefaultObj();

};

// 0x18 (0x90 - 0x78)
// Class SH.SHQuestGraphNode_WaitFinish
class USHQuestGraphNode_WaitFinish : public USHQuestGraphNode
{
public:
	bool                                         bCheckQuestIsComplete;                             // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27AA[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_WaitFinish* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class SH.SHQuestGraphNode_WaitForUIClose
class USHQuestGraphNode_WaitForUIClose : public USHQuestGraphNode
{
public:
	uint8                                        Pad_27AB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_WaitForUIClose* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class SH.SHQuestGraphNode_WaitStoryEnd
class USHQuestGraphNode_WaitStoryEnd : public USHQuestGraphNode
{
public:
	uint8                                        Pad_27AC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestGraphNode_WaitStoryEnd* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SH.SHQuestGraphRequirement
class USHQuestGraphRequirement : public UObject
{
public:

	static class UClass* StaticClass();
	static class USHQuestGraphRequirement* GetDefaultObj();

	bool CheckResult(class USHQuestGraph* Graph);
};

// 0x0 (0x408 - 0x408)
// Class SH.SHQuestItem
class ASHQuestItem : public ASHItem
{
public:

	static class UClass* StaticClass();
	static class ASHQuestItem* GetDefaultObj();

};

// 0x2C8 (0x4E8 - 0x220)
// Class SH.SHQuestManager
class ASHQuestManager : public AActor
{
public:
	class UDataTable*                            LocationsDataTable;                                // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            EnemyAIPresetsDataTable;                           // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            FriendlyAIPresetsDataTable;                        // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            RewardsDataTable;                                  // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USHStoryline>>      StorylineClasses;                                  // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHStoryline*>                  Storylines;                                        // 0x250(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStorylinesUpdated;                               // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                         bDebugOn;                                          // 0x270(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGraphSequenceTest;                                // 0x271(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnQuestFinished;                                   // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestStarted;                                    // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTaskComplete;                                    // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorStateChanged;                               // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CF[0x118];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USHQuestGraph*>                 ActiveGraphs;                                      // 0x3D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQuestRewardSave>              PendingRewards;                                    // 0x3E0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadedFromSave;                                   // 0x3F0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class USHQuestEvent*>    SpawnedEventForTrigger;                            // 0x3F8(0x50)(NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class ASHItem>>           AvailableItems;                                    // 0x448(0x10)(ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27D1[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class USHQuest*>                        QuestList;                                         // 0x498(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ASHQuestManager* GetDefaultObj();

	void TestAllGraphsForErrors();
	void TaskComplete(int32 TaskID);
	float PlayDialogWithOverlaysForQuest(class USoundWave* DialogWave, class ULocalizedOverlays* Overlays, class USHQuest* Quest);
	void PlayDialogForQuest(class USoundWave* DialogWave, TArray<struct FSubtitleLine>& Subtitles, class USHQuest* Quest);
	void OnItemDropped(class AActor* Sender, class ASHItem* Item);
	bool IsTaskValidForSpawn(int32 TaskID);
	class USHQuestTask* GetTaskByTag(class FName Tag);
	TArray<class USHStoryline*> GetStorylines();
	int32 GetQuestsInCategoryCount(enum class EQuestCategory QuestCategory);
	TArray<class USHQuest*> GetQuestsForPlayer(class ASHPlayerCharacter* Player);
	class USHQuest* GetQuestByTag__(class ASHPlayerCharacter* Player, class FName Tag);
	class USHQuest* GetQuestByTag(class FName Tag);
	class USHQuest* GetQuestByID(int32 ID);
	int32 GetNeutralsReputationLevel();
	struct FLocationDescription GetNearestLocation(const struct FVector& WorldPosition, bool WithContainer);
	TArray<class FName> GetCompleteGraphNames();
	TArray<class USHQuestTask*> GetAllTasksByTag(class FName Tag);
	TArray<class USHQuest*> GetAllQuestsByCategory(enum class EQuestCategory QuestCategory);
	TArray<class USHQuest*> GetAllQuests();
	void GainReward(class ASHPlayerCharacter* Player, struct FQuestRewardSpawnInfo* Reward, class USHQuestGraph* SourceGraph);
	void Finish(class USHQuest* Quest);
	void ExecuteCancel(class USHQuest* Quest);
	void CreateQuestFromGraph(class USHQuestGraph* GraphTemplate, class APawn* PawnInstigator);
	class USHQuest* CreateQuest(TSubclassOf<class USHQuest> QuestClass);
	class USHQuestEvent* CreateNewEvent(TSubclassOf<class USHQuestEvent> EventClass, class ASHEventTriggerVolume* Trigger);
	void CollectLocationsData();
	bool CanRunQuestGraph(class USHQuestGraph* GraphTemplate);
};

// 0x68 (0x130 - 0xC8)
// Class SH.SHQuestTask
class USHQuestTask : public USHQuestBase
{
public:
	TSoftObjectPtr<class AActor>                 TaskAreaObject;                                    // 0xC8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ASHLevelLocation>       TaskMarkRequiredLocation;                          // 0xF0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSimpleMark;                                    // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMarkIsHidden;                                     // 0x119(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNameIsGenerated;                                  // 0x11A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MustSendItems;                                     // 0x11B(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProgressMax;                                       // 0x11C(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USHQuest*                              QuestOwner;                                        // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Progress;                                          // 0x128(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27D3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestTask* GetDefaultObj();

	int32 GetProgressMax();
	int32 GetProgress();
	void ClearProgress();
	void AddProgressFor(int32 Amount);
};

// 0x0 (0x130 - 0x130)
// Class SH.SHQuestRandomTask
class USHQuestRandomTask : public USHQuestTask
{
public:

	static class UClass* StaticClass();
	static class USHQuestRandomTask* GetDefaultObj();

};

// 0x0 (0x310 - 0x310)
// Class SH.SHQuestRewardContainer
class ASHQuestRewardContainer : public ASHItemContainer
{
public:

	static class UClass* StaticClass();
	static class ASHQuestRewardContainer* GetDefaultObj();

};

// 0x18 (0xC8 - 0xB0)
// Class SH.SHQuestSpawnerComponent
class USHQuestSpawnerComponent : public UActorComponent
{
public:
	TArray<class USHQuestGraph*>                 QuestSpawnPool;                                    // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoSpawnQuests;                                  // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHQuestSpawnerComponent* GetDefaultObj();

	void SpawnFromQuestPool();
	TArray<class USHQuestGraph*> GetQuestGraphsCanSpawn();
	bool CanSpawnQuestGraphs();
};

// 0x28 (0x130 - 0x108)
// Class SH.SHRadioGroup
class USHRadioGroup : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnWidgetSelectedEvent;                             // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        SelectedIndex;                                     // 0x118(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class USHUserWidget>>  Widgets;                                           // 0x120(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHRadioGroup* GetDefaultObj();

	void SelectPrev();
	void SelectNext();
	void Select(int32 Index);
	void RemoveChild(class USHUserWidget* Widget);
	void OnWidgetSelected(class USHUserWidget* Sender, bool IsSelected);
	int32 GetWidgetsCount();
	class USHUserWidget* GetWidget(int32 Index);
	class USHUserWidget* GetSelectedWidget();
	void Deselect();
	void Clear();
	void AddChild(class USHUserWidget* Widget);
};

// 0x10 (0x230 - 0x220)
// Class SH.SHRadioManager
class ASHRadioManager : public AActor
{
public:
	float                                        ChatMessageCooldown;                               // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ChatMessageReady;                                  // 0x224(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27E4[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHRadioManager* GetDefaultObj();

	void StartChatMessageCooldown();
	void SendChatMessage(class FText From, class FText Message);
	void ProcessKillEvent(class APawn* Killer, class ASHCharacter* Target);
	void ProcessGlobalEvent(class FText From, class FText Message);
	void OnChatMessageCooldownTimer();
	bool IsChatMessageOnCooldown();
};

// 0x8 (0x410 - 0x408)
// Class SH.SHRelic
class ASHRelic : public ASHItem
{
public:
	int32                                        RelicId;                                           // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHRelic* GetDefaultObj();

};

// 0x38 (0xE8 - 0xB0)
// Class SH.SHReputationComponent
class USHReputationComponent : public UActorComponent
{
public:
	class UDataTable*                            ReputationInfoDataTable;                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContextString;                                     // 0xB8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FReputationSave>               ReputationSaveData;                                // 0xC8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FReputationInfo>               _reputationInfo;                                   // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USHReputationComponent* GetDefaultObj();

	void LoadSaveData(const TArray<struct FReputationSave>& SaveData);
	TArray<struct FQuestUniqueRewardItemInfo> GetUniqueRewardsToLevel(class UDataTable* ExperienceRewardData, int32 Level);
	TArray<struct FReputationSave> GetSaveData();
	int32 GetReputationLevel(TSubclassOf<class ASHAICharacter> NPC);
	class FString GetLevelAsString(int32 Level);
	int32 GetExperienceToLevel(class UDataTable* ExperienceRewardData, int32 Level);
	void AddQuestRewardExperienceFromDatatable(TSubclassOf<class ASHAICharacter> NPC, class UDataTable* DataTable);
	void AddExperience(TSubclassOf<class ASHAICharacter> NPC, float Experience);
};

// 0x0 (0x30 - 0x30)
// Class SH.SHRichTextBlockImageDecorator
class USHRichTextBlockImageDecorator : public URichTextBlockImageDecorator
{
public:

	static class UClass* StaticClass();
	static class USHRichTextBlockImageDecorator* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class SH.SaveInfoSaveData
class USaveInfoSaveData : public USaveGame
{
public:
	struct FSaveInfo                             SaveInfoSaveData;                                  // 0x28(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USaveInfoSaveData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SH.SHSessionsLibrary
class USHSessionsLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USHSessionsLibrary* GetDefaultObj();

	bool SessionUpdateOnline(const class FString& NewOnline);
	class FString GetSettingsAsString(const struct FGameDifficultySettings& Settings);
	bool GetSessionStats(int32& OnlinePlayers, int32& OnlinePlayersMax, class FString& ServerName);
	class FString GetSessionPropertyString(struct FBlueprintSessionResult& SessionResult, class FName SettingName);
	float GetSessionPropertyFloat(struct FBlueprintSessionResult& SessionResult, class FName SettingName);
	bool GetSessionPropertyBool(struct FBlueprintSessionResult& SessionResult, class FName SettingName);
	class FString GetSessionIdStr(struct FBlueprintSessionResult& SessionResult);
	struct FGameDifficultySettings GetSessionGameDifficultySettings(struct FBlueprintSessionResult& SessionResult);
};

// 0x0 (0x408 - 0x408)
// Class SH.SHSkillBookItem
class ASHSkillBookItem : public ASHItem
{
public:

	static class UClass* StaticClass();
	static class ASHSkillBookItem* GetDefaultObj();

};

// 0x0 (0x408 - 0x408)
// Class SH.SHSkillRewardItem
class ASHSkillRewardItem : public ASHBasePerkRewardItem
{
public:

	static class UClass* StaticClass();
	static class ASHSkillRewardItem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SH.SHSkillsListener
class ISHSkillsListener : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISHSkillsListener* GetDefaultObj();

};

// 0xC0 (0x170 - 0xB0)
// Class SH.SHSkillTreeComponent
class USHSkillTreeComponent : public UActorComponent
{
public:
	int32                                        TotalSkillPointsAmount;                            // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FreeSkillPointsAmount;                             // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BonusSkillPointsAmount;                            // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSkillData>                    Skills;                                            // 0xC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebug;                                            // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkillTreeResetPrice;                               // 0xD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContextString;                                     // 0xD8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class ESkillType>                LearnedSkills;                                     // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class ESkillType>                PendingLearnSkills;                                // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHPlayerCharacter*                    OwnerPlayer;                                       // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2800[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHSkillTreeComponent* GetDefaultObj();

	void ServerResetSkillTree(bool bForceFreeReset);
	void ServerResetPendingLearn();
	void ServerPendingLearn(enum class ESkillType SkillType, bool bAdd);
	void ServerLearn(enum class ESkillType SkillType, bool HideNotify);
	void ServerConfirmPendingLearn();
	void ResetSkillTree(bool bForceFreeReset);
	void PendingLearn(enum class ESkillType SkillType, bool bAdd);
	void OnRep_SkillTreeUpdated();
	void OnRep_CalculateSkillPoints();
	void LoadSaveData(const struct FSkillsSaveData& SkillsSaveData);
	void Learn(enum class ESkillType SkillType, bool HideNotify);
	bool IsPendingLearn(enum class ESkillType SkillType);
	bool IsLearned(enum class ESkillType SkillType);
	int32 GetSpentSkillPointsInCategory(enum class ESkillCategory SkillCategory);
	struct FSkillData GetSkillData(enum class ESkillType SkillType, bool* Result);
	struct FSkillsSaveData GetSaveData();
	class ASHPlayerCharacter* GetOwnerPlayer();
	TArray<struct FSkillData> GetAllSkills();
	TArray<struct FSkillData> GetAllLearnedSkillsFinals();
	TArray<enum class ESkillType> GetAllLearnedSkills();
	bool CanResetSkillTree();
	bool CanLearnIgnoreSkillpoints(enum class ESkillType SkillType);
	bool CanLearn(enum class ESkillType SkillType);
};

// 0x28 (0x248 - 0x220)
// Class SH.SHSoundClassCrossfade
class ASHSoundClassCrossfade : public AActor
{
public:
	class USoundClass*                           From;                                              // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           To;                                                // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToVolume;                                          // 0x230(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x234(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2801[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHSoundClassCrossfade* GetDefaultObj();

};

// 0x18 (0x238 - 0x220)
// Class SH.SHSpawnStation
class ASHSpawnStation : public AActor
{
public:
	uint8                                        Pad_2803[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  SpawnStationMesh;                                  // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnStationState                CurrentState;                                      // 0x230(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnStationState                DefaultState;                                      // 0x231(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoaded;                                           // 0x232(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2804[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHSpawnStation* GetDefaultObj();

	void UpdateState();
	void SetState(enum class ESpawnStationState NewState);
	bool OnStateUpdated();
	void OnRep_CurrentState();
};

// 0x8 (0x238 - 0x230)
// Class SH.SHStartingPlayerStart
class ASHStartingPlayerStart : public ASHCustomPlayerStart
{
public:
	enum class EStartingPlayerStartType          Type;                                              // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2805[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHStartingPlayerStart* GetDefaultObj();

};

// 0x20 (0x240 - 0x220)
// Class SH.SHStartingRoom
class ASHStartingRoom : public AActor
{
public:
	int32                                        RoomId;                                            // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2807[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHPersonalRoomPlayerStart*            PlayerStart;                                       // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStartingRoomStage                RoomStage;                                         // 0x230(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2808[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHStartingRoom* GetDefaultObj();

	void UpdateOverlapsCallback();
	void SetRoomStage(enum class EStartingRoomStage NewRoomStage);
	void OnRoomStageUpdated(bool bFromOverlap);
	void OnRep_RoomStage();
	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	struct FTransform GetSpawnTransform();
	enum class EStartingRoomStage GetRoomStage();
};

// 0x0 (0x220 - 0x220)
// Class SH.SHStartingRoomEvacuationZone
class ASHStartingRoomEvacuationZone : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASHStartingRoomEvacuationZone* GetDefaultObj();

	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	class ASHStartingPlayerStart* GetPlayerStart(class ASHPlayerCharacter* PlayerCharacter);
};

// 0x28 (0x50 - 0x28)
// Class SH.SHSteamManager
class USHSteamManager : public UObject
{
public:
	uint8                                        Pad_2809[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USHGameInstance*                       SHGameInstance;                                    // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHSteamManager* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class SH.SHStoryline
class USHStoryline : public UObject
{
public:
	class FText                                  StoryName;                                         // 0x28(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	class FText                                  StoryDescription;                                  // 0x40(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHAICharacter>            StoryNpc;                                          // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USHQuestGraph*>                 StoryGraphs;                                       // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompleteGraphsCount;                               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_280A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHStoryline* GetDefaultObj();

	int32 GetTotalGraphsCount();
	class USHQuestGraph* GetStartingGraph();
	int32 GetCompleteGraphsCount();
};

// 0x10 (0x230 - 0x220)
// Class SH.SHTemperatureVolume
class ASHTemperatureVolume : public AActor
{
public:
	float                                        Temperature;                                       // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TemperatureVolumeModifier;                         // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_280D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHTemperatureVolume* GetDefaultObj();

	void PlayerLeave(class ASHPlayerCharacter* Character);
	void PlayerEnter(class ASHPlayerCharacter* Character);
	bool OnPlayerLeaveEvent(class ASHPlayerCharacter* Character);
	bool OnPlayerEnterEvent(class ASHPlayerCharacter* Character);
	void NewOnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void NewOnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// 0x100 (0x1B0 - 0xB0)
// Class SH.SHTradeComponent
class USHTradeComponent : public UActorComponent
{
public:
	class ASHInventory*                          BaseItemsInventory;                                // 0xB0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemTradeRules>               BaseItemsSpawnRules;                               // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemTradeRules>               UniqueItemSpawnRules;                              // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemTradeRules>               PerkItemSpawnRules;                                // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemTradeRules>               TradeItemRules;                                    // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultSellModificator;                            // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultBuyModificator;                             // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemsRespawnCooldown;                              // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2815[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSubclassOf<class ASHItem>, float>      BuyModificatorMap;                                 // 0x110(0x50)(NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class ASHItem>, float>      SellModificatorMap;                                // 0x160(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USHTradeComponent* GetDefaultObj();

	void Trade(class ASHPlayerCharacter* Character, TArray<class USHInventorySlot*>& BuyOffer, TArray<class USHInventorySlot*>& SellOffer);
	void Sell(class ASHPlayerCharacter* Character, class USHInventorySlot* SellSlot, int32 Count);
	int32 GetSellPrice(class ASHPlayerCharacter* Character, class USHInventorySlot* Slot);
	int32 GetSellOfferPrice(class ASHPlayerCharacter* Character, TArray<class USHInventorySlot*>& SellOffer);
	int32 GetBuyPrice(class ASHPlayerCharacter* Character, class USHInventorySlot* Slot);
	int32 GetBuyOfferPrice(class ASHPlayerCharacter* Character, TArray<class USHInventorySlot*>& BuyOffer);
	void Buy(class ASHPlayerCharacter* Character, class USHInventorySlot* BuySlot, int32 Count);
};

// 0x8 (0x358 - 0x350)
// Class SH.SHTrauma
class ASHTrauma : public ASHEffect
{
public:
	enum class ETraumaType                       TraumaType;                                        // 0x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2816[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHTrauma* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class SH.SHTraumaCuringEvent
class USHTraumaCuringEvent : public USHEvent
{
public:
	enum class ETraumaCuringType                 TraumaCuringType;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHTraumaCuringEvent* GetDefaultObj();

	class USHTraumaCuringEvent* CreateTraumaCuringEvent(enum class ETraumaCuringType NewTraumaCuringType, class AActor* OwnerActor);
};

// 0x8 (0x30 - 0x28)
// Class SH.SHTraumaEvent
class USHTraumaEvent : public USHEvent
{
public:
	enum class ETraumaType                       TraumaType;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraumaApplyType                  TraumaApplyType;                                   // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHTraumaEvent* GetDefaultObj();

	class USHTraumaEvent* CreateTraumaEvent(enum class ETraumaType NewTraumaType, enum class ETraumaApplyType NewTraumaApplyType, class AActor* OwnerActor);
};

// 0x8 (0x410 - 0x408)
// Class SH.SHTrophy
class ASHTrophy : public ASHItem
{
public:
	int32                                        TrophyId;                                          // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHTrophy* GetDefaultObj();

};

// 0xB8 (0x168 - 0xB0)
// Class SH.SHTutorialComponent
class USHTutorialComponent : public UActorComponent
{
public:
	class UDataTable*                            InstructionsData;                                  // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAutoTriggers;                                  // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2824[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            Progress;                                          // 0xC0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShowTutorial;                                    // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCheckTriggers;                                   // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class ASHPlayerCharacter*                    OwnerCharacter;                                    // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPlayerController*                   OwnerController;                                   // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2827[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          TutorialQueue;                                     // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ContextString;                                     // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USHTutorialComponent* GetDefaultObj();

	void TutorialShown(class FName InstructionID);
	void TriggerTurorial(class FName InstructionID);
	bool GetInstructionData(class FName InstructionID, struct FInstructionsInfoData* Result);
};

// 0x0 (0x340 - 0x340)
// Class SH.SHTutorialGameMode
class ASHTutorialGameMode : public ASHGameMode
{
public:

	static class UClass* StaticClass();
	static class ASHTutorialGameMode* GetDefaultObj();

};

// 0x18 (0x248 - 0x230)
// Class SH.SHUserWidget
class USHUserWidget : public UUserWidget
{
public:
	bool                                         IsSelectable;                                      // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSelected;                                        // 0x231(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2832[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FOnWidgetSelect;                                   // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHUserWidget* GetDefaultObj();

	void SetTooltipButtons(const TArray<struct FTooltipButtonInfo>& NewTooltipButtons);
	void SetSlotMovePayload(class UObject* Payload);
	void SetSlotDetailsWidget(class USHUserWidget* Widget);
	void SetSelected(bool bSelected);
	void OnSynchronizeProperties();
	int32 GetTooltipsCounter();
	TArray<struct FTooltipButtonInfo> GetTooltipButtons();
	class UObject* GetSlotMovePayload();
	class USHUserWidget* GetSlotDetailsWidget();
};

// 0x160 (0x568 - 0x408)
// Class SH.SHWeapon
class ASHWeapon : public ASHItem
{
public:
	TArray<struct FWeaponModifierInstanceData>   ModifiedVersions;                                  // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurabilityPenaultyConstant;                        // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurabilityHitCost;                                 // 0x41C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageType>               DamageType;                                        // 0x420(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadCritMultiplier;                                // 0x428(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePhysAnimation;                                 // 0x42C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLeftHandIK;                                    // 0x42D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2846[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASHImpactEffect>           ImpactTemplate;                                    // 0x430(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ImpactEffectScale;                                 // 0x438(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PostImpactEffectScale;                             // 0x444(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugOn;                                          // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2847[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEquipStartedEvent;                               // 0x458(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEquipFinishedEvent;                              // 0x468(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnEquipStartedEvent;                             // 0x478(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2848[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCurrentStateChanged;                             // 0x490(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EWeaponType                       WeaponType;                                        // 0x4A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponAttackType                 LastWeaponAttackType;                              // 0x4A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EWeaponCollisionEnum              WeaponCollisionEnum;                               // 0x4A3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStun;                                          // 0x4A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanOneShot;                                       // 0x4A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHCharacter*                          MyPawn;                                            // 0x4A8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHPlayerCharacter*                    MySHPlayerCharacter;                               // 0x4B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASHAICharacter*                        MySHAICharacter;                                   // 0x4B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                SkeletalWeaponMesh;                                // 0x4C0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  StaticWeaponMesh;                                  // 0x4C8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                       StaticMeshEffectsComponent;                        // 0x4D0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              StaticMeshParticleSystemComponent;                 // 0x4D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                       PickupMeshEffectsComponent;                        // 0x4E0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FWeaponAnimMontageInfo                EquipAnim;                                         // 0x4E8(0x18)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeaponAnimMontageInfo                UnEquipAnim;                                       // 0x500(0x18)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_284C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             OnEquipSound;                                      // 0x520(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             OnUnEquipSound;                                    // 0x528(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_284D[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CriticalStrikeChance;                              // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadCriticalStrikeMultiplier;                      // 0x55C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyCriticalStrikeMultiplier;                      // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumCriticalDamage;                             // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHWeapon* GetDefaultObj();

	struct FHitResult WeaponTrace(struct FVector& TraceFrom, struct FVector& TraceTo);
	void UpdateVisibility(bool bVisible, bool bSkipAutoTimer);
	void StopFire();
	void StopAltFire();
	void StartFire();
	void StartAltFire();
	bool ShouldSpawnImpactEffects(struct FHitResult& Impact);
	void SetOwningPawn(class ASHCharacter* NewOwner);
	void ServerStopFire();
	void ServerStopAltFire();
	void ServerStartFire();
	void ServerStartAltFire();
	void ResetVisibility();
	void OnRep_MyPawn();
	void OnEquip();
	void MulticastOnUnEquip();
	void MulticastOnEquip();
	void K2_OnEnterInventory(class ASHCharacter* Character);
	bool IsAttachedToPawn();
	enum class EWeaponType GetWeaponType();
	class UStaticMeshComponent* GetStaticMesh();
	class USkeletalMeshComponent* GetSkeletalMesh();
	class ASHCharacter* GetPawnOwner();
	class ASHPlayerCharacter* GetOwningPlayer();
	TSubclassOf<class ASHWeapon> GetModifiedVersionClass(enum class EWeaponModifierType ModType);
	enum class EWeaponAttackType GetLastWeaponAttackType();
	float GetEquipDuration();
	enum class EWeaponState GetCurrentState();
	bool GetAttackCanBeDodged();
	float CustomApplyWeaponDamage(class AActor* TargetCharacter, float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	bool CanFire();
	bool CanBlock();
	float ApplyWeaponDamage(class AActor* TargetCharacter, float Damage, struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	float ApplyPointWeaponDamage(class AActor* TargetCharacter, float Damage, struct FPointDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	float ApplyCriticalStrike(float BaseDamage, float MonstrumBonusCriticalStrikeMultiplier, bool bHeadStrike);
};

// 0x0 (0x408 - 0x408)
// Class SH.SHWeapon_Ammo
class ASHWeapon_Ammo : public ASHItem
{
public:

	static class UClass* StaticClass();
	static class ASHWeapon_Ammo* GetDefaultObj();

};

// 0x4B8 (0xA20 - 0x568)
// Class SH.SHWeapon_MeleeBase
class ASHWeapon_MeleeBase : public ASHWeapon
{
public:
	struct FMeleeWeaponData                      BaseHitConfig;                                     // 0x568(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FHeavyMeleeWeaponData                 HeavyHitConfig;                                    // 0x5B8(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMeleeWeaponData                      WeakHitConfig;                                     // 0x620(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EMeleeWeaponType                  MeleeWeaponType;                                   // 0x670(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayingBlock;                                     // 0x671(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2854[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlockHitData                         BlockConfig;                                       // 0x678(0x30)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DurabilityBlockCost;                               // 0x6A8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2855[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponAnimMontageInfo                AnimMontageToPlay;                                 // 0x6B0(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsInSwing;                                        // 0x6C8(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingAttack;                                  // 0x6C9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2856[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ASHEffect>>         OnHitEffectsClass;                                 // 0x6D8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHWeapon_MeleeModificationInfo> MeleeModificationInfo;                             // 0x6E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHWeapon_MeleeModificationInfo> SecondMeleeModificationInfo;                       // 0x6F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASHLostControlEffect>      LostControlEffect;                                 // 0x6F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2857[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TraceMarker0;                                      // 0x708(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker1;                                      // 0x710(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker2;                                      // 0x718(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker3;                                      // 0x720(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker4;                                      // 0x728(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker5;                                      // 0x730(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker6;                                      // 0x738(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker7;                                      // 0x740(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker8;                                      // 0x748(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker9;                                      // 0x750(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker10;                                     // 0x758(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker11;                                     // 0x760(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker12;                                     // 0x768(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker13;                                     // 0x770(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker14;                                     // 0x778(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker15;                                     // 0x780(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker16;                                     // 0x788(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker17;                                     // 0x790(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker18;                                     // 0x798(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker19;                                     // 0x7A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker20;                                     // 0x7A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker21;                                     // 0x7B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker22;                                     // 0x7B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker23;                                     // 0x7C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker24;                                     // 0x7C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker25;                                     // 0x7D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker26;                                     // 0x7D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker27;                                     // 0x7E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker28;                                     // 0x7E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker29;                                     // 0x7F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker30;                                     // 0x7F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker31;                                     // 0x800(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker32;                                     // 0x808(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker33;                                     // 0x810(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker34;                                     // 0x818(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker35;                                     // 0x820(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker36;                                     // 0x828(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker37;                                     // 0x830(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker38;                                     // 0x838(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TraceMarker39;                                     // 0x840(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2858[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HitAnimationPostponeSeconds;                       // 0x860(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostImpactEffectDelaySeconds;                      // 0x864(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2859[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bTraceMarkersActive;                               // 0x878(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMeleeBlockBrokenStart;                           // 0x880(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMeleeBlockBrokenStop;                            // 0x890(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMeleeBlockHit;                                   // 0x8A0(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_285B[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int8                                         brokenBlockCounter;                                // 0x8D0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8                                         HitBlockCounter;                                   // 0x8D1(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8                                         HitBlockHeavyCounter;                              // 0x8D2(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_285C[0x2D];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HittedActors;                                      // 0x900(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSet<class AActor*>                          HittedActorsSet;                                   // 0x910(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_285F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USHMeleeAttack>            BaseAttackClass;                                   // 0x968(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHMeleeAttack>            BaseCrouchAttackClass;                             // 0x970(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHMeleeAttack>            PowerAttackClass;                                  // 0x978(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHMeleeAttack>            PowerCrouchAttackClass;                            // 0x980(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHMeleeAttack>            WeakAttackClass;                                   // 0x988(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHMeleeAttack>            BlockClass;                                        // 0x990(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHMeleeAttack>            BlockAttackClass;                                  // 0x998(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHMeleeAttack>            FromJumpAttackClass;                               // 0x9A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHMeleeAttack>            FromStealthAttackClass;                            // 0x9A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USHMeleeAttack>            ThrowWeaponAttackClass;                            // 0x9B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttackCanBeDodged;                                // 0x9B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2860[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSubclassOf<class USHMeleeAttack>, class USHMeleeAttack*> AttackPool;                                        // 0x9C0(0x50)(Transient, NativeAccessSpecifierPrivate)
	TArray<class USHMeleeAttack*>                AttackPoolArray;                                   // 0xA10(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ASHWeapon_MeleeBase* GetDefaultObj();

	void SpawnWeaponEffects(class ASHCharacter* TargetActor);
	void ServerNotifyHit(class AActor* HitActor, const struct FHitResult& Impact, const struct FVector& ShootDir);
	void OnSwingUpdate(enum class EMeleeSwingType SwingType, bool bIsLastSwing);
	void OnSwingStop(enum class EMeleeSwingType SwingType);
	void OnStopAttack();
	void OnStartAttack();
	void OnRep_PendingBlock();
	void OnRep_HitTraced();
	void OnRep_HitBlockHeavy();
	void OnRep_HitBlock();
	void OnRep_BrokenBlock();
	void OnRep_AttackPoolArray();
	void OnBlockBrokenStop();
	void InitAttackPool();
	float GetStaminaCostFor(enum class EMeleeAnimationType AttackType);
	void DeInitAttackPool();
	void DeactivateSwingCollison();
	void ClientStopAltFire();
	void ActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ActivateSwingCollision();
};

// 0x58 (0xA78 - 0xA20)
// Class SH.SHWeapon_Fist
class ASHWeapon_Fist : public ASHWeapon_MeleeBase
{
public:
	class UBoxComponent*                         RightHandCollision;                                // 0xA20(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         LeftHandCollision;                                 // 0xA28(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HitDamage;                                         // 0xA30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeavyDamageModifier;                               // 0xA34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWeaponAnimMontageInfo>        NormalAttackAnimations;                            // 0xA38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWeaponAnimMontageInfo>        HoldAttackAnimations;                              // 0xA48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldDelay;                                         // 0xA58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeleeAttackInfo                      CurrentAttack;                                     // 0xA5C(0x5)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bStartedAttack;                                    // 0xA61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2862[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHWeapon_Fist* GetDefaultObj();

	void ServerSimulateAttack(const struct FMeleeAttackInfo& AttackInfo);
	void OnRep_CurrentAttack(struct FMeleeAttackInfo& LastAttack);
};

// 0x30 (0xA50 - 0xA20)
// Class SH.SHWeapon_Kick
class ASHWeapon_Kick : public ASHWeapon_MeleeBase
{
public:
	class UBoxComponent*                         KickCollision;                                     // 0xA20(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HitDamage;                                         // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponAnimMontageInfo>        KickAnimations;                                    // 0xA30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeleeAttackInfo                      CurrentAttackInfo;                                 // 0xA40(0x5)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	struct FMeleeAttackInfo                      CurrentAttack;                                     // 0xA45(0x5)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bStartedAttack;                                    // 0xA4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_286C[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHWeapon_Kick* GetDefaultObj();

	void ServerSimulateAttack(const struct FMeleeAttackInfo& AttackInfo);
	void OnRep_CurrentAttack(struct FMeleeAttackInfo& LastAttack);
	void OnRep_AttackInfo(struct FMeleeAttackInfo& LastAttackInfo);
};

// 0x38 (0xA58 - 0xA20)
// Class SH.SHWeapon_Melee
class ASHWeapon_Melee : public ASHWeapon_MeleeBase
{
public:
	class UBoxComponent*                         HitCollision;                                      // 0xA20(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseHitDamage;                                     // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDoHeavyAttack;                                 // 0xA2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2876[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeavyAttackDelay;                                  // 0xA30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2877[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsPlayingHeavyAttack;                             // 0xA40(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStartedHeavyAttack;                             // 0xA41(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStartedHeavyAttackSwing;                        // 0xA42(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeleeAttackInfo                      CurrentAttackInfo;                                 // 0xA43(0x5)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2878[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHWeapon_Melee* GetDefaultObj();

	void StopHeavyAttack();
	void StartFireAi(enum class EMeleeAnimationType Type);
	void StartAttack(enum class EMeleeAnimationType Type);
	void ServerSimulateAttack(const struct FMeleeAttackInfo& AttackInfo);
	void OnRep_AttackInfo(struct FMeleeAttackInfo& LastAttackInfo);
	bool IsStartedHeavyAttackSwing();
	bool IsStartedHeavyAttack();
	bool IsPlayingHeavyAttack();
};

// 0x48 (0x268 - 0x220)
// Class SH.SHWeapon_MeleeModificationInfo
class ASHWeapon_MeleeModificationInfo : public AActor
{
public:
	struct FMeleeModificationInfo                MeleeModificationInfo;                             // 0x220(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class ASHCharacter*                          OwnerCharacter;                                    // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStarted;                                          // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2879[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LifeTime;                                          // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DamageCauser;                                      // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHWeapon_MeleeModificationInfo* GetDefaultObj();

	void DamageTick();
};

// 0x128 (0x690 - 0x568)
// Class SH.SHWeapon_Ranged
class ASHWeapon_Ranged : public ASHWeapon
{
public:
	class UStaticMeshComponent*                  CageMesh;                                          // 0x568(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeaponRangedData                     WeaponConfig;                                      // 0x570(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRangedWeaponReloadStart;                         // 0x5A0(0x10)(Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        CageLifeSpan;                                      // 0x5B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_287B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       FireAC;                                            // 0x5B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MuzzleAttachPoint;                                 // 0x5C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       MuzzleFX;                                          // 0x5C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              MuzzlePSC;                                         // 0x5D0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              MuzzlePSCSecondary;                                // 0x5D8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCameraShake>              FireCameraShake;                                   // 0x5E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UForceFeedbackEffect*                  FireForceFeedback;                                 // 0x5E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             FireSound;                                         // 0x5F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             OutOfAmmoSound;                                    // 0x5F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FWeaponAnimMontageInfo                ReloadAnim;                                        // 0x600(0x18)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeaponAnimMontageInfo                FireAnim;                                          // 0x618(0x18)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeaponAnimMontageInfo                AimFireAnim;                                       // 0x630(0x18)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAimFPPoseAnimationData               FPAimPoseAnims;                                    // 0x648(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        BitPad_ED : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bPendingReload : 1;                                // Mask: 0x2, PropSize: 0x10x668(0x1)(Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_EE : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_287D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShootCounter;                                      // 0x66C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_287E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASHWeapon_Ranged* GetDefaultObj();

	void StartReload(bool bFromReplication);
	void ServerStopReload();
	void ServerStartReload();
	void OnRep_ShootCounter();
	void OnRep_Reload();
	void OnDetachCage();
	void OnAttachCage();
	int32 GetCurrentAmmoInClip();
	struct FVector GetCameraDamageStartLocation(struct FVector& AimDir);
	class UStaticMeshComponent* GetCageMesh();
	int32 GetAmmoPerClip();
	void DropCage();
	void DetachCage();
	void ClientStartReload();
	void AttachCage();
};

// 0x60 (0x6F0 - 0x690)
// Class SH.SHWeapon_Ranged_Instant
class ASHWeapon_Ranged_Instant : public ASHWeapon_Ranged
{
public:
	struct FInstantWeaponData                    InstantConfig;                                     // 0x690(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FakeMeleeTraceRadius;                              // 0x6A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       TrailFX;                                           // 0x6B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TrailTargetParam;                                  // 0x6B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstantHitInfo                       HitNotify;                                         // 0x6C0(0x30)(Net, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHWeapon_Ranged_Instant* GetDefaultObj();

	struct FHitResult TestShootTrace();
	void OnRep_HitNotify();
	struct FVector GetStartPoint();
};

// 0xE8 (0x650 - 0x568)
// Class SH.SHWeapon_ThrowingItems
class ASHWeapon_ThrowingItems : public ASHWeapon
{
public:
	class FName                                  ThrowSocketName;                                   // 0x568(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class ASHItem>, struct FWeaponAnimMontageInfo> ThrowingAnimations;                                // 0x570(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class ASHItem>, struct FWeaponDetailedAnimMontageInfo> ThrowingDetailedAnimations;                        // 0x5C0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bAutoThrowItem;                                    // 0x610(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_288E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHProjectileItem*                     _spawnedProjectile;                                // 0x618(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FWeaponAnimMontageInfo                CurrentPlayingMontage;                             // 0x620(0x18)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FVector                               _destinationPoint;                                 // 0x638(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_288F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_ThrowHandle;                                    // 0x648(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ASHWeapon_ThrowingItems* GetDefaultObj();

	void ThrowItem();
	void SpawnThrownItem(TSubclassOf<class ASHProjectileItem> ProjectileClass);
	void ShowThrownItem();
	void PlayThrow(const struct FVector& DestinationPoint, TSubclassOf<class ASHProjectileItem> ProjectileClass);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void CheckWasThrown();
};

// 0xA0 (0x150 - 0xB0)
// Class SH.SHWeatherComponent
class USHWeatherComponent : public UActorComponent
{
public:
	uint8                                        Pad_2895[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceOffset;                                       // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceRate;                                         // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASHPlayerCharacter*                    OwnerPlayer;                                       // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUnderRoof;                                      // 0xC8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeatherType                      CurrentWeather;                                    // 0xC9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeatherType                      LastInitializedWeather;                            // 0xCA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2897[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ASHEffect>>         SmallRainEffectsClasses;                           // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHEffect*>                     SmallRainEffects;                                  // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ASHEffect>>         MediumRainEffectsClasses;                          // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHEffect*>                     MediumRainEffects;                                 // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ASHEffect>>         BigRainEffectsClasses;                             // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHEffect*>                     BigRainEffects;                                    // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ASHEffect>>         ToxicRainEffectsClasses;                           // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHEffect*>                     ToxicRainEffects;                                  // 0x140(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHWeatherComponent* GetDefaultObj();

	void StopWeatherParticles(enum class EWeatherType Weather);
	void StartWeatherParticles(enum class EWeatherType Weather);
	void OnRep_CurrentWeather();
	void ClientInitialized();
};

// 0x0 (0x220 - 0x220)
// Class SH.SHWeatherEffectsActor
class ASHWeatherEffectsActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASHWeatherEffectsActor* GetDefaultObj();

	void StopToxicRain();
	void StopSnow();
	void StopRain();
	void StopOutdoorSnow();
	void StopFog();
	void StopAsh();
	void StartToxicRain();
	void StartSnow();
	void StartSmallRain();
	void StartOutdoorSnow();
	void StartMediumRain();
	void StartFog();
	void StartBigRain();
	void StartAsh();
};

// 0xC8 (0x2E8 - 0x220)
// Class SH.SHWorldEventsManager
class ASHWorldEventsManager : public AActor
{
public:
	struct FWorldEventProperties                 CurrentWorldEvent;                                 // 0x220(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	int32                                        CurrentWorldEventIndex;                            // 0x2B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWorldEventProperties>         WorldEventProperties;                              // 0x2B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumTimeBeforeNextEvent;                        // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumTimeBeforeNextEvent;                        // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          WorldEventsTimerHandle;                            // 0x2D0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASHEffect*>                     ActiveEffects;                                     // 0x2D8(0x10)(Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASHWorldEventsManager* GetDefaultObj();

	void ShowStartingChatMessage(int32 GlobalEventIndex, int32 ChatIndex);
	void ShowFinishChatMessage(int32 GlobalEventIndex, int32 ChatIndex);
	TArray<class ASHEffect*> GetActiveEffectsFor(class ASHPlayerCharacter* Character);
	TArray<class ASHEffect*> GetActiveEffects();
};

// 0xC8 (0xF0 - 0x28)
// Class SH.SHWorldSaveData
class USHWorldSaveData : public USaveGame
{
public:
	struct FWorldSaveData                        WorldSaveData;                                     // 0x28(0xC8)(Edit, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USHWorldSaveData* GetDefaultObj();

};

// 0xF8 (0x120 - 0x28)
// Class SH.SHWorldStateManager
class USHWorldStateManager : public UObject
{
public:
	TSet<class AActor*>                          SpawnedWorldActors;                                // 0x28(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FBufferArchiveWraper> ActorDatabase;                                     // 0x78(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	TMap<class FString, class FName>             PendingActorStateChange;                           // 0xC8(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	uint8                                        Pad_28A9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USHWorldStateManager* GetDefaultObj();

	void SetPendingActorState(TSoftObjectPtr<class AActor> ActorPtr, class FName NewState);
	void OnActorEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
};

// 0x0 (0x220 - 0x220)
// Class SH.SHWorldStressEventsController
class ASHWorldStressEventsController : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASHWorldStressEventsController* GetDefaultObj();

	void Initialize();
	void EnableController();
	void DisableController();
};

}


