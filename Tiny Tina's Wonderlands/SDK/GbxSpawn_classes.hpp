#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0x5E8 - 0x458)
// Class GbxSpawn.Spawner
class ASpawner : public AActor
{
public:
	uint8                                        Pad_623[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnActorSpawned;                                    // 0x460(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorDied;                                       // 0x470(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorFellOutOfWorld;                             // 0x480(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorSuspend;                                    // 0x490(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorUnsuspend;                                  // 0x4A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAllSpawned;                                      // 0x4B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAllDied;                                         // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveWarmup;                                      // 0x4D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveStart;                                       // 0x4E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveComplete;                                    // 0x4F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnReset;                                           // 0x500(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorSpawnedData;                                // 0x510(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_62D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnExternalActorSpawnedData;                        // 0x538(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorDiedData;                                   // 0x548(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnExternalActorDiedData;                           // 0x558(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScriptedWarmup;                                  // 0x568(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorSuspendData;                                // 0x578(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	class USpawnerComponent*                     SpawnerComponent;                                  // 0x588(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpawnerLinkComponent*                 SpawnerLinkComponent;                              // 0x590(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpawnPointComponent*                  SpawnPointComponent;                               // 0x598(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpawnerTeamComponent*                 SpawnerTeamComponent;                              // 0x5A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoGroundSpawnPointComponents;                   // 0x5A8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_638[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ExcludeAutoGroundPointComponents;                  // 0x5B0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_639[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASpawner* GetDefaultObj();

	void SuspendAllActors();
	void SetTeamOverride(class UTeam* OverrideTeam);
	void SetTeam(class UTeam* NewTeam);
	void SetSpawnerStyle(class USpawnerStyle* Style);
	void SetAlwaysActive(bool bInAlwaysActive);
	void ResetSpawning();
	void OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle);
	void OnSpawningComplete(class ASpawner* Spawner);
	bool IsSpawnerEnabled();
	bool IsFinishedSpawning();
	class USpawnPointComponent* GetSpawnPointComponent();
	class USpawnerTeamComponent* GetSpawnerTeamComponent();
	class USpawnerLinkComponent* GetSpawnerLinkComponent();
	class USpawnerComponent* GetSpawnerComponent();
	int32 GetNumAliveActors(bool bIncludeExternal);
	void EnableSpawner();
	void DisableSpawner();
	void DestroyAllActors();
	void CompleteScriptedWarmup();
	bool AreAllDead(bool bIncludeExternal);
};

// 0x2B8 (0x9A8 - 0x6F0)
// Class GbxSpawn.SpawnerComponent
class USpawnerComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_716[0x98];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnActorSpawned;                                    // 0x788(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorDied;                                       // 0x798(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorSuspend;                                    // 0x7A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorUnsuspend;                                  // 0x7B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAllSpawned;                                      // 0x7C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAllDied;                                         // 0x7D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveWarmup;                                      // 0x7E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveStart;                                       // 0x7F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveComplete;                                    // 0x808(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScriptedWarmup;                                  // 0x818(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnReset;                                           // 0x828(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorSpawnedData;                                // 0x838(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorDiedData;                                   // 0x848(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorSuspendData;                                // 0x858(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_71D[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnabled;                                          // 0x888(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_720[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ChanceToEnableOnInit;                              // 0x890(0x38)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bAlwaysActive;                                     // 0x8C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bResetOnEnabled;                                   // 0x8C9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EScriptedWarmup                   ScriptedWarmup;                                    // 0x8CA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_724[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActivationRadius;                                  // 0x8CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bActivationUsesRadius;                             // 0x8D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_727[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AVolume*>                       ActivationVolumes;                                 // 0x8D8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bActivationUsesVolumes;                            // 0x8E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSpawnDetails                         SpawnDetails;                                      // 0x8E9(0x7)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        MinimumActivationTime;                             // 0x8F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_728[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USpawnerStyle*                         SpawnerStyle;                                      // 0x8F8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpawnerStyle*                         SpawnerStyleOverride;                              // 0x900(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSpawnLimitData>               Limits;                                            // 0x908(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bApplyLimitsToGroup;                               // 0x918(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_72D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USpawnFactory*>                 WaitingFactories;                                  // 0x920(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_72F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASpawnPoint*>                   SpawnPoints;                                       // 0x940(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bRandomizeSpawnPoints;                             // 0x950(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_732[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSpawnPointGroup>              SpawnPointGroups;                                  // 0x958(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ESpawnPointUseType                SpawnPointUseType;                                 // 0x968(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_735[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnPointClusterRadius;                           // 0x96C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USpawnPointComponent*>          SpawnPointComponents;                              // 0x970(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class ASpawner*                              Spawner;                                           // 0x980(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIncludeExternalActorsForAllDiedEvent;             // 0x988(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_73A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESpawnerDrawStyle                 DrawStyle;                                         // 0x98B(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_73D[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseScriptedWarmup;                                // 0x9A0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_740[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpawnerComponent* GetDefaultObj();

	void SuspendAllActors();
	void SetTeam(class UTeam* NewTeam);
	void SetSpawnOptionsWaves(class USpawnOptionData* NewSpawnOptions);
	void SetSpawnOptions(class USpawnOptionData* NewSpawnOptions);
	void SetSpawnOptionForWaveId(class USpawnOptionData* NewSpawnOption, int32 WaveId);
	void SetNumWaves(int32 NumWaves);
	void ResetSpawning();
	void OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle);
	bool IsSpawnerStyleClassAllowed(class UClass* SpawnerStyleClass);
	bool IsFinishedSpawning();
	void IncludeExternalActorsForAllDiedEvent();
	class USpawnOptionData* GetSpawnOptions();
	class USpawnerComponent* GetParentSpawner();
	int32 GetNumSuspendedActors();
	int32 GetNumSpawnedActors(bool bIncludeExternal, bool bInGroup);
	int32 GetNumDeadActors(bool bIncludeExternal, bool bInGroup);
	int32 GetNumAliveActors(bool bIncludeExternal, bool bInGroup);
	TArray<class AActor*> GetAliveActors();
	void EnableSpawner();
	void DisableSpawner();
	void DestroyAllActors();
	void CompleteScriptedWarmup();
	bool AreAllDead(bool bIncludeExternal, bool bInGroup);
};

// 0x80 (0x4D8 - 0x458)
// Class GbxSpawn.SpawnPoint
class ASpawnPoint : public AActor
{
public:
	uint8                                        Pad_77F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnActorSpawned;                                    // 0x460(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_780[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnActorDied;                                       // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USceneComponent*                       SpawnRootComponent;                                // 0x498(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpawnPointComponent*                  SpawnPointComponent;                               // 0x4A0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USpawnerComponent*>             ConnectedSpawners;                                 // 0x4A8(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class USceneComponent*                       TempRootFix;                                       // 0x4B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_785[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASpawnPoint* GetDefaultObj();

	void SetSpawnStyleTag(const struct FGameplayTag& NewTag);
	void ResetStretchPoint();
	struct FGameplayTag GetSpawnStyleTag();
	void EnableSpawnPoint();
	void DisableSpawnPoint();
};

// 0x8 (0x40 - 0x38)
// Class GbxSpawn.AnimNotify_SpawnAnim
class UAnimNotify_SpawnAnim : public UAnimNotify
{
public:
	enum class ESpawnAnimNotifyAction            Action;                                            // 0x38(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_78E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_SpawnAnim* GetDefaultObj();

};

// 0x18 (0x1C0 - 0x1A8)
// Class GbxSpawn.GbxAction_SpawnAnim
class UGbxAction_SpawnAnim : public UGbxAction_Anim
{
public:
	TSubclassOf<class UGbxAction>                SpawnPointAction;                                  // 0x1A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                SpawnPointActionStop;                              // 0x1B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMovementMode                     OverrideMovementMode;                              // 0x1B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideMovementMode;                             // 0x1B9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisableCollisionOnSpawn;                          // 0x1BA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A2[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAction_SpawnAnim* GetDefaultObj();

	class AActor* K2_GetSpawnPoint();
};

// 0x8 (0x90 - 0x88)
// Class GbxSpawn.GbxCondition_SpawnCostAvailable
class UGbxCondition_SpawnCostAvailable : public UGbxCondition
{
public:
	class USpawnOptionData*                      SpawnOptions;                                      // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxCondition_SpawnCostAvailable* GetDefaultObj();

};

// 0x10 (0x4E8 - 0x4D8)
// Class GbxSpawn.MultiSpawnPoint
class AMultiSpawnPoint : public ASpawnPoint
{
public:
	TArray<class USpawnPointComponent*>          SpawnPointComponents;                              // 0x4D8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AMultiSpawnPoint* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxSpawn.SpawnDLCScript
class USpawnDLCScript : public UObject
{
public:

	static class UClass* StaticClass();
	static class USpawnDLCScript* GetDefaultObj();

	void OnAllSpawned(class USpawnerComponent* SpawnerComponent);
	void OnAllDied(class USpawnerComponent* SpawnerComponent);
	void OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
	void OnActorDied(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
};

// 0x218 (0x248 - 0x30)
// Class GbxSpawn.SpawnDLCData
class USpawnDLCData : public UGbxDataAsset
{
public:
	TMap<class USpawnOptionData*, class USpawnOptionData*> GlobalReplacement;                                 // 0x30(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bGlobalReplacementAlwaysEnabledDuringEvent;        // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_813[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSpawnDLCGroup>                SpawnerReplacements;                               // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TSubclassOf<class USpawnDLCScript>           Script;                                            // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bScriptGloballyReplacedSpawners;                   // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bScriptManuallyReplacedSpawners;                   // 0xA1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_817[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             MaximumTotalEventEnemies;                          // 0xA8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             MaximumEventEnemiesPerSpawner;                     // 0x128(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             MaximumScriptedSpawnersPerGroup;                   // 0x1A8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FSpawnDLCScriptGroup>          ScriptedSpawners;                                  // 0x228(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UDLCScriptedSpawerExpansionList*> ExpansionScriptedSpawners;                         // 0x238(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnDLCData* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxSpawn.GlobalSpawnDLCData
class UGlobalSpawnDLCData : public UGbxDataAsset
{
public:
	TArray<struct FSpawnDLCItem>                 DLCs;                                              // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGlobalSpawnDLCData* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxSpawn.DLCScriptedSpawerExpansionList
class UDLCScriptedSpawerExpansionList : public UGbxDataAsset
{
public:
	TArray<struct FSpawnDLCScriptGroup>          ScriptedSpawners;                                  // 0x30(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDLCScriptedSpawerExpansionList* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxSpawn.SpawnedActorInterface
class ISpawnedActorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISpawnedActorInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxSpawn.SpawnerBlueprintLibrary
class USpawnerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USpawnerBlueprintLibrary* GetDefaultObj();

	void SuspendSpawnedActors(class UObject* WorldContextObject);
	class AActor* SpawnActorWithSpawnOptionsTransform(class AActor* Context, class USpawnOptionData* SpawnOptions, const struct FTransform& SpawnTransform);
	int32 SpawnActorWithSpawnOptionsAsync(class UObject* WorldContext, const struct FSpawnManagerAsyncRequest& Request);
	class AActor* SpawnActorWithSpawnOptions(class AActor* Context, class USpawnOptionData* SpawnOptions, class USpawnPointComponent* SpawnPointComponent);
	class AActor* SpawnActorWithSpawner(class AActor* Context, class USpawnFactory* Factory, class USpawnPointComponent* SpawnPointComponent, class USpawnerComponent* SpawnerComponent, class AActor* Owner);
	void SetMaxSpawnCost(class UObject* WorldContextObject, int32 NewMaxSpawnCost);
	void RestoreSuspendedActors(class UObject* WorldContextObject);
	void RemoveActorFromSpawnSystem(class AActor* Actor);
	void CancelSpawnActorWithOptionsAsyncRequest(class UObject* WorldContext, int32 RequestID);
};

// 0x80 (0x770 - 0x6F0)
// Class GbxSpawn.SpawnerLinkComponent
class USpawnerLinkComponent : public UPrimitiveComponent
{
public:
	TArray<struct FSpawnerLinkData>              LinkDataList;                                      // 0x6F0(0x10)(ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        LinkedSpawners;                                    // 0x700(0x10)(Edit, ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	bool                                         bAutoProximityLink;                                // 0x710(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_88B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpawnerLinkData                      MasterLinkData;                                    // 0x718(0x28)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bBeingDestroyed;                                   // 0x740(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_88E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       SharedStates;                                      // 0x748(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class ASpawner*>                      AllLinkedSpawners;                                 // 0x758(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	uint8                                        Pad_890[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpawnerLinkComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxSpawn.SpawnerStateInterface
class ISpawnerStateInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISpawnerStateInterface* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxSpawn.SpawnerStyle
class USpawnerStyle : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class USpawnerStyle* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class GbxSpawn.SpawnerStyle_Bunch
class USpawnerStyle_Bunch : public USpawnerStyle
{
public:
	class USpawnOptionData*                      SpawnOptions;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxParam                             NumActorsParam;                                    // 0x38(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        SpawnDelay;                                        // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8B6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpawnerStyle_Bunch* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxSpawn.SpawnerStyle_BunchList
class USpawnerStyle_BunchList : public USpawnerStyle
{
public:
	TArray<struct FSpawnBunchListItem>           Bunches;                                           // 0x30(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        SpawnDelay;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8C0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpawnerStyle_BunchList* GetDefaultObj();

};

// 0x220 (0x250 - 0x30)
// Class GbxSpawn.SpawnerStyle_Den
class USpawnerStyle_Den : public USpawnerStyle
{
public:
	class USpawnOptionData*                      SpawnOptions;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInfinite;                                         // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8CD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             NumActorsParam;                                    // 0x40(0x80)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGbxParam                             MaxAliveActorsWhenPassive;                         // 0xC0(0x80)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGbxParam                             MaxAliveActorsWhenThreatened;                      // 0x140(0x80)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                        SpawnDelay;                                        // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WaveDelay;                                         // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WavePercent;                                       // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8D1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             NumAliveActorsParam;                               // 0x1D0(0x80)(NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USpawnerStyle_Den* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxSpawn.SpawnerStyle_Encounter
class USpawnerStyle_Encounter : public USpawnerStyle
{
public:
	TArray<struct FEncounterWave>                Waves;                                             // 0x30(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USpawnerStyle_Encounter* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxSpawn.SpawnerStyle_Single
class USpawnerStyle_Single : public USpawnerStyle
{
public:
	class USpawnOptionData*                      SpawnOptions;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnerStyle_Single* GetDefaultObj();

};

// 0x18 (0xD8 - 0xC0)
// Class GbxSpawn.SpawnerStyleFactory_Bunch
class USpawnerStyleFactory_Bunch : public USpawnerStyle_Bunch
{
public:
	class USpawnFactory*                         SpawnFactory;                                      // 0xC0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESpawnLimitType                   AliveLimitType;                                    // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8F4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USpawnOptionData*                      InternalSpawnOptions;                              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnerStyleFactory_Bunch* GetDefaultObj();

	bool IsFactoryClassAllowed(class UClass* FactoryClass);
};

// 0x18 (0x268 - 0x250)
// Class GbxSpawn.SpawnerStyleFactory_Den
class USpawnerStyleFactory_Den : public USpawnerStyle_Den
{
public:
	class USpawnFactory*                         SpawnFactory;                                      // 0x250(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESpawnLimitType                   AliveLimitType;                                    // 0x258(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_902[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USpawnOptionData*                      InternalSpawnOptions;                              // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnerStyleFactory_Den* GetDefaultObj();

	bool IsFactoryClassAllowed(class UClass* FactoryClass);
};

// 0x18 (0x50 - 0x38)
// Class GbxSpawn.SpawnerStyleFactory_Single
class USpawnerStyleFactory_Single : public USpawnerStyle_Single
{
public:
	class USpawnFactory*                         SpawnFactory;                                      // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESpawnLimitType                   AliveLimitType;                                    // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_909[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USpawnOptionData*                      InternalSpawnOptions;                              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnerStyleFactory_Single* GetDefaultObj();

	bool IsFactoryClassAllowed(class UClass* FactoryClass);
};

// 0x20 (0x1D8 - 0x1B8)
// Class GbxSpawn.SpawnerTeamComponent
class USpawnerTeamComponent : public UTeamComponent
{
public:
	class UTeam*                                 OverrideTeam;                                      // 0x1B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideTeam;                                     // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_910[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResolvedTeamType;                                  // 0x1C8(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTeam*                                 EvaluatedTeam;                                     // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnerTeamComponent* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GbxSpawn.SpawnFactory
class USpawnFactory : public UObject
{
public:
	bool                                         bUsedInSpawnPointOverlapChecks;                    // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideActorTags;                                // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_919[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Tags;                                              // 0x30(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FSpawnDetails                         SpawnDetails;                                      // 0x50(0x7)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_91B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTagContainerComponent*        CachedActorClassTagComponent;                      // 0x58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTeam*                                 CachedTeam;                                        // 0x60(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_91D[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpawnFactory* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class GbxSpawn.SpawnFactory_Container
class USpawnFactory_Container : public USpawnFactory
{
public:
	class USpawnOptionData*                      Options;                                           // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnFactory_Container* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class GbxSpawn.SpawnFactory_ContainerSoftRef
class USpawnFactory_ContainerSoftRef : public USpawnFactory
{
public:
	struct FSpawnOptionDataSoftPath              OptionsPath;                                       // 0x88(0x18)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnFactory_ContainerSoftRef* GetDefaultObj();

};

// 0x140 (0x1C8 - 0x88)
// Class GbxSpawn.SpawnFactory_Generic
class USpawnFactory_Generic : public USpawnFactory
{
public:
	uint8                                        Pad_931[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ActorProperties;                                   // 0x90(0x8)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseActorProperties;                               // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIncludeSkeletalMeshForSpawnExtent;                // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_934[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0xA0(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SpawnOrigin;                                       // 0xC8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               SpawnExtent;                                       // 0xD4(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideSpawnSize;                                // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESpawnActorCollisionHandlingMethod CollisionHandling;                                 // 0xE1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideCollisionHandling;                        // 0xE2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_93D[0xD5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoftObjectPath>               ActorPropertyAssetRefCache;                        // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnFactory_Generic* GetDefaultObj();

	bool ShouldSkipActorProperty(class UProperty* ActorProperty);
};

// 0x3B0 (0x3D8 - 0x28)
// Class GbxSpawn.SpawnManager
class USpawnManager : public UObject
{
public:
	uint8                                        Pad_951[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        AdditionalSpawnPointOverlapActors;                 // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_952[0x148];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSpawnManagerAsyncRequestEntry> AsyncRequests;                                     // 0x198(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FSpawnManagerAsyncRequestEntry        SpawningAsyncRequest;                              // 0x1A8(0x80)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_957[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        SpawnManagerClassName;                             // 0x238(0x18)(Edit, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxSpawnCost;                                      // 0x250(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_95B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCanResetSpawners;                                 // 0x258(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_95C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnerResetPeriod;                                // 0x25C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxActorsSpawnedPerFrame;                          // 0x260(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UpdatePeriod;                                      // 0x264(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SuspendTestPeriod;                                 // 0x268(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        IrrelevantPeriod;                                  // 0x26C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AlwaysRelevantDistance;                            // 0x270(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AlwaysIrrelevantDistance;                          // 0x274(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UGlobalSpawnDLCData>    GlobalDLCData;                                     // 0x278(0x28)(Edit, Config, GlobalConfig, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseMultiframeSpawning;                            // 0x2A0(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_969[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                PrivateWorld;                                      // 0x2A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USpawnDLCData*>                 DLCs;                                              // 0x2B0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_96B[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSpawnerData>                  Spawners;                                          // 0x2E8(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       CachedPlayerLocations;                             // 0x2F8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class AController*>                   CachedPlayers;                                     // 0x308(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class AActor*                                SpawnedActor;                                      // 0x318(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_96E[0xA8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        TrackedExternalActors;                             // 0x3C8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnManager* GetDefaultObj();

	void ActorDestroyed(class AActor* Actor);
};

// 0x8 (0x40 - 0x38)
// Class GbxSpawn.SpawnSystemEditorSettings
class USpawnSystemEditorSettings : public UDeveloperSettings
{
public:
	enum class ESpawnSystemStreamStyle           StreamStyle;                                       // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSpawnerDescriptions;                          // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_978[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpawnSystemEditorSettings* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class GbxSpawn.SpawnOptionData
class USpawnOptionData : public UGbxDataAsset
{
public:
	uint8                                        Pad_97C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSpawnFactoryData>             Options;                                           // 0x38(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FSpawnDetails                         SpawnDetails;                                      // 0x48(0x7)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_97D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 AssetGuid;                                         // 0x50(0x10)(DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnOptionData* GetDefaultObj();

	void BeginAsyncLoadingAssets();
};

// 0x290 (0x980 - 0x6F0)
// Class GbxSpawn.SpawnPointComponent
class USpawnPointComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_9B4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnActorSpawned;                                    // 0x6F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorDied;                                       // 0x708(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSpawnAnimComplete;                               // 0x718(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B8[0x1A0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnabled;                                          // 0x8C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9BA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASpawnPoint*                           SpawnPoint;                                        // 0x8D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          SpawnAITreeTag;                                    // 0x8D8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          SpawnAction;                                       // 0x8E0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESpawnStretchType                 SpawnStretchType;                                  // 0x8E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9BC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceToGroundDistance;                             // 0x8EC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStretchOrient;                                    // 0x8F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Tags;                                              // 0x8F8(0x20)(Edit, NativeAccessSpecifierPrivate)
	enum class ESpawnPointFilter                 FilterMatchType;                                   // 0x918(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFilterByTags;                                     // 0x919(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGameplayContainerMatchType       TagMatchType;                                      // 0x91A(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9BF[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StretchyPoint;                                     // 0x920(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGbxTriggerProperty                   ResetStretch;                                      // 0x950(0x1)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9C2[0x1F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAttachSpawnedActors;                              // 0x970(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9C3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachSlotName;                                    // 0x978(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnPointComponent* GetDefaultObj();

	void SetSpawnStyleTag(const struct FGameplayTag& NewTag);
	void ResetStretchPoint();
	bool HasSpawnAITreeTag();
	struct FTransform GetStretchyPoint();
	struct FGameplayTag GetSpawnStyleTag();
	struct FGameplayTag GetSpawnAITreeTag();
	void EnableSpawnPoint();
	void DisableSpawnPoint();
};

// 0x0 (0x28 - 0x28)
// Class GbxSpawn.SpawnPointProvider
class ISpawnPointProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISpawnPointProvider* GetDefaultObj();

};

// 0x58 (0x840 - 0x7E8)
// Class GbxSpawn.SpawnPreviewComponent
class USpawnPreviewComponent : public UPreviewComponent
{
public:
	TArray<struct FSpawnPreviewState>            PreviewList;                                       // 0x7E8(0x10)(ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	int32                                        ActiveSpawnPointIdx;                               // 0x7F8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9D2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction>                PreviewAction;                                     // 0x800(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoCycle;                                        // 0x808(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxTriggerProperty                   CycleActor;                                        // 0x809(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bShowAction;                                       // 0x80A(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRepeatAction;                                     // 0x80B(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxTriggerProperty                   ReplayAction;                                      // 0x80C(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9D5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UGbxActionComponent>    ActionComponent;                                   // 0x810(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USpawnerComponent*>             SpawnerList;                                       // 0x818(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9D6[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpawnPreviewComponent* GetDefaultObj();

	void OnReplayAction();
	void OnCycleActor(enum class ECycleDirection Direction);
};

}


